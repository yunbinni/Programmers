#include <string>
using namespace std;

int solution(int n) {
    int answer = 0;
    
    string n_string = to_string(n);
    
    for(char ch : n_string)
    	answer += (ch - '0');
    
    return answer;
}
