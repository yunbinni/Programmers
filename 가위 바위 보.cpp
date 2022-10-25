#include <string>
using namespace std;

string solution(string rsp) {
    string answer = "";
    for(char character : rsp) {
    	if(character=='2') answer+='0';
    	if(character=='0') answer+='5';
    	if(character=='5') answer+='2';
    }
    return answer;
}
