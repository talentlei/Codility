#include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
    // write your code in C++11
    vector<int> prime;
    vector<int> semiprime;
    set<int> mySet;
    mySet.insert(2);
    prime.push_back(2);
    for(int i=3; i<= N; i++){
        int j;
        for(j=0; j<prime.size();j++){
            if(i%prime[j]==0){
                if(mySet.count(i/prime[j])!=0)
                    semiprime.push_back(i);
                break;
            }
        }
        if (j==prime.size()){
            prime.push_back(i);
            mySet.insert(i);
        }
    }
    vector<int> res;
    for(int i=0; i<P.size(); i++){
        int begin = P[i];
        int end = Q[i];
        vector<int>::iterator biter = lower_bound(semiprime.begin(),semiprime.end(),begin);
        vector<int>::iterator eiter = upper_bound(semiprime.begin(),semiprime.end(),end);
        res.push_back(eiter-biter);
    }
    return res;
}
