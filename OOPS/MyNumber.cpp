#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MyNumber{
    T data;

    public:

    // Default constructor
    MyNumber(){
        data = 0;
    }

    // Parametrized constructor
    MyNumber(T data){
        this->data = data;
        cout << typeof(data) << endl;
    }

    // Methods
    T getData(){
        return data;
    }

    void setData(T newValue){
        data = newValue;
    }

    bool even(){
        if(data % 2 == 0) return true;
        return false;
    }

    bool odd(){
        if(data % 2 == 1) return true;
        return false;
    }

    MyNumber reverse(){
        int ans = 0;
        int temp = data;
        while(temp > 0){
            int digit = temp%10;
            ans = ans*10 + digit;
            temp /= 10;
        }
        MyNumber finalAns(ans);
        return finalAns;
    }

    bool equal(MyNumber num){
        if(data == num.data) return true;
        return false;
    }

    bool palindrome(){
        MyNumber rev = reverse();
        if(equal(rev)) return true;
        return false;
    }

    bool prime(){
        for(int i=2; i*i <= data; i++){
            if(data % i == 0) return false;
        }
        return true;
    }

    MyNumber pow(int n){
        // data^n
        int ans = 1;
        while(n--){
            ans = ans * data;
        }
        return MyNumber(ans);
    }

    void print(){
        cout << data << endl;
    }
};

// Standard Template Library

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    MyNumber<int> a;  
    cout << a.getData()  << endl;
    a.setData(12);
    cout << a.getData()  << endl;

    MyNumber<float> b(131);
    cout << b.getData()  << endl;

    if(a.even()) cout << "a is even!" << endl;
    if(a.odd()) cout << "a is odd!" << endl;

    MyNumber<float> rev = b.reverse();
    rev.print();

    if(a.prime()) cout << "a is prime!" << endl;

    if(a.palindrome()) cout << "a is palindrome!" << endl;

    MyNumber<int> cube = a.pow(3);
    cube.print();

    // MyNumber<type> num;

}