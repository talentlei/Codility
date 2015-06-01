// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11
    double min,ave2,ave3;
    int pos = 0;
    min = (A[0]+A[1])/static_cast<double>(2);
    for(int i=0; i<A.size()-1; i++){
        ave2 = (A[i]+A[i+1])/static_cast<double>(2);
        if(ave2<min){
            min = ave2;
            pos = i;
        }
    }
    for(int i=0; i<A.size()-2; i++){
        ave3 = (A[i]+A[i+1]+A[i+2])/static_cast<double>(3);
        if(ave3<min){
            min = ave3;
            pos = i;
        }
    }
    return pos;
}
