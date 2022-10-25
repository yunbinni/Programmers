#include <string>
using namespace std;

int solution(string my_string) {
	my_string.push_back(' ');
    int answer = 0;
    
    string store;
    int plus = 0, minus = 0;
    bool isPlus = true, isMinus = false;
    
    for(char now : my_string) {
    	
    	if(now != ' ')
    		store.push_back(now);
    	
    	else {
    		if(store == "+") isPlus = true, isMinus = false;
    		else if(store == "-") isMinus = true, isPlus = false;
    		
    		else {
    			int number = stoi(store);
    			
    			if(isPlus) plus += number;
    			if(isMinus) minus += number;
    		}
    		
    		store.clear();
    	}
    }
    
    return plus - minus;
}
