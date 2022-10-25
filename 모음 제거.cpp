#include <string>
using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(char character : my_string) {
    	if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u')
    		continue;
    	answer.push_back(character);
    }
    
    return answer;
}
