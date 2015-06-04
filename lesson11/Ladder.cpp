#include <algorithm>
//***************Attention*************
// this question still have some problem.
// one case doesn't pass, and one case get Run Time Error

void Fabonic(vector<int> & vec){
    vec[0] = 1;
    int size = vec.size();
    unsigned flag = 1;
    flag = flag<<30;
    if(size > 1) vec[1] =2;
    for(int i=2; i<size; i++){  
        vec[i] = vec[i-1]+ vec[i-2];
        if(vec[i]>=flag)
            vec[i]%=flag;
    }
}
vector<int> solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    int max = *max_element(A.begin(),A.end());
    unsigned flag = 1;
    vector<int > vec(max);
    vector<int > res(max);
    Fabonic(vec);
    for(int i=0; i<A.size(); i++){
        res[i] = vec[A[i]-1]%(flag<<B[i]);
    }
    return res;
}
