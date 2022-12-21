#include <string>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(char ch : s)
    {
    	char val;
    	
    	if(ch == ' ') val = ' ';
    	
    	if('A' <= ch && ch <= 'Z')
    	{
    		if(ch + n > 'Z')
    			val = ch + n - 'Z' + 'A' - 1;
    		else
    			val = ch + n;
    	}
    	
    	if('a' <= ch && ch <= 'z')
    	{
    		if(ch + n > 'z')
    			val = ch + n - 'z' + 'a' - 1;
    		else
    			val = ch + n;
    	}
    	
    	answer.push_back(val);
    }
    
    return answer;
}
