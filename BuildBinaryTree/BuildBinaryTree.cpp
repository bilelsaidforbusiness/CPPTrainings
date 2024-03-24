#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void createTree(TreeNode *node, int i, vector<string> &arr)
{
	if (node != nullptr)
	{
		if (2 * i + 1 < arr.size())
		{
			if (arr[2 * i + 1] == "null")
				node->left = nullptr;
			else
				node->left = new TreeNode(stoi(arr[2 * i + 1]));
			createTree(node->left, 2 * i + 1, arr);
		}

		if (2 * i + 2 < arr.size())
		{
			if (arr[2 * i + 2] == "null")
				node->right = nullptr;
			else
				node->right = new TreeNode(stoi(arr[2 * i + 2]));
			createTree(node->right, 2 * i + 2, arr);
		}
	}
}

TreeNode *levelOrderCreateTree(vector<string> &arr)
{
	if (arr.size() == 0)
		return nullptr;
	TreeNode *head = new TreeNode(stoi(arr[0]));
	createTree(head, 0, arr);
	return head;
}

int main()
{

	vector<string> arr = {"2", "1", "3", "null", "4", "null", "7"};
	TreeNode *node = levelOrderCreateTree(arr);
	return 0;
}