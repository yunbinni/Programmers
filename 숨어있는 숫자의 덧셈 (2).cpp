#include <string>
#include <vector>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    vector<string> numbers;
    string store;
    
    for(char now : my_string)
    {
    	if( ('A' <= now && now <= 'Z') || ('a' <= now && now <= 'z') )
    	{
    		if(store.size() > 0) {
	    		numbers.push_back(store);
	    		store.clear();
	    	}
    	}
    	else store.push_back(now);
    }
    
    if(store.size() > 0)
	{
		numbers.push_back(store);
		store.clear();
	}
    
    for(string number : numbers)
    {
    	answer += stoi(number);
    }
    
    return answer;
}
