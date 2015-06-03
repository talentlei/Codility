int solution(vector<int> &A) {
    // write your code in C++11
    vector<int> PosP(A.size()-1);
    vector<int> NegP(A.size()-1);
    int tmp=0;
    PosP[0]=0;
    for(int i=1; i<A.size()-1; i++){
        tmp+= A[i];
        if(tmp<0)
            tmp=0;
        PosP[i]=tmp;
    }
    
    tmp =0;
    NegP[A.size()-2]=0;
    for(int i=A.size()-2; i>0; i--){
        tmp+= A[i];
        if(tmp<0)
            tmp=0;
        NegP[i-1]=tmp;
    }
    int sum=0;
    for(int i =1; i< A.size()-1; i++){
        if(PosP[i-1]+NegP[i]>sum)
            sum= PosP[i-1]+NegP[i];
    }
    return sum;
}
