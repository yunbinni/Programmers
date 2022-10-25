#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int num_listSize=num_list.size();
    
	for(int i=num_listSize-1; i>=0; i--)
    	answer.push_back(num_list[i]);
    	
    return answer;
}
