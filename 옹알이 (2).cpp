#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(string line : babbling)
    {
    	set<string> Set = {"aya", "ye", "woo", "ma"};
    	string store, lastWord;
    	
    	for(char ch : line)
    	{
    		store.push_back(ch);
    		
    		if(lastWord == store) break;
    		
    		else if(Set.count(store))
    		{
    			lastWord = store;
    			store.clear();
    		}
    	}
    	
		if(store.empty()) answer++;
    }
    
    return answer;
}

int main() {
	solution({"ayaye", "uuu", "yeye", "yemawoo", "ayaayaa"});
	return 0;
}
