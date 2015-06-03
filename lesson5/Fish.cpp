#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    int cnt=0;
    stack<int> myStack;
    for(int i=0; i< A.size(); i++){
        if(B[i]==1)
            myStack.push(A[i]);
        else {
            while(!myStack.empty()){
                if(myStack.top()<A[i])
                    myStack.pop();
                else break;
            }
            if(myStack.empty())
                cnt++;  
        }
    }
    return cnt+myStack.size();
}
