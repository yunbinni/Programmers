#include <memory.h>
#include <string>
#include <vector>
using namespace std;

const int maxN=101;

bool primeCheckedArray[maxN];

void checkPrime() {
	memset(primeCheckedArray, true, sizeof primeCheckedArray);
	
	primeCheckedArray[1]=false;
	
	for(int i=2; i<maxN; i++)
		for(int j=2; i*j<maxN; j++)
			primeCheckedArray[i*j]=false;
}

int solution(int n) {
    int answer = 0;
    
    checkPrime();
    
	for(int i=4; i<=n; i++)
    	if(!primeCheckedArray[i])
    		answer++;
    
    return answer;
}
