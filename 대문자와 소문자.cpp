#include <string>
using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(char c : my_string) {
    	if('A' <= c && c <= 'Z')
    		answer.push_back(c - 'A' + 'a');
    	
    	if('a' <= c && c <= 'z')
    		answer.push_back(c - 'a' + 'A');
    }
    
    return answer;
}
