using namespace std;

int solution(int n) {
    
    const int maxN = 1000;
    
    for(int i = 1; i <= maxN; i++)
    	if(i*i == n)
    		return 1;
    
    return 2;
}
