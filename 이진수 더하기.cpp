#include <string>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());
    
    if(bin1.size() > bin2.size())
        for(int i = 0; bin1.size() - bin2.size(); i++)
            bin2 += '0';
    
    if(bin1.size() < bin2.size())
        for(int i = 0; bin2.size() - bin1.size(); i++)
            bin1 += '0';
	
	int remain = 0;
	
	for(int i = 0; i < bin1.size(); i++)
	{
		int number = (bin1[i]-'0') + (bin2[i]-'0') + remain;
		remain = number/2;
		answer.push_back(number%2 + '0');
	}
	
	if(remain != 0)
		answer.push_back('1');
	
	reverse(answer.begin(), answer.end());
    
    return answer;
}
