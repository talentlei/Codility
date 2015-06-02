int solution(vector<int> &A) {
    // write your code in C++11
    long sum,big;
    sort(A.begin(),A.end());
    for(int i=0; i< A.size()-2&& i<A.size(); i++){
        sum = A[i]+A[i+1];
        big = A[i+2];
        if(sum > big)
            return 1;
    }
    return 0;
}
