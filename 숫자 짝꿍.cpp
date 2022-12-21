#include <algorithm>
#include <string>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    int numX[10] = { 0, };
    int numY[10] = { 0, };
    
    for(char ch : X)
    	numX[ch - '0']++;
    
    for(char ch : Y)
    	numY[ch - '0']++;
    
    for(int i = 0; i < 10; i++)
    {
    	if(numX[i] && numY[i])
    	{
    		for(int j = 0; j < min(numX[i], numY[i]); j++)
    			answer.push_back(i + '0');
    	}
    }
    
    sort(answer.begin(), answer.end(), greater<char>());
    
    if(answer.length() == 0)
		answer = "-1";
	
	if(answer[0] == '0')
		answer = "0";
    
    return answer;
}
