#include <string>
using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
	cipher.insert(0, " ");
	int cipherSize = cipher.size();
    
    for(int i=1; i<cipherSize; i++)
    	if(i%code == 0)
    		answer.push_back(cipher[i]);
    
    return answer;
}
