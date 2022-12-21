#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {

    int pos = -1;
    
    for(string str : seoul)
    {
    	pos++;
    	if(str == "Kim") break;
    }
    
    string answer = "김서방은 " + to_string(pos) + "에 있다"; 
    
    return answer;
}
