#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    string babbles[4] = {"aya", "ye", "woo", "ma"};
    
    for(string word : babbling)
    {
    	int count = 0;
    	
    	for(string babble : babbles)
    	{
    		if(word.find(babble) != string::npos)
    			count += babble.size();
    	}
    	
    	if(count == word.size())
    		answer++;
    }
    
    return answer;
}
