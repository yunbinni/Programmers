#include <string>
#include <vector>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    polynomial.push_back(' ');
    
    vector<string> terms = getTerms(polynomial);
	
	int x = 0, number = 0;
	
	for(string term : terms)
	{
		if(term == "+") continue;
		
		if(term[term.size() - 1] == 'x')
		{
			if(term.size() == 1)
				x++;
			else
			{
				string number_store;
				number_store.assign(term.begin(), term.end() - 1);
				
				x += stoi(number_store);
			}
		}
		
		else number += stoi(term);
	}
	
	string first, second;
	
	if(x == 1) first = "x";
	if(x > 1) first = to_string(x) + "x";
	
	if(x == 0)
	{
		if(number == 0)
			answer = "0";
		if(number > 0)
			answer = to_string(number);
	}
	
	if(x == 1)
	{
		if(number == 0)
			answer = "x";
		if(number > 0)
			answer = "x + " + to_string(number);
	}
	
	if(x > 1)
	{
		if(number == 0)
			answer = to_string(x) + "x";
		if(number > 0)
			answer = to_string(x) + "x + " + to_string(number);
	}
    
    return answer;
}
