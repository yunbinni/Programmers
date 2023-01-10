#include <vector>
#include <iostream>
using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    
    for(long long number : numbers)
    {
    	if(number%2 == 0)
    		answer.push_back(number + 1);
    	
    	else
    	{
    		long long bit = 1;
    		
    		while(number & bit)
    		{
    			bit <<= 1;
    		}
    		
    		bit >>= 1;
    		
    		answer.push_back(number + bit);
    	}
    }
    
    return answer;
}

int main() {
	return 0;
}
