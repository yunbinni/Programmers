#include <vector>
#include <queue>
#include <numeric> // accumulate
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int time = 0;
    
    deque<int> waitings(truck_weights.begin(), truck_weights.end());
    deque<int> onBridge;
    
    while(waitings.size())
    {
    	time++;
    	
    	if(onBridge.size() == bridge_length)
    		onBridge.pop_front();
    		
    	int sumWeight = accumulate(onBridge.begin(), onBridge.end(), 0);
    	int nextWeight = waitings.front();
    	
    	if(sumWeight + nextWeight <= weight)
    	{
    		onBridge.push_back(waitings.front());
    		waitings.pop_front();
    	}
    	
    	else onBridge.push_back(0);
    }
    
    return time + bridge_length;
}

int main()
{
	solution(2, 10, {7,4,5,6});
	return 0;
}
