#include <stack>
int solution(vector<int> &H) {
    // write your code in C++11
    stack<int> myStack;
    int cnt =0;
    H.push_back(0);
    for(size_t i=0; i<H.size(); i++){
        if(myStack.empty() || myStack.top()<=H[i])
            myStack.push(H[i]);
        else{
            while(!myStack.empty() && myStack.top()>H[i]){
                int cur = myStack.top();
                myStack.pop();
                if(myStack.empty() || myStack.top()<=H[i] || myStack.top()!=cur)
                    cnt++;
            }
            myStack.push(H[i]);
        }
    }
    return cnt;
}
