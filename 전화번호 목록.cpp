#include <string>
#include <vector>
#include <unordered_map> 
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string, int> T;
    
	for(auto e : phone_book) T[e]=1;
    
    for(int i=0; i<phone_book.size(); i++) {
    	string num="";
    	for(int j=0; j<phone_book[i].size(); j++) {
    		num+=phone_book[i][j];
    		if(T[num] && num!=phone_book[i])
    			return false;
    	}
    }
    
    return true;
}
