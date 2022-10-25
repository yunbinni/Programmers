#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    
    s.push_back(' ');
    string store;
    vector<int> numbers;
    
    for(char c : s) {
    	
    	if(c == ' ') {
    		
    		if(store == "Z")
    			numbers.pop_back();
    		
			else {
    			int number = stoi(store);
    			numbers.push_back(number);
    		}
    		
    		store.clear();
    	}
    	
    	else store.push_back(c);
    }
    
    for(int number : numbers)
    	answer += number;
    
    return answer;
}
