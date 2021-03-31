#include <iostream>
#include "TreeNode.h"
#ifndef BINARYSEARCHTREE
#define BINARYSEARCHTREE


using namespace std;

class BinarySearchTree
{
public:
	BinarySearchTree();
	void print() const;
	void insert(string data);
	void erase(string data);
	int count(string data) const;

	void kill_tree(TreeNode* n);
	~BinarySearchTree();
	BinarySearchTree(const BinarySearchTree&);

private:
	TreeNode* root;
};

#endif // !BINARYSEARCHTREE