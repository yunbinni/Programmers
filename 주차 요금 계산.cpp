#include <bits/stdc++.h>
using namespace std;

int get_timediff(string in, string out) {
	int in_h = stoi(in.substr(0, 2));
	int in_m = stoi(in.substr(3, 2));
	int out_h = stoi(out.substr(0, 2));
	int out_m = stoi(out.substr(3, 2));
	
	int diff = (out_h - in_h)*60 + (out_m - in_m);
	
	return diff;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, vector<string>> RecordsByCar; // 차량(번호)별 출입기록 
    
    stringstream ss;
    
    for(auto record : records)
    {
    	ss.str(record);
    	string time, number, state; ss >> time >> number >> state;
    	
    	RecordsByCar[number].push_back(time);
    	ss.clear();
    }
    
    for(auto car : RecordsByCar)
    {
    	if(car.second.size() & 1) // 출차 기록이 없으면 추가 
    		car.second.push_back("23:59");
    	
    	vector<string> records = car.second;
    	int totalTime = 0;
    	
    	for(int i = 0; i < records.size() - 1; i += 2)
		{
    		totalTime += get_timediff(records[i], records[i + 1]);
    	}
    	
    	int price = fees[1];
    	
    	if(totalTime > fees[0])
    	{
    		price += ceil((totalTime - fees[0]) / (double)fees[2]) * fees[3];
    	}
    	
    	answer.push_back(price);
    }
    
    return answer;
}
