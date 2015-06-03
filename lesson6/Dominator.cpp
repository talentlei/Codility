#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    int num=0,cnt=0,pos=-1;
    for(int i=0; i< A.size(); i++){
           if(cnt==0){
            num=A[i];
            cnt++;
            pos=i;
           }
           else{
            if(A[i]==num)
                cnt++;
            else
                cnt--;
           }
    }
    //valid
    cnt = count(A.begin(),A.end(),num);
    if(cnt*2>A.size())
        return pos;
    return -1;
}
