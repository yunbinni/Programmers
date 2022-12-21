#include <string>
#include <vector>
using namespace std;

long long solution(int a, int b) {
	
    if(a == b) return a;
	if(a > b) swap(a, b);
    
	long long A = (long long)a;
	long long B = (long long)b;
    
    long long answer = (A + B)*(B - A + 1)/2;
    return answer;
}
