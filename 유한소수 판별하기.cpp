#include <vector>
using namespace std;

int GCD(int a, int b) {
	if(a%b == 0) return b;
	return GCD(b, a%b);
}

int solution(int a, int b) {
    int answer = 0;
    
    int gcd = GCD(a, b);
    
    a /= gcd;
    b /= gcd;
    
    while(b%2 == 0) b /= 2;
    while(b%5 == 0) b /= 5;
    
    if(b == 1) return 1;
    
    return 2;
}
