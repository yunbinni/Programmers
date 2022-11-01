#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};
    
    for(string direction : keyinput)
    {
    	if(direction == "up")
    	{
    		if(answer[1] < board[1]/2)
    			answer[1]++;
    	}
    	if(direction == "down")
    	{
    		if(answer[1] > -1*board[1]/2)
    			answer[1]--;
    	}
    	if(direction == "left")
    	{
    		if(answer[0] > -1*board[0]/2)
    			answer[0]--;
    	}
    	if(direction == "right")
    	{
    		if(answer[0] < board[0]/2)
    			answer[0]++;
    	}
    }
    
    return answer;
}
