#include <vector>
using namespace std;

vector<int> solution(vector<int> emergency) {
	int emergencySize=emergency.size();
    vector<int> answer(emergencySize, 0);
    
    for(int i=0; i<emergencySize; i++)
    	for(int j=0; j<emergencySize; j++)
    		if(emergency[j]>=emergency[i])
    			answer[i]++;
    			
    return answer;
}
