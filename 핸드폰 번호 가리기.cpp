#include <string>
using namespace std;

string solution(string phone_number) {
    
	for(auto it = phone_number.rbegin() + 4; it != phone_number.rend(); it++)
    {
    	*(it) = '*';
    }
    
    return phone_number;
}
