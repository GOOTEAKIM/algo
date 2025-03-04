#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Node
{
	char left = '.';
	char right = '.';

};

int n;

Node tree[26];

void preorder(char node) {

	if (node == '.') return;

	cout << node;
	preorder(tree[node - 'A'].left);
	preorder(tree[node - 'A'].right);

}

void inorder(char node) {
	if (node == '.') return;

	inorder(tree[node - 'A'].left);
	cout << node;
	inorder(tree[node - 'A'].right);
}

void postorder(char node) {

	if (node == '.') return;

	postorder(tree[node - 'A'].left);
	postorder(tree[node - 'A'].right);
	cout << node;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {

		char parent, left, right;

		cin >> parent >> left >> right;

		int idx = parent - 'A';
		
		tree[idx].left = left;
		tree[idx].right = right;

	}

	preorder('A'); cout << "\n";
	inorder('A'); cout << "\n";
	postorder('A'); cout << "\n";

	return 0;
}

