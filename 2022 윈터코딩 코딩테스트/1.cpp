#include <string>
#include <vector>
using namespace std;

string solution(string line) {
    string answer = "";
    
    answer.push_back(line[0]);
    
    for(int i = 1; i < line.size(); i++)
    {
    	char before = line[i - 1];
    	char now = line[i];
    	
    	if(now == before)
    	{
    		if(answer.back() == '*')
    			continue;
    		else
    			answer.push_back('*');
    	}
    	
    	else
    		answer.push_back(now);
    }
    
    return answer;
}
