#include <vector>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    int dp[201] = { 0, }; // 0 index is actually indicate -100 index
    
    for(vector<int> line : lines)
    {
    	int a = line[0];
    	int b = line[1];
    	
    	for(int i = a; i < b; i++)
    		dp[i+100]++;
    }
    
    
    for(int i = 0; i <= 200; i++)
    	if(dp[i] > 1)
    		answer++;
    
    return answer;
}
