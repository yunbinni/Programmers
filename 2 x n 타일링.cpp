#include <memory.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    
    int DP[60001];
    memset(DP, 0, sizeof DP);
    
    DP[1] = 1;
    DP[2] = 2;
    
    for(int i = 3; i <= n; ++i)
    	DP[i] = (DP[i - 2] + DP[i - 1])%1000000007;
    
    answer = DP[n];
    
    return answer;
}
