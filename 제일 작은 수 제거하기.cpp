#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int number : arr)
    {
    	if(number == *min_element(arr.begin(), arr.end()))
    		continue;
    	
    	answer.push_back(number);
    }
    
    if(answer.size() == 0) answer.push_back(-1);
    
    return answer;
}
