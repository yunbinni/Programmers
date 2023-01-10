#include <string>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long p_i = stoll(p);
    
    for(int i = 0; i < t.size() - p.size() + 1; i++)
    {
    	long long t_i = stoll(t.substr(i, p.size()));
    	
    	if(t_i <= p_i) answer++;
    }
    
    return answer;
}
