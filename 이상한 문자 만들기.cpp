#include <string>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
    	char now = s.at(i);
    	
    	if(now == ' ')
    		idx = 0;
    	
    	else
		{
    		if(idx & 1)
    			s[i] = tolower(s[i]);
    		else
    			s[i] = toupper(s[i]);
    	
    		idx++;
    	}
    }
    	
    return s;
}
