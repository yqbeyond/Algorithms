/*************************************************************************
	> File Name: segment_tree.cpp
	> Author: YQ_beyond
	> Mail: 584350987@qq.com 
	> Created Time: 2016年02月28日 星期日 19时22分30秒
 ************************************************************************/

#include<iostream>
using namespace std;

// Tree Node
struct  Node
{
	int left, right; // 区间范围
	Node *lchild;
	Node *rchild;
	int cover;
};

// build a segment tree
Node* build(int l, int r)
{
	Node *root = new Node;
	root->left = l;
	root->right = r;
	root->lchild = NULL;
	root->rchild = NULL;
	root->cover = 0;

	if (l + 1 < r)
	{
		int mid = (r+1) >> 1;
		root->lchild = build(l, mid);
		root->rchild = build(mid, r);
	}
}

// insert
void Insert(int l, int r, Node* root)
{
	int m;
	if (0 == root->cover)
	{
		m = (root->left + root->right) / 2;
		if (l == root->left && r == root->right)
		{
			root->cover = 1;
		}
		else if(r <= m)
		{
			Insert(l, r, root->lchild);
		}
		else if(l >= m)
		{
			Insert(l, r, root->rchild);
		}
		else
		{
			Insert(l, m, root->rchild);
			Insert(m, r, root->rchild);
		}
	}
}

void Delete(int l, int r, Node* root)
{
	if (l <= root->left && r >= root->right)
	{
		root->cover = root->cover - 1;
	}
	else
	{
		if (l < (root->left + root->right) / 2)
		{
			Delete(l, r, root->lchild)
		}
		if (r > (root->left + root->right) / 2)
		{
			Delete(l, r, root->rchild)
		}
	}
}

int count(Node *root)
{
	if(1 == root->cover)
	{
		return (root->right - root->left);
	}
	else if(root->right - root->left == 1)
	{
		return 0;
	}

	return count(root->lchild) + count(root->rchild)
}

int main()
{
	return 0;
}
