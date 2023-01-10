using namespace std;

int getBitCount(int n)
{
	int answer = 0;
	
	for(int i = 0; (1 << i) <= n; ++i)
    {
    	if( n & (1 << i) )
    		answer++;
    }
    
    return answer;
}

int solution(int n) {
    int answer = n + 1;
    int nBitCount = getBitCount(n);
    
    while(getBitCount(answer) != nBitCount)
    	answer++;
    
    return answer;
}
