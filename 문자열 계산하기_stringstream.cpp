#include <string>
#include <sstream>
using namespace std;

int solution(string my_string) {
	int answer = 0;
	
	stringstream ss;
	ss.str(my_string);
    
    ss>>answer;
	
	char ch;
	int tmp = 0;
	
	while(ss) {
		
		if(ch == '+')
			answer += tmp;
		
		else if(ch == '-')
			answer -= tmp;
			
		ss >> ch >> tmp;
	}
	
	return answer;
}
