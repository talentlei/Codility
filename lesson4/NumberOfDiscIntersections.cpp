#include <algorithm>
int solution(vector<int> &A) {
    // write your code in C++11
    int size = A.size();
    if (size <2)
        return 0;
    vector<long> begin;
    vector<long> end;
    for(int i=0; i<size; i++){
        begin.push_back(i-static_cast<long>(A[i]));
        end.push_back(i+static_cast<long>(A[i]));
    }
    sort(begin.begin(),begin.end());
    sort(end.begin(),end.end());
    int res = 0;
    int upper_index =0, lower_index=0;
    for(upper_index =0; upper_index<size; upper_index++){
        while(lower_index<size && begin[lower_index]<= end[upper_index])
            lower_index++;
        res += lower_index-upper_index-1;
        if (res >10000000)
            return -1;
    }
    return res;
}
