#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
	for(char character : my_string)
    	if(character>='0' && character<='9')
    		answer.push_back(character-'0');
    
    sort(answer.begin(), answer.end());
    
    return answer;
}
