#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	int size=progresses.size();
    vector<int> answer, day, chk;
    
    for(int i=0; i<size; i++)
    	day.push_back((100-progresses[i])/speeds[i]+((100-progresses[i])%speeds[i]>0));
    
    chk.assign(size, 0);
    
    for(int i=0; i<size; i++) {
    	int cnt=0;
    	for(int j=i; j<size; j++) {
    		if(day[j]<=day[i])
    			cnt++;
    		else break;
    
    reverse(answer.begin(), answer.end());
    
	return answer;
}
