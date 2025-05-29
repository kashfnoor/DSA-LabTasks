#include <iostream>
using namespace std;

class BinaryTree {
public:
	struct TreeNode {
		int data;
		TreeNode* left;
		TreeNode* right;
		TreeNode* parent;
	};
	typedef TreeNode* NodePtr;

private:
	NodePtr root;

public:
	BinaryTree() : root(nullptr) {}

	NodePtr getRoot() {
		return root;
	}

	bool isEmpty() const {
		return root == nullptr;
	}

	NodePtr createNode(int value) {
		NodePtr newNode = new TreeNode;
		newNode->data = value;
		newNode->left = nullptr;
		newNode->right = nullptr;
		newNode->parent = nullptr;
		return newNode;
	}

	bool isLeftChild(NodePtr node) {
		if (isEmpty() || node == nullptr) return false;
		return (node->parent->left == node);
	}

	bool isRightChild(NodePtr node) {
		if (isEmpty() || node == nullptr) return false;
		return (node->parent->right == node);
	}

	void setRoot(int value) {
		if (!isEmpty()) {
			cout << "Root already exists.\n";
			return;
		}
		root = createNode(value);
	}

	void setLeft(NodePtr parent, int value) {
		if (parent == nullptr) {
			cout << "Cannot insert left child. Parent does not exist.\n";
			return;
		}
		if (parent->left != nullptr) {
			cout << "Left child already exists.\n";
			return;
		}
		NodePtr child = createNode(value);
		child->parent = parent;
		parent->left = child;
	}

	void setRight(NodePtr parent, int value) {
		if (parent == nullptr) {
			cout << "Cannot insert right child. Parent does not exist.\n";
			return;
		}
		if (parent->right != nullptr) {
			cout << "Right child already exists.\n";
			return;
		}
		NodePtr child = createNode(value);
		child->parent = parent;
		parent->right = child;
	}

	void preorderTraversal(NodePtr node) { // root, left, right
		if (node != nullptr) {
			cout << node->data << " ";
			preorderTraversal(node->left);
			preorderTraversal(node->right);
		}
	}

	void inorderTraversal(NodePtr node) { // left, root, right
		if (node != nullptr) {
			inorderTraversal(node->left);
			cout << node->data << " ";
			inorderTraversal(node->right);
		}
	}

	void postorderTraversal(NodePtr node) { // left, right, root
		if (node != nullptr) {
			postorderTraversal(node->left);
			postorderTraversal(node->right);
			cout << node->data << " ";
		}
	}
};

int main() {
	BinaryTree tree;
	tree.setRoot(10);

	BinaryTree::NodePtr root = tree.getRoot();
	tree.setLeft(root, 4);
	tree.setRight(root, 14);
	tree.setLeft(root->left, 3);
	tree.setRight(root->left, 6);

	cout << "Preorder: ";
	tree.preorderTraversal(root);

	cout << "\nInorder: ";
	tree.inorderTraversal(root);

	cout << "\nPostorder: ";
	tree.postorderTraversal(root);

	return 0;
}