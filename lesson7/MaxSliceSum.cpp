// #include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    int sum=A[0],tmp=0;
    for(int i=0; i<A.size(); i++){
        tmp+= A[i];
        if(tmp>sum)
            sum=tmp;
        if(tmp<0)
            tmp=0;
    }
    return sum;
}
