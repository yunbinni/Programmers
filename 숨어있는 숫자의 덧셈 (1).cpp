#include <string>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(char character : my_string)
    	if('0' <= character && character <= '9')
    		answer += character-'0';
    
    return answer;
}
