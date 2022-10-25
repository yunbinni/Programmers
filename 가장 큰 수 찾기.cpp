#include <vector>
using namespace std;

vector<int> solution(vector<int> array) {
	int arraySize = array.size();
    vector<int> answer;
    
    int maxNumber = 0, maxIndex = 0;
    
    for(int i = 0; i < arraySize; i++) {
    	int number = array[i];
    	
		if(number > maxNumber) {
    		maxNumber = number;
    		maxIndex = i;
    	}
    }
    
    answer.push_back(maxNumber);
    answer.push_back(maxIndex);
    
    return answer;
}
