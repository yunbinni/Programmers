#include <string>
using namespace std;

bool solution(string s) {
	
	bool answer = true;
        
	for(char ch : s)
	{
		if(ch < '0' || ch > '9')
			answer = false;
	}
	
	if(s.length() != 4 && s.length() != 6)
		answer = false;
    
    return answer;
}
