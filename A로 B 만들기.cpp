#include <string>
#include <map> 
using namespace std;

int solution(string before, string after) {
    
    map<char, int> count;
    
    for(char bef : before)
    	count[bef]++;
    
    for(char aft : after)
    {
    	if(count[aft] == 0)
    		return 0;
    	
    	count[aft]--;
    }
    
    for(auto it = count.begin(); it != count.end(); it++)
    {
    	if(it->second != 0)
    		return 0;
    }
    
    return 1;
}
