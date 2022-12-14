using namespace std;

const int maxN = 2000;

long long solution(int n) {
    long long answer = 0;
    
    long long DP[maxN + 1];
    
    DP[1] = 1;
    DP[2] = 2;
    
    for(int i = 3; i <= n; ++i)
    	DP[i] = (DP[i - 2] + DP[i - 1])%1234567;
    
    answer = DP[n];
    
    return answer;
}
