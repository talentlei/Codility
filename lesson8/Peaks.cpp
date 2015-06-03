#include <algorithm>
//this code has one case get wrong answer
void getFactor(int N, vector<int>& vec){
    int s_N = sqrt(N);
    for(int i=1; i<s_N; i++){
           if(N%i==0){
                vec.push_back(i);
                vec.push_back(N/i);
           }
    }
    if (N%s_N==0)
        vec.push_back(s_N);
}
int solution(vector<int> &A) {
    // write your code in C++11
    int size = A.size();
    if(size<3)
        return 0;
    vector<int> factors;
    getFactor(size,factors);
    sort(factors.begin(),factors.end());
    int max = 0;
    for(int ind=factors.size()-1; ind >=0; ind-- ){
        int group = factors[ind];
        int eles = size/group;
        if(eles <2)
            continue;
        int isOK = 1;
        for(int i=0; i<group; i++){
            int peak = 0;
            for(int j=0; j<eles; j++){
                int pos = i*eles+j;
                if(pos==0 || pos==size-1)
                    continue;
                if(A[pos]>A[pos-1]&& A[pos]>A[pos+1]){
                    peak=1; break;   
                }
            }
            if(peak!=1){ isOK=0; break;}
        }
        if(isOK==1){
            max = group;
            break;
        }
    }
    return max;
}
