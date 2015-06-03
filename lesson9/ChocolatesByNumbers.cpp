#include <vector>
int gcd(int N,int M){
    if(N%M==0)
        return M;
    return gcd(M,N%M);
}
int solution(int N, int M) {
    // write your code in C++11
    int min = gcd(N,M);
    return N/min;
}
