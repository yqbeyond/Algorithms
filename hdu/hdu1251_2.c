/* Problem ID: 1251
 * Author: YQ_Beyond
 * Run ID: 17706844
 * Exe Time: 218MS
 * Exe Memory: 45332K
 * Code Len: 2880 B
 * Language: C
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ZERO 0
#define ALPH_LEN 26 /* 26个字母 */
const char FIRST_CHAR = 'a';

typedef struct node
{
    struct node *child[ALPH_LEN]; /* 存储下一个字符 */
    int n; /* 记录当前单词出现的次数 */
}node, *Node;

Node root; /* 字典树的根结点(不存储任何字符) */
/* 插入单词 */
void insert(char *str)
{
    int i, index, len;
    Node current = NULL, newnode = NULL;
    
    len = strlen(str);
    if (ZERO == len) /* 此单词长度为零, 无须插入 */
    {
        return;
    }
    
    current = root; /* 开始时当前的结点为根结点 */
    for (i = 0; i < len; i++) /* 逐个字符插入 */
    {
        index = str[i] - FIRST_CHAR; /* 获取此字符的下标 */
        if (current->child[index] != NULL) /* 字符已在字典树中 */
        {
            current = current->child[index]; /* 修改当前的结点位置 */
            (current->n)++; /* 当前单词又出现一次, 累加 */
        }
        else /* 此字符还没出现过, 则新增结点 */
        {
            newnode = (Node)calloc(1, sizeof(node)); /* 新增一结点, 并初始化 */
            if (NULL == newnode)
            {
                printf("空间分配失败!\n");
                exit(-1);
            }
            current->child[index] = newnode;
            current = newnode; /* 修改当前的结点的位置 */
            current->n = 1; /* 此新单词出现一次 */
        }
    }
}
/* 在字典树中查找单词 */
int find_word(char *str)
{
    int i, index, len;
    Node current = NULL;
    
    len = strlen(str);
    if (ZERO == len) /* 当前单词长度为0, 则直接返回 */
    {
        return ZERO;
    }
    
    current = root; /* 查找从根结点开始 */
    for (i = 0; i < len; i++)
    {
        index = str[i] - FIRST_CHAR; /* 获取此字符的下标 */
        if (current->child[index] != NULL) /* 当前字符存在字典树中 */
        {
            current = current->child[index]; /* 修改当前结点的位置 */
        }
        else
        {
            return ZERO; /* 还没比较完就出现不匹配, 字典树中没有此单词 */
        }
    }
    
    return current->n; /* 此单词出现的次数 */
}
/*释放内存*/
void release(Node root)
{
    int i;
    
    if (NULL == root)
    {
        return;
    }
    
    for (i = 0; i < ALPH_LEN; i++)
    {
        if ( root->child[i] != NULL )
        {
            release( root->child[i] );
        }
    }
    
    free( root );
    root = NULL;
}

int main()
{
    char tmp[11];
    int i;
    
    root = (Node)calloc(1, sizeof(node));
    if (NULL == root)
    {
        printf("空间分配失败!\n");
        exit(-1);
    }

    while (gets(tmp), strcmp(tmp, "") != ZERO)
    {
        insert( tmp );
    }
    
    while (scanf("%s", tmp) != EOF)
    {
        i = find_word( tmp );
        printf("%d\n", i);
    }
    
    release( root );

    return 0;
}