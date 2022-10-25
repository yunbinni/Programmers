#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
	if(direction=="left") {
    	answer.assign(numbers.begin()+1, numbers.end());
    	answer.push_back(numbers[0]);
    }
    if(direction=="right") {
    	answer.assign(numbers.begin(), numbers.end()-1);
    	answer.insert(answer.begin(), *(numbers.end()-1));
    }
    return answer;
}
