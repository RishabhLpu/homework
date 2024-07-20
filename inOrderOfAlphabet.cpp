#include <iostream>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node* left;
    Node* right;
    Node(T value){
        data=value;
        right=NULL;
        left=NULL;
}};

template <typename T>
void inOrder(Node<T> *root)
{if(root==NULL)
return ;
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
    }int main() {
         Node<char> *root = new Node<char>('A');
    root->left = new Node<char>('B');
    root->right = new Node<char>('C');
    root->left->left = new Node<char>('D');
    root->left->right = new Node<char>('E');
    root->right->left = new Node<char>('F');
    root->right->right = new Node<char>('G');
    inOrder(root);
    cout<<endl;
inOrder(root);
    return 0;
}
