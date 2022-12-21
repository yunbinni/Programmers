#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> sorted;
    
    for(int s : score)
    {
    	sorted.push_back(s);
    	sort(sorted.begin(), sorted.end(), greater<int>());
    	
    	if(sorted.size() < k)
    		answer.push_back(sorted.back());
    	
    	else
    		answer.push_back(sorted[k - 1]);
    }
    
    return answer;
}
