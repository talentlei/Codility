#include <algorithm>
#include <vector>
#include <map>
int solution(vector<int> &A) {
    // write your code in C++11
    if (A.size()<3)
        return 0;
    sort(A.begin(),A.end());
    for(int i=0; i< A.size()-2&& i<A.size(); i++){
        if(A[i]>0 && A[i]>A[i+2]-A[i+1])
            return 1;
    }
    return 0;
}
