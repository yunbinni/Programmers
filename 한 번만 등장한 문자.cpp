#include <string>
using namespace std;

string solution(string s) {
	string answer = "";
	
	int count[26] = {0,};
    
    for(char c : s)
    	count[c - 'a']++;
    
    for(int i = 0; i < 26; i++)
    	if(count[i] == 1)
    		answer.push_back(i + 'a');
    
    return answer;
}
