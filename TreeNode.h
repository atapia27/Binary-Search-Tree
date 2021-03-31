#include <iostream>
#ifndef TREENODE
#define TREENODE



using namespace std;

class TreeNode
{
public:
	TreeNode();
	void insert_node(TreeNode* new_node);
	void print_nodes() const;
	bool find(string value) const;
private:
	string data;
	TreeNode* left;
	TreeNode* right;
	friend class BinarySearchTree;
};

#endif // !TREENODE