#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int p = 0, y = 0;
    
    for(char ch : s)
    {
    	if(ch == 'p' || ch == 'P')
    		p++;
    	if(ch == 'y' || ch == 'Y')
    		y++;
    }
    
    if(p == y) answer = true;
    if(p != y) answer = false;

    return answer;
}
