#include <string>
#include <vector>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(string e1 : s1)
    	for(string e2 : s2)
    		answer += (e1 == e2);
    
    return answer;
}
