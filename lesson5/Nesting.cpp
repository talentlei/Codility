// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(string &S) {
    // write your code in C++11
    stack<char> myStack;
    for(int i=0; i<S.size(); i++){
        char ch = S[i];
        switch(ch){
         case '(': myStack.push(ch);break;
         case '[': myStack.push(ch);break;
         case '{': myStack.push(ch);break;
         case ')': 
            if(myStack.empty() || myStack.top()!='(')
                return 0;
            else myStack.pop();
            break;
        case ']': 
            if(myStack.empty() || myStack.top()!='[')
                return 0;
            else myStack.pop();
            break;
        case '}': 
            if(myStack.empty() || myStack.top()!='{')
                return 0;
            else myStack.pop();
            break;
        }
    }   
    return myStack.empty()?1:0;
}
