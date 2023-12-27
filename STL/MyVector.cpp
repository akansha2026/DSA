#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

template <typename T>
class Vector{
    int n;
    int cap;
    T* arr;
    public:
    // Default Constructor
    Vector(){
        n = 0;
        cap = 0;
        arr = NULL;
    }

    // Parameterized Constructor
    Vector(int n){
        this->n = n;
        this->cap = n;
        this->arr = new T[n];
        for(int i=0; i<n; i++) this->arr[i] = 0;
    }

    Vector(int n, T val){
        this->n = n;
        this->cap = n;
        this->arr = new T[n];
        for(int i=0; i<n; i++) this->arr[i] = val;
    }

    // Getters and setters
    T get(int idx){
        return this->arr[idx];
    }

    void set(int idx, T val){
        this->arr[idx] = val;
    }

    void input(){
        for(int i=0; i<this->n; i++){
            cin >> this->arr[i];
        }
    }
    // Methods
    int size(){
        return n;
    }

    int capacity(){
        return cap;
    }

    bool empty(){
        return n == 0;
    }

    void push_back(T val){
        if(n == cap){
            // TODO: we have to double the capacity
            this->cap = 2*this->cap;
            T* temp = new T[cap];

            // copying the values
            for(int i=0; i<n; i++) temp[i] = this->arr[i];

            // free the previous array
            delete[] this->arr;

            // Get the main array
            this->arr = temp;

        }

        // push back
        this->arr[n] = val;
        n++;
    }

    void pop_back(){
        if(n == 0) return;

        // put some garbage value here
        this->arr[n] = 0;
        n--;
    }

    T front(){
        if(n == 0) return NULL;
        return this->arr[0];
    }

    T back(){
        if(n==0) return NULL;
        return this->arr[n-1];
    }

    T* begin(){
        return this->arr;
    }

    T* end(){
        return (this->arr + n);
    }

    void reverse(){
        reverse(begin(), end());
    }

    void sort(bool flag = false){
        sort(begin(), end());

        if(flag == true) reverse(begin(), end());
    }
};

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif
    int n;
    cin >> n;

    Vector<int> arr(n);
    arr.input();

}