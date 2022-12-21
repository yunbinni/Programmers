#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime(1000001, true);

int solution(int n) {
    int answer = 0;
    
    prime[1] = false;
    for(int i = 2; i <= n; i++)
    	for(int j = 2; i*j <= n; j++)
    		prime[i*j] = false;
    
    for(int i = 1; i <= n; i++)
    	if(prime[i])
    		answer++;
    
    return answer;
}

int main()
{
	cout << solution(5);
	return 0;
}
