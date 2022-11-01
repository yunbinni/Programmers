#include <string>
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(; i <= j; i++)
    {
    	string i_string = to_string(i);
    	char k_string = k + '0';
    	
    	for(char ch : i_string)
    		if(ch == k_string)
    			answer++;
    }
    
    return answer;
}
