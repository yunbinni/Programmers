#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
	int odd=0, even=0;
    vector<int> answer;
    
    for(int num : num_list) {
    	num%2==0?even++:odd++;
    }
    answer.push_back(even);
    answer.push_back(odd);
    
    return answer;
}
