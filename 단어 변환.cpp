#include <string>
#include <vector>
using namespace std;

int answer = 51;
vector<bool> chk;

void DFS(int L, string now, string& target, vector<string>& words)
{
	if(L > words.size())
		return;
	
	if(now == target)
	{
		answer = min(answer, L);
		return;
	}
	
	for(int i = 0; i < words.size(); i++)
    {
    	if(chk[i] == true) continue;
    	
    	chk[i] = true;
    	
    	int diff = 0;
    	
    	for(int j = 0; j < now.size(); j++)
    		if(now[j] != words[i][j])
				diff++;
		
		if(diff == 1)
			DFS(L + 1, words[i], target, words);
		
		chk[i] = false;
    }
}

int solution(string begin, string target, vector<string> words) {
    chk.assign(words.size(), false);
    
    DFS(0, begin, target, words);
    
    if(answer == 51) answer = 0;
    
    return answer;
}
