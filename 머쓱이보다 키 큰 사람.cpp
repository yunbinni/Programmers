#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    for(int number : array)
    	answer += (number > height);
    
    return answer;
}
