#include <cmath>
using namespace std;

long long solution(long long n) {
	
    long long answer = 0;
    
    double x = sqrt(n);
    long long xll = (long long)x;
    
    if(x == xll) answer = (x + 1)*(x + 1);
    else answer = -1;
    
    return answer;
}
