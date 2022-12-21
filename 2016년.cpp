#include <string>
#include <vector>
using namespace std;

int DAYS_OF_MONTH[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string DAY[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

string solution(int a, int b) {
    string answer = "";
    
    int days = 0;
    
	for(int i = 1; i < a; i++)
		days += DAYS_OF_MONTH[i];
	
	days += b;
    
    answer = DAY[days%7];
    
    return answer;
}
