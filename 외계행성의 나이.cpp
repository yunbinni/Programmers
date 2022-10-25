#include <string>
using namespace std;

string solution(int age) {
    string answer = to_string(age);
    int answerSize=answer.size();
    for(int i=0; i<answerSize; i++)
    	answer[i]=97+answer[i]-'0';
    return answer;
}
