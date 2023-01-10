#include <memory.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    
    int DP[5001];
    memset(DP, 0, sizeof DP);
    
    DP[2] = 3;
    DP[4] = 11;
    
    for(int i = 6; i <= n; i += 2)
    	DP[i] = (DP[i - 2] + DP[i - 4])%1000000007;
    	
    answer = DP[n];
    
    return answer;
}
