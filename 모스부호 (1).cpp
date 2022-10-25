#include <string>
#include <map>
using namespace std;

map<string, char> morse;

void setMorse() {
	morse[".-"]='a';
	morse["-..."]='b';
	morse["-.-."]='c';
	morse["-.."]='d';
	morse["."]='e';
	morse["..-."]='f';
	morse["--."]='g';
	morse["...."]='h';
	morse[".."]='i';
	morse[".---"]='j';
	morse["-.-"]='k';
	morse[".-.."]='l';
	morse["--"]='m';
	morse["-."]='n';
	morse["---"]='o';
	morse[".--."]='p';
	morse["--.-"]='q';
	morse[".-."]='r';
	morse["..."]='s';
	morse["-"]='t';
	morse["..-"]='u';
	morse["...-"]='v';
	morse[".--"]='w';
	morse["-..-"]='x';
	morse["-.--"]='y';
	morse["--.."]='z';
}

string solution(string letter) {
    string answer = "";
    string tmp="";
    
    setMorse();
    
    for(auto it=letter.begin(); it!=letter.end(); it++) {
    	char character=(*it);
    	if(character==' ') {
    		answer+=morse[tmp];
    		tmp="";
    	}
    	else tmp+=character;
    }
    
    answer+=morse[tmp];
    
    return answer;
}
