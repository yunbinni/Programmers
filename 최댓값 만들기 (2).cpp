#include <vector>
using namespace std;

int solution(vector<int> numbers) {
    int answer = -1*10000*10000;
    
    int size = numbers.size();
    
    for(int i = 0; i < size - 1; i++)
    	for(int j = i + 1; j < size; j++)
    		answer = max(answer, numbers[i]*numbers[j]);
    
    return answer;
}
