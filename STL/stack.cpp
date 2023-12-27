#include <bits/stdc++.h>
#include "Vector.h" 
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

template<typename T>
class Stack{
    Vector<T> arr;
    public :

    // push function
    void push(int n){
        arr.push_back(n);
    }

    // pop funtion
    void pop(){
        arr.pop_back();
    }

    // top function
    T top(){
        return arr.back();
    }

    // empty function 
    bool isEmpty(){
        return arr.empty();
    }

    // size function
    int size(){
        return arr.size();
    }
};

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    Stack<int> s;
    s.push(4);
    s.push(8);
    cout << "Size of stack is : " << s.size() <<endl;
    s.pop();
    int m = s.top();
    cout << m << endl;

}