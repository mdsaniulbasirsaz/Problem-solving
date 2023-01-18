#include <iostream>
using namespace std;
struct node {
 int data;
 node *left_child;
 node *right_child;
};
node *root = nullptr;
node *newnode(int val) {
 node *temp = (node *) malloc(sizeof(node));
 temp->data = val;
 temp->left_child = nullptr;
 temp->right_child = nullptr;
 return temp;
}
int main() {
 int vertex, left, right;
 cin >> vertex >> left >> right;

 root = newnode(vertex);
 root->left_child = newnode(left);
 root->right_child = newnode(right);

 if (root->data == (root->left_child->data + root->right_child->data)) {
 cout << "true" << '\n';
 }
 else {
 cout << "false" << '\n';
 }
 return 0;
}
