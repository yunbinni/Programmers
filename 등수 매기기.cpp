#include <vector>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    
    int size = score.size();
    
    answer.assign(size, 1);
    
    vector<int> totals;
    
    for(auto s : score)
    	totals.push_back(s[0] + s[1]);
    
    for(int i = 0; i < size; i++) {
    	for(int j = 0; j < size; j++)
    	{
    		if(totals[i] < totals[j])
    			answer[i]++;
    	}
    }
    
    return answer;
}
