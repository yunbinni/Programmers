#include <vector>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> divisor(number + 1, 0);
    
    for(int i = 1; i <= number; i++)
    {
    	int count = 0;
    	
    	for(int j = 1; j*j <= i; ++j)
    	{
    		if(i%j == 0)
    			count += 2;
    		
    		if(j*j == i) count--;
    	}
		
		divisor[i] = count;
		
		if(divisor[i] <= limit)
			answer += divisor[i];
		
		else
			answer += power;
	}
	
    return answer;
}
