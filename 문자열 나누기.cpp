#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    
	vector<string> StringSet;
	
	string store;
	char standard;
	int count = 0;
	
	for(char ch : s)
	{
		if(count == 0)
		{
			if(store.length() > 0)
			{
				StringSet.push_back(store);
				store.clear();
			}
			
			count++;
			standard = ch;
			store.push_back(ch);
			
			continue;
		}
		
		if(ch == standard)
		{
			count++;
			store.push_back(ch);
		}
		
		else
		{
			count--;
			store.push_back(ch);
		}
	}
	
	answer = StringSet.size();
	if(store.length()) answer++;
	
    return answer;
}
