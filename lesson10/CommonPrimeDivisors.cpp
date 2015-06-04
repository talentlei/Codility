int gcd(int N,int M){
    if(N%M==0)
        return M;
    if (M%N==0)
        return N;
    if(N>M)
        return gcd(M,N%M);
    return gcd(N,M%N);
}
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    int cnt = 0 ;
    for(int i=0; i<A.size(); i++){
        int cd = gcd(A[i],B[i]);
        int m = A[i], n = B[i],t;
        while(m!=1 && (t=gcd(m,cd))!=1)
            m/=t;
        if(m!=1) continue;
        while(n!=1 && (t=gcd(n,cd))!=1)
            n/=t;
        if(n!=1) continue;
        cnt++;
    }
    return cnt;
}
