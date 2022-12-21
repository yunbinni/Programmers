#include <bits/stdc++.h>
#define ALL(X) X.begin(), X.end() 
using namespace std;
using ull = uint64_t;

int solution(vector<int> queue1, vector<int> queue2) {
    ull sum1 = accumulate(ALL(queue1), 0);
    ull sum2 = accumulate(ALL(queue2), 0);
    ull total = sum1 + sum2;
    
    if(total & 1) return -1; // √—«’¿Ã »¶ºˆ¿Ã∏È æ»µ»¥Ÿ.
	
	int answer = 0;
	int length = queue1.size();
	deque<int> q1, q2;
	
	while(!queue1.empty()) {
		q1.push_front(queue1.back());
		queue1.pop_back();
	}
	while(!queue2.empty()) {
		q2.push_front(queue2.back());
		queue2.pop_back();
	}
	
	for(int i = 0; i < 3 * length; i++)
	{
		if(sum1 > sum2)
		{
			sum1 -= q1.front();
			sum2 += q1.front();
			q2.push_back(q1.front());
			q1.pop_front();
			answer++;
		}
		else if(sum1 < sum2)
		{
			sum2 -= q2.front();
			sum1 += q2.front();
			q1.push_back(q2.front());
			q2.pop_front();
			answer++;
		}
		else
			return answer;
	}
    
    return -1;
}
