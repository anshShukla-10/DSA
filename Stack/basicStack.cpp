#include <iostream>
using namespace std;

class Stack{
  int top;
  int arr[5];
  
  public:
    Stack(){
        top = -1;
    }
    
    void push(int val){
        if(top == 4){
            cout << "Stack Overflow";
            return;
        }
        
        arr[++top] = val;
    }
    
    void pop(){
        if(top == -1){
            cout << "Stack Underflow";
            return;
        }
        
        top--;
    }
    
    int peek(){
        if(top == -1){
            cout << "Stack Underflow";
            return;
        }
        
        return arr[top  ];
    }
    
    void display(){
        for(int i = 0; i < 5; i++){
            cout << arr[i] << endl;
        }
    }
};

int main(){
    
}