#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int number : arr)
    {
    	if(number%divisor == 0)
    		answer.push_back(number);
    }
    
    sort(answer.begin(), answer.end());
    
    if(answer.size() == 0)
    	answer.push_back(-1);
    
    return answer;
}
