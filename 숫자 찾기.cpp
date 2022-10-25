#include <string>
using namespace std;

int solution(int num, int k) {
    string num_string = to_string(num);
    int size = num_string.size();
    
    for(int i = 0; i < size; i++)
    	if(num_string[i] - '0' == k)
    		return i + 1;
    
    return -1;
}
