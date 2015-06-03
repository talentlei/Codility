#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    int num=0,cnt=0;
    for(int i=0; i< A.size(); i++){
           if(cnt==0){
            num=A[i];
            cnt++;
           }
           else{
            if(A[i]==num)
                cnt++;
            else
                cnt--;
           }
    }
    int fre = count(A.begin(),A.end(),num);
    int cur = 0,res=0;
    for(int i=0; i<A.size(); i++){
           if(A[i]==num)
            cur++;
            if(2*cur>i+1 && (fre-cur)*2>A.size()-i-1)
                res++;
    }
    return res;
}
