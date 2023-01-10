#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string A, string B)
{
	if(A[0] == B[0])
	{
		
	return A[0] > B[0];
}

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> numbers_str;
    
    for(int number : numbers)
    	numbers_str.push_back(to_string(number));
    
    sort(numbers_str.begin(), numbers_str.end(), greater<string>());
    
    for(string line : numbers_str)
    	answer += line;
    
    return answer;
}
