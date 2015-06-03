#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++11
    int cnt=0;
    for(int i=1; i<sqrt(N);i++)
        if(N%i==0)
            cnt++;
    int t = sqrt(N);
    if(t*t==N)
        return 2*cnt+1;
    return 2*cnt;
}
