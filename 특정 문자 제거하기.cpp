#include <string>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for(char current : my_string)
    	if(current!=letter[0])
    		answer.push_back(current);
    
    return answer;
}
