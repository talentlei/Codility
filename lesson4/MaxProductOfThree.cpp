// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int getProduct(vector<int> &A,int i,int j, int k){
    return A[i]*A[j]*A[k];   
}
int solution(vector<int> &A) {
    // write your code in C++11
    sort(A.begin(),A.end());
    int size = A.size();
    int tr1 = getProduct(A,size-1,size-2,size-3);
    int tr2 = getProduct(A,0,1,size-1);
    return tr1>tr2?tr1:tr2;
    
}
