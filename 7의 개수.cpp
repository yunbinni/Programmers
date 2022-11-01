#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int number : array)
    {
    	string number_string = to_string(number);
    	
    	for(char ch : number_string)
    		answer += (ch == '7');
    }
    
    return answer;
}
