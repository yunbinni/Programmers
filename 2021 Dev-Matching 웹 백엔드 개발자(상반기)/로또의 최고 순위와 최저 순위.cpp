#include <string>
#include <vector>
using namespace std;

int RankfromCorrects[]={6, 6, 5, 4, 3, 2, 1}; 

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int zeroes=0, corrects=0, incorrects=0;
	vector<int> answer;
	for(int myNumber : lottos) {
		zeroes+=(myNumber==0);
		for(int winNumber : win_nums) {
			corrects+=(myNumber==winNumber);
			incorrects+=(myNumber!=winNumber);
		}
	}
	answer.push_back(RankfromCorrects[corrects+zeroes]);
	answer.push_back(RankfromCorrects[corrects]);
    return answer;
}
