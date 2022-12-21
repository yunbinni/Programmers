#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<double, int> A, pair<double, int> B)
{
	if(A.first == B.first)
		return A.second < B.second;
	return A.first >= B.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, int>> PlayersByStage(N + 2, {0, 0});
    
    for(int stage : stages)
    	PlayersByStage[stage].first++;
    
    int players = stages.size();
	
	for(int i = 1; i <= N; i++)
	{
		PlayersByStage[i].second = players;
		players -= PlayersByStage[i].first;
	}
    
    for(int i = 0; i < PlayersByStage.size(); i++)
    	cout << PlayersByStage[i].first << " " << PlayersByStage[i].second << endl;

	vector<pair<double, int>> FailRatioByStage(N + 1, {1.1, 0});
	
	for(int i = 1; i <= N; i++)
	{
		FailRatioByStage[i].first = (double)PlayersByStage[i].first/(double)PlayersByStage[i].second;
		FailRatioByStage[i].second = i;
	}
	
	sort(FailRatioByStage.begin(), FailRatioByStage.end(), cmp);
	
	for(int i = 1; i <= N; i++) {
//		cout << FailRatioByStage[i].first << " " << FailRatioByStage[i].second << endl;
		answer.push_back(FailRatioByStage[i].second);
	}
	
    return answer;
}

int main() {
	solution(5, {2, 1, 2, 6, 2, 4, 3, 3});
	return 0;
}
