#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, string> parents;
map<string, int> membersIndex;

void distribute(string seller, int profit, vector<int>& answer) {
	if(seller=="-") return;
	int forParent=profit/10;
	answer[membersIndex[seller]]+=profit-forParent;
	if(forParent)
		distribute(parents[seller], forParent, answer);
}

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer;
    
	int membersCount=enroll.size();
    int sellersCount=seller.size();
    
    answer.assign(membersCount, 0);
    
    for(int i=0; i<membersCount; i++) {
    	parents[enroll[i]]=referral[i];
    	membersIndex[enroll[i]]=i;
    }
    
    for(int i=0; i<sellersCount; i++)
    	distribute(seller[i], amount[i]*100, answer);
    
    return answer;
}
