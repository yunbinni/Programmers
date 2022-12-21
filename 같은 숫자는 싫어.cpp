#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int lastNumber;
    
    for(int number : arr)
    {
    	if(number == lastNumber)
    		continue;
    	
    	else
    	{
    		lastNumber = number;
    		answer.push_back(number);
    	}
	}
	
    return answer;
}
