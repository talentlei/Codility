// 3-1. PassingCars
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11
    vector<int> num(A.size());
    int count=0;
    int res = 0;
    for(int i=A.size()-1; i>=0; i--){
           if(A[i]==1)
                count++;
            else
                res+=count;
            if(res >1000000000)
                return -1;
            num[i]=count;
    }
    return res;
}
