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
    
    string answer = "�輭���� " + to_string(pos) + "�� �ִ�"; 
    
    return answer;
}
