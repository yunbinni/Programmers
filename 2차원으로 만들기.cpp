#include <vector>
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
	int num_listSize=num_list.size();
    vector<vector<int>> answer(num_listSize/n);
    
    for(int i=0; i<num_listSize; i++)
    	answer[i/n].push_back(num_list[i]);
    
	return answer;
}
