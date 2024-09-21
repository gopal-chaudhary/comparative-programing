#include<iostream> 
#include<stack>
#include<limits>
#include<math.h>
class MinStack {
    stack<int> halperSt;
    stack<int> st;

public:
    MinStack() {}

    void push(int val) {
        if (halperSt.empty() || val <= halperSt.top()) {
            halperSt.push(val);
        }
        st.push(val);
    }

    void pop() {
        if (st.top() == halperSt.top()) {
            halperSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return halperSt.top();
    }
};

int main(){
	MinStack mins;
	string s;
	int n = 0;
	while(cin>>s){
		n = math.rand()*1000+1;
		switch(s){
		case "push":
			mins.push(n);
		break;
		case "top":
			cout<<min.top()<<" ";
		break;
		case "pop":
			min.pop();
		break;
		case "getMin":
			cout<<min.getMin()<<" ";


		break;
		}
	}
}