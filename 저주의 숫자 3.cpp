#include <algorithm>
#include <string>
using namespace std;

int solution(int n) {
    int answer = 0;
    
    int num = 1;
    
    for(int i = 1; i <= n; i++)
    {
        string num_string = to_string(num);
        
        while(num%3 == 0 || find(num_string.begin(), num_string.end(), '3') != num_string.end())
        {
        	num++;
        	num_string = to_string(num);
        }
        
		num++;
    }
    
    answer = num - 1;
    
    return answer;
}
