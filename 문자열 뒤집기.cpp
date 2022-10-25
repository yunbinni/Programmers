#include <string>
using namespace std;

string solution(string my_string) {
	int my_stringSize=my_string.size();
    string answer = "";
    
    for(int i=my_stringSize-1; i>=0; i--)
    	answer.push_back(my_string[i]);
    	
    return answer;
}
