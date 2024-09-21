
#include <iostream>
using namespace std;
int n = 4;
int arr[4] = {};
int st1 = 0;
int st2 = n/2;
void push1(int val){
    if(st1==n/2) {
        cout<<" overflow in satck 1 "<<endl;
        return ;
    }
    arr[st1] = val;
    st1++;
}
void push2(int val){
    if(st2==n) {
        cout<<" overflow in stack 2 "<<endl;
        return ;
    }
    arr[st2] = val;
    st2++;
}
void pop1(){
    if(st1==0) {
        cout<<" underflow in stack 1"<<endl;
    return ;
    }
    st1--;
}
void pop2(){
    if(st2==n/2) {
        cout<<" underflow in stack 2"<<endl;
    return ;
    }
    st2--;
}

int main()
{
    push1(10);
    pop1();
    push2(10);
    push1(10);
    push2(10);
    push2(10);
    push1(10);
    push1(10);
   push1(10);
   push1(10);
   push2(10);
   push2(10);
   push1(10);
   push2(10);
   pop1();pop1();pop1();pop1();pop1();pop1();pop1();

    return 0;
}