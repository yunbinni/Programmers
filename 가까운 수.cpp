#include <cmath>
#include <vector>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int distance = 101;
    
    for(int number : array) {
		int temp = abs(number - n);
    	
		if(temp < distance) {
			distance = temp;
			answer = number;
    	}
    	
    	if(temp == distance)
    		if(number < answer)
    			answer = number;
    }
    
    return answer;
}
