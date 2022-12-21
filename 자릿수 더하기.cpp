#include <iostream>
#include <string>
using namespace std;

int solution(int n)
{
    int answer = 0;
    
    string n_str = to_string(n);
    
    for(char n_ch : n_str)
    {
		answer += n_ch - '0';
	}

    return answer;
}
