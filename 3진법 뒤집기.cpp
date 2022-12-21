#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string getK_Number(int n, int k)
{
	if(n == 0) return "";
	return getK_Number(n/k, k) + to_string(n%k);
}

int get10_Number(string n_str, int k)
{
	int answer = 0;
	int multiplier = 1;
	
	for(char ch : n_str)
	{
		answer += (ch - '0') * multiplier;
		multiplier *= k;
	}
	
	return answer;
}

int solution(int n) {
    int answer = 0;
    
    string n_3_str = getK_Number(n, 3);
    
    return get10_Number(n_3_str, 3);
}

int main()
{
	string n_str = getK_Number(45, 3);
	cout << n_str << endl;
	
	cout << get10_Number("1200", 3);
	return 0;
}
