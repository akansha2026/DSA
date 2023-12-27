#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(){
        left = NULL;
        right = NULL;
    }
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    Node *root = NULL;
    int rootData;
    cin >> rootData;
    if(rootData == -1) return root;
    root = new Node(rootData);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        int leftChild;
        cin >> leftChild;
        if(leftChild != -1){
            front->left = new Node(leftChild);
            q.push(front->left);
        }
        int rightChild;
        cin >> rightChild;
        if(rightChild != -1){
            front->right = new Node(rightChild);
            q.push(front->right);
        }
    }
    return root;
}

int numberOfNode(Node* root){
    // Base case
    if(root==NULL) return 0;

    // Induction case
    int leftNodes = numberOfNode(root->left);
    int rightNodes = numberOfNode(root->right);

    // Hypothesis step
    return leftNodes + rightNodes + 1;

}

int height(Node* root){
    // base case
    if(root == NULL) return 0;

    // Induction step
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // Hypothesis step
    return max(leftHeight, rightHeight) + 1;
}

int main(){
    Node* root = buildTree();
    cout << height(root)<<endl;

    cout<<numberOfNode(root);
    
}