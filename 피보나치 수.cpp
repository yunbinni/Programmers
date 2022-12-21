#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> Fibonacci;
    Fibonacci.push_back(0);
    Fibonacci.push_back(1);
    
    for(int i = 2; i <= n; i++)
    {
    	Fibonacci.push_back(
			(Fibonacci[i - 1] + Fibonacci[i - 2]) % 1234567
		);
    }
    
    answer = Fibonacci[n];
    
    return answer;
}
