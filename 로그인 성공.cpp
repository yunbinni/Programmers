#include <string>
#include <vector>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    string id = id_pw[0];
    string pw = id_pw[1];
    
    for(auto account : db)
    {
    	string id_db = account[0];
    	string pw_db = account[1];
    	
    	if(id_db == id)
		{
    		if(pw_db == pw)
    			return "login";
			
			else
				return "wrong pw";
		}
	}
    
    return answer;
}
