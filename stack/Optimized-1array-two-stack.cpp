#include<bits/stdc++.h>

using namespace std;
typedef T;
class Stack<T>{
    vector<T> arr;
    int top1 ;
    int top2 ;
    int n;
    public:
    Stack(int n){
        arr = vector<T>(n,0);
        top1 =0;
        this->n = n;
        top2 = n-1;
    }
    int push1(T val){
        if(top1 < top1) {
            cout<<" overflow int stack1"<<endl;
            return -1;
        }
        arr[top1++] = val;
        return val;
    }
    int push2(T val){
        if(top1 < top1) {
            cout<<" overflow int stack2"<<endl;
            return -1;
        }
        arr[top2--] = val;
        return val;

    }
    int pop1(){
        if(top1 ==0) {
            cout<<"underdlow in stack1"<<endl;
            return -1;
        }
        return arr[top1--];
    }
    int pop2(){
        if(top2 ==n-1) {
            cout<<"underdlow in stack2"<<endl;
            return -1;
        }
        return arr[top2++];
    }
};

int main(){
    Stack<int> st(10);
    cout<<st.push1(1)<<endl;
    cout<<st.push2(2)<<endl;
    cout<<st.push1(3)<<endl;
    cout<<st.push2(4)<<endl;
    cout<<st.push1(5)<<endl;
    cout<<st.push2(6)<<endl;
    cout<<st.push1(7)<<endl;
    cout<<st.push2(8)<<endl;
    cout<<st.push1(9)<<endl;
    cout<<st.push2(10)<<endl;

    
    return 0;
}