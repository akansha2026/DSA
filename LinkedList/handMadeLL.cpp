#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

template < typename T>
class Node{
    public :
    T data;
    Node* next; 
    Node* prev;
    Node(){
        data = 0;
        next = prev = NULL;
    }

    Node(T data){
        this->data = data;
        next = prev = NULL;
    }
};


template <typename T>
class List{
    Node<T>* head;
    Node<T>* tail;
    int n;

    public:
    List(){
        head = tail = NULL;
        n = 0;
    }

    // O(1)
    void push_back(T val){
        Node<T>* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;

            // update tail now
            tail = tail->next;
        }
        n++;
    }

    // O(1)
    void pop_back(){
        if(head == NULL) return;

        if(n == 1){
            delete tail;
            head = tail = NULL;
        }else{
            Node<T>* secondLast = tail->prev;
            tail->prev = NULL;
            secondLast->next = NULL;
            delete tail;
            tail = secondLast;
        }
        n--;
    }

    // O(1)
    void push_front(int val){
        Node<T>* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            head->prev = newNode;
            newNode->next = head;

            // update head now
            head = head->prev;
        }
        n++;
    }

    // O(1)
    void pop_front(){
        if(head == NULL) return;

        if(n == 1){
            delete head;
            head = tail = NULL;
        }else{
            Node<T>* secondFromBegining = head->next;
            secondFromBegining->prev = NULL;
            head->next = NULL;
            delete head;
            head = secondFromBegining;
        }
        n--;
    }

    int size(){
        return n;
    }

    bool empty(){
        if(n == 0) return true;
        return false;
    }

    Node<T>* begin(){
        return head;
    }

    Node<T>* end(){
        return tail;
    }

    Node<T>* middle(){
        Node<T>* slow = head;
        Node<T>* fast = head;
        while(fast != NULL || fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    
    
}