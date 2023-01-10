#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool solution(string s)
{
    stack<char> Stack;
    
    for(char ch : s)
    {
    	if(ch == '(')
    		Stack.push(ch);
    	
    	if(ch == ')')
    	{
    		if(Stack.empty())
    			return false;
    		else
    			Stack.pop();
    	}
    }
    
    if(Stack.empty()) return true;
    else return false;
}
