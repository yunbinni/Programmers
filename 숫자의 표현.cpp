using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = i; ((i + j)*(j - i + 1))/2 <= n; ++j)
    	{
    		if ( ((i + j)*(j - i + 1))/2 == n)
    			answer++;
    	}
    }
    
    return answer;
}
