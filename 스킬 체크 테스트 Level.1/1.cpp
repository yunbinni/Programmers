#include <string>
using namespace std;

bool solution(string s) {
    int p=0, y=0;
    for(char current : s) {
    	if(current=='p' || current=='P') p++;
    	if(current=='y' || current=='Y') y++;
    }
    return p==y;
}
