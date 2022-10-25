#include <string>
#include <map>
using namespace std;

map<string, int> numbersTable;

void setNumbersTable() {
	numbersTable["zero"] = 0;
	numbersTable["one"] = 1;
	numbersTable["two"] = 2;
	numbersTable["three"] = 3;
	numbersTable["four"] = 4;
	numbersTable["five"] = 5;
	numbersTable["six"] = 6;
	numbersTable["seven"] = 7;
	numbersTable["eight"] = 8;
	numbersTable["nine"] = 9;
}

long long solution(string numbers) {
    long long answer = 0;
    
	string store;
    setNumbersTable();
    
    for(char c : numbers) {
    	
    	store.push_back(c);
    	
    	if(numbersTable[store] != 0 || store == "zero") {
    		answer = answer*10 + numbersTable[store];
			store.clear();
		}
	}
    
    return answer;
}
