#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
	struct node* child[26];
	int n;
}node, *Node;

Node root;

void insert(char *str)
{
	int i, index, len;
	Node cur = NULL, new_node = NULL;

	len = strlen(str);
	if (0 == len)
	{
		return ;
	}

	cur = root;

	for (int i = 0; i < len; i++)
	{
		index = str[i] - 'a';
		if (cur->child[index] != NULL)
		{
			cur = cur->child[index];
			(cur->n)++;			
		}
		else
		{
			new_node = (Node)malloc(sizeof(node));
			if (NULL == new_node)
			{
				printf("error\n");
				exit(-1);
			}
			cur->child[index] = new_node;cur = new_node;
			cur->n = 1;
		}
	}
}


int find_word(char *str)
{
	int i, index, len;
	Node cur = NULL;

	len = strlen(str);
	if (0 == len)
	{
		return 0;
	}

	cur = root;
	for (i = 0; i < len; i++)
	{
		index = str[i] - 'a';
		if (NULL != cur->child[index])
		{
			cur = cur->child[index];
		}
		else
		{
			return 0;
		}
	}
	return cur->n;
}

void release(Node root)
{
	int i;

	if (NULL == root)
	{
		return ;		
	}

	for (i = 0; i < 26; i++)
	{
		if (root->child[i] != NULL)
		{
			release(root->child[i]);
		}
	}
	free(root);
	root = NULL;
}

int main()
{
	freopen("in.txt", "r", stdin);
	char tmp;
	int i;

	root = (Node) malloc(sizeof(node));
	if (NULL == root)
	{
		exit(-1);
	}

	while (gets(tmp), strcmp(tmp, "") != 0)
	{
		insert(tmp);
	}

	while (scanf("%s", tmp) != EOF)
	{
		i = find_word(tmp);
		printf("%d\n", i);
	}
	release(root);
	return 0;
}
