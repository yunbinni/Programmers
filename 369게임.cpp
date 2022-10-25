#include <string>
using namespace std;

int solution(int order) {
    int answer = 0;
    
    string orderString = to_string(order);
    
    for(char c : orderString)
    	if(c == '3' || c == '6' || c == '9')
    		answer++;
    
    return answer;
}
