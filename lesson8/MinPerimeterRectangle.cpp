#include <cmath>

int solution(int N) {
    // write your code in C++11
    int end = sqrt(N);
    while(N%end!=0) end--;
    return 2*(end+N/end);
}
