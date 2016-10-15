/* Problem ID: 1251
 * Author: YQ_Beyond
 * Run ID: 17707009
 * Exe Time: 218MS
 * Exe Memory: 45336K
 * Code Len: 1604 B
 * Language: C
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dictree{
    struct dictree* child[26];
    int num;
}DictreeNode, *Dictree;

void insert(Dictree root, char *str)
{
    int i, index;
    Dictree cur = root, _new = NULL;

    for (i = 0; i < strlen(str); i++)
    {
        if (strlen(str) == 0) return;
        index = str[i] - 'a';
        if(NULL != cur->child[index])
        {
            cur = cur->child[index];
            (cur->num)++; 
        }
        else
        {
            _new = (Dictree)calloc(1, sizeof(DictreeNode));
            if (NULL == _new) exit(-1);            
            cur->child[index]  = _new;
            cur = _new;
            cur->num = 1;
        }
    }
}

void free_mem(Dictree root)
{
    int i;
    if (NULL == root)
        return;
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

int prefix_count(Dictree root, char *str)
{
    int i, index;
    Dictree cur = root;
    for (i = 0; i < strlen(str); i++)
    {
        if (strlen(str) == 0) return 0;
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
    return cur->num;
}

int main()
{
    char str[15];
    char ch;
    Dictree root = (Dictree)calloc(1, sizeof(DictreeNode));
    int i = 0;
    while (1)
    {
        ch = getchar();
        if ('\n' == ch){
            if (i == 0){
                break;
            }
            else{
                str[i++] = '\0';
                insert(root, str);
                i = 0;
                continue;
            }
        }
        else{
            str[i++] = ch;
        }
    }

    while (scanf("%s", str) != EOF)
    {
        printf("%d\n", prefix_count(root, str));
    }

    free_mem(root);
    return 0;
}