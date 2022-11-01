#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool compare(pair<int, int> A, pair<int, int> B) {
	if(A.second == B.second)
		return A.first > B.first;
	return A.second < B.second;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    vector<pair<int, int>> distances; // <original, distance>
    
    for(int number : numlist)
    {
    	auto distance = make_pair(number, abs(number - n));
    	distances.push_back(distance);
    }
    
    sort(distances.begin(), distances.end(), compare);
    
    for(auto distance : distances)
    	answer.push_back(distance.first);
    
    return answer;
}
