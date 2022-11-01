#include <vector>
using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    int a_1 = common[0];
	int a_2 = common[1];
	int a_3 = common[2];
	
	if(a_2 - a_1 == a_3 - a_2)
    	return common.back() + (a_2 - a_1);
    
    else
    	return common.back() * (a_2 / a_1);
}
