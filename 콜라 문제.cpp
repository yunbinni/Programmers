using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a)
    {
    	int remain = n%a;
    	answer += n = (n/a)*b;
    	n += remain;
    }
    
    return answer;
}
