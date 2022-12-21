#include <iostream>
#include <vector>
#include <algorithm> // to reverse
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n, "");
    
    for(int i = 0; i < n; i++)
    {
    	int num1 = arr1[i];
    	int num2 = arr2[i];
    	
    	int num_syn = num1 | num2;
    	
    	for(int j = 0; j < n; j++)
    	{
    		if( (1 << j) & num_syn )
    			answer[i].push_back('#');
    		else
    			answer[i].push_back(' ');
    	}
    	
    	reverse(answer[i].begin(), answer[i].end());
    }
    
//    for(string row : answer)
//    	cout << row << endl;
    
    return answer;
}

int main() {
	solution(5, {9, 20, 28, 18, 11}, {30, 1, 21, 17, 28});
	return 0;
}
