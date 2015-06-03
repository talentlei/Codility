// #include <algorithm>


int solution(vector<int> &A) {
    // write your code in C++11
    if(A.size()<2)
        return 0;
    vector<int> dif(A.size()-1);
    for(int i =0; i<A.size()-1; i++)
        dif[i] = A[i+1]-A[i];
    int sum=0,tmp=0;
    for(int i=0; i<dif.size(); i++){
        tmp+= dif[i];
        if(tmp<0)
            tmp=0;
        if(tmp>sum)
            sum=tmp;
    }
    return sum;
}
