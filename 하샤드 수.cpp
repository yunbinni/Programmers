#include <string>
using namespace std;

bool solution(int x) {
    bool answer = true;
    
    string x_str = to_string(x);
    
    int sum = 0;
    
    for(char ch : x_str)
    {
    	sum += (ch - 48);
    }
    
    if(x%sum == 0) answer = true;
    else answer = false;
    
    return answer;
}
