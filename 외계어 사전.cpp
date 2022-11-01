#include <string>
#include <vector>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
	
	int found = 0;
    
    for(string word : dic)
    {
    	for(string character : spell)
    	{
    		if(word.find(character) != string::npos)
    			found++;
    	}
    	
		if(found == spell.size())
			return 1;
		
		found = 0;
    }
    
    return 2;
}
