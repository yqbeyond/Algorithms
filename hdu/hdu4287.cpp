// Problem: hdu 4287 - Intelligem IME
// Key words: 字典树、广度优先遍历
// Date: 2016.07.23

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dictree{
	struct dictree* child[26];
	int num;
}DictreeNode, *Dictree;

char n_seqs[5005][10];

int area_len[] = {0, 3, 6, 9, 12, 15, 19, 22, 26};

void insert(Dictree root, char *str)
{
	int i, index;
	Dictree cur = root, _new = NULL;

	if (strlen(str) == 0) return;

	for (i = 0; i < strlen(str); i++)
	{
		index = str[i] - 'a';
		if (cur->child[index] != NULL)
		{			
			cur = cur->child[index];
			(cur->num)++;
		}
		else
		{
			_new = (Dictree)calloc(1, sizeof(DictreeNode));
			if (NULL == _new) exit(-1);
			cur->child[index] = _new;
			cur = _new;
			_new->num = 1;
		}
	}
}

int n_matches(Dictree root, char *str)
{
	int i, index, sum = 0, j;

	if (root == NULL) return 0;
	if (strlen(str) == 0) return 1;
	
	index = str[0] - '2';
	bool flag = true;
	for (j = area_len[index]; j < area_len[index+1]; j++)
	{
		if (NULL != root->child[j])		
		{
			sum += n_matches(root->child[j], str+1);
		}
	}
	
	return sum;
}

void free_mem(Dictree root)
{
	int i;
	if (root == NULL) return;
	for (i = 0; i < 26; i++)
	{
		if (NULL != root->child[i])
		{
			free_mem(root->child[i]);
		}
	}
	free(root);
	root = NULL;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	int i;
	int T;
	int N, M;
	char str[10];
	Dictree root;

	scanf("%d", &T);
	while (T--)
	{
		root = (Dictree)calloc(1, sizeof(DictreeNode));
		scanf("%d%d", &N, &M);
		for (i = 0; i < N; i++)
		{
			scanf("%s", n_seqs[i]);
		}

		for (i = 0; i < M; i++)
		{
			scanf("%s", str);
			insert(root, str);
		}

		for (i = 0; i < N; i++)
		{
			printf("%d\n", n_matches(root, n_seqs[i]));
		}
		free_mem(root);
	}
	return 0;
}
