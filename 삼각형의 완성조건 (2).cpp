#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end());
    
    for(int i = sides[1] + 1 - sides[0]; i < sides[1]; i++)
    	answer++;
    
    for(int i = sides[0] + sides[1]; i > sides[1]; i--)
    	answer++;
    	
    return answer;
}
