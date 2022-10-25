using namespace std;

int factorialValue[12];

void writeFactorialValue() {
	int value=1;
	for(int i=1; i<=11; i++) {
		value*=i;
		factorialValue[i]=value;
	}
}

int solution(int n) {
	int answer = 1;
    
	writeFactorialValue();
	
	for(; factorialValue[answer]<=n; answer++)
	;
	
    return answer-1;
}
