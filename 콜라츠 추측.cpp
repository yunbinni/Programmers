using namespace std;

int solution(int num) {
    
	int answer = 0;
    long long n = num;
    
    while(true)
    {
    	if(n == 1) break;
    	
    	if(n & 1) n = 3*n + 1;
    	else n /= 2;
    	
    	answer++;
    	
    	if(answer == 500) return -1;
    }
    
    return answer;
}
