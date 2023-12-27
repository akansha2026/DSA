#include <bits/stdc++.h>
using namespace std;

// Supported T = Numerical data types
template <typename T>
class PriorityQueue{
    vector<T> tree;
        // heapifyUp
    void heapifyUp(int idx){
        // base case
        if(idx == 0) return;

        int parentIdx = (idx-1)/2;

        if(tree[idx] > tree[parentIdx]){
            // swap the values
            swap(tree[idx], tree[parentIdx]);
            heapifyUp(parentIdx);
        }
    }

    // heapifyDown
    void heapifyDown(int idx){
        // If no child then stop
        int n = tree.size();
        int leftChild = 2*idx + 1;
        int rightChild = 2*idx + 2;
        if(leftChild >= n) return;

        if(rightChild >= n){
            // only left child
            if(tree[leftChild] > tree[idx]){
                swap(tree[leftChild], tree[idx]);
                heapifyDown(leftChild);
            }
        }else{
            // both child
            if(tree[leftChild] > tree[rightChild] && tree[leftChild] > tree[idx]){
                swap(tree[leftChild], tree[idx]);
                heapifyDown(leftChild);
            }else if(tree[leftChild] <= tree[rightChild] && tree[rightChild] > tree[idx]){
                swap(tree[rightChild], tree[idx]);
                heapifyDown(rightChild);
            }
        }
    }

    void printFromTop(int idx){
        int n = tree.size();
        int leftChild = 2*idx + 1;
        int rightChild = 2*idx + 2;

        // print label
        cout << idx << "[label = \"" << tree[idx] << "\"]" << endl;

        if(leftChild < n){
            cout << idx << "->" << leftChild << endl;
            printFromTop(leftChild);
        }
        if(rightChild < n){
            cout << idx << "->" << rightChild << endl;
            printFromTop(rightChild);
        }
    }

    public:
    // push
    void push(T val){
        tree.push_back(val);
        int n = tree.size();
        heapifyUp(n-1);
    }

    // pop
    void pop(){
        int n = tree.size();
        if(n == 0) return;

        tree[0] = tree[n-1];
        tree.pop_back();

        heapifyDown(0);
    }

    T top(){
        int n = tree.size();
        if(n == 0) return 0;

        return tree[0];
    }

    bool empty(){
        return tree.empty();
    }

    int size(){
        return tree.size();
    }

    void print(){
        printFromTop(0);
    }
};

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    PriorityQueue<int> pq;
    pq.push(3);
    // cout << pq.top() << endl;
    pq.push(2);
    // cout << pq.top() << endl;
    pq.push(10);
    pq.print();
    // cout << pq.top() << endl;
    pq.pop();
    // cout << pq.top() << endl;
    // pq.print();
    priority_queue<int> pq_inbuilt;
}