#include <string>
#include <set>
using namespace std;

string solution(string my_string) {
    string answer = "";
    
    set<char> used;
    
    for(char c : my_string) {
    	if(used.find(c) != used.end())
    		continue;
    	
		used.insert(c);
    	answer += c;
    }
    
    return answer;
}
