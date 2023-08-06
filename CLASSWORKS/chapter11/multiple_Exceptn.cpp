#include<iostream>
#define MAX 2
using namespace std;

class Stack {
    private:
        int s[MAX];
        int top;
    public:
        class FULL{}; //exception class for full stack with empty class body
        class EMPTY{};

        Stack() {
            top = -1;
        }

        void push(int x) {
            if(top==MAX-1){
                
               throw FULL();// nameless object of type class FULL{}
            } else {
                s[++top] = x;//prefix bcz initially top is -1 and we increment
                            //it to 0 and keep the value here
            }
        } 

        int pop() {
            if(top == -1) {
                
               throw EMPTY();// nameless object of type class EMPTY{}
            } else {
                return s[top--];//postfix bcz top is at max i.e 1 as arrays start from 0
            }                   //so we throw the value 1st and decrement later 
        }
};

int main() {
    Stack s;
    try {
        s.push(11);
        cout<<"\n1st number pushed";
        
        s.push(12);
        cout<<"\n2nd number pushed";
        
        // s.push(13);
        // cout<<"\n3rd number pushed";

        cout<<"\nNumber Popped: "<<s.pop()<<endl;
        cout<<"Number Popped: "<<s.pop()<<endl;
        cout<<"Number Popped:"<<s.pop()<<endl;
    }
    catch(Stack::FULL) {
        cout<<"\nStack size exceeded"<<endl;
    } 
    catch(Stack::EMPTY) {
        cout<<"The number couldn't be popped stack is empty"<<endl;
    }
    return 0;
}