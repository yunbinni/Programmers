#include <memory.h>
#include <vector>
using namespace std;

const int maxN=10001;

bool prime[maxN];

void checkPrime() {
	memset(prime, true, sizeof prime);
	
	prime[1]=false;
	
	for(int i=2; i<maxN; i++)
		for(int j=2; i*j<maxN; j++)
			prime[i*j]=false;
	
}

vector<int> solution(int n) {
    vector<int> answer;
    
    checkPrime();
    
    for(int i=2; i<=n; i++)
    	if(prime[i] && n%i==0)
    		answer.push_back(i);
    
    return answer;
}
