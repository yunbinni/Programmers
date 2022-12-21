#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    vector<int> LastAlphabetIndexes('z' - 'a' + 1, -1);
    
    for(int i = 0; i < s.size(); i++)
    {
    	char ch = s[i];
    	int value;
    	
    	if(LastAlphabetIndexes[ch - 'a'] == -1)
    		value = -1;
    	else
	    	value = i - LastAlphabetIndexes[ch - 'a'];
    	
    	answer.push_back(value);
    	LastAlphabetIndexes[ch - 'a'] = i;
    }
    
    return answer;
}
