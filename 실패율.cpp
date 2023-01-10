#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<double, int> A, pair<double, int> B)
{
	if(A.first == B.first)
		return A.second < B.second;
		
	return A.first > B.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> fails;
    
    int total = stages.size();
    
    int users[501] = {0};
	for (auto it = stages.begin(); it != stages.end(); ++it)
		users[*it - 1]++;
	
	for (int i = 0; i < N; ++i)
	{
		if (users[i] == 0)
			fails.push_back({0, i + 1});
		else
		{
			fails.push_back({(double)users[i]/total, i + 1});
			total -= users[i];
		}
	}
	
	sort(fails.begin(), fails.end(), cmp);
    
    for (auto p : fails)
    	answer.push_back(p.second);
    
    return answer;
}
