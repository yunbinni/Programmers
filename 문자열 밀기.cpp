#include <string>
using namespace std;

string push_and_insert(string word) {
	string answer = "";
	
	char back = word.back();
	
	word.pop_back();
	
	answer = back + word;
	
	return answer;
}

int solution(string A, string B) {
    int count = 0;
    
    int size = A.size();
    
    for(int i = 0; i < size+1; i++)
    {
    	if(A == B)
    		break;
    	
    	else
    	{
    		A = push_and_insert(A);
    		count++;
    	}
    }
    
    if(count == size+1) return -1;
    else return count;
}
