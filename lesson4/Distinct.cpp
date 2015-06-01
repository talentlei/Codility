#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11
    set<int> mySet;
    for(int i=0; i<A.size();i++){
        if(mySet.count(A[i])==0)
            mySet.insert(A[i]);
    }
    return mySet.size();
}
