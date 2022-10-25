#include<bits/stdc++.h>
#include<map>
#include<set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	
	vector<int> answer(id_list.size(), 0); // 반환객체 초기화 
	
	map<string, int> id_index_list; // 사용자별 index 저장소 
	
	map<string, set<string> > flag; // 피신고자-신고자 저장소
	
	// 사용자 indexing
	for(int i=0; i<id_list.size(); i++)
		id_index_list[id_list[i]] = i;
	
	// 신고목록 파싱
	for(string eliment : report) {
		stringstream ss(eliment);
		string s, e;
		ss >> s >> e;
		
		flag[e].insert(s); // 피신고자를 신고한 사람들을 저장 
	}
	
	for(auto eliment : flag) {
		set<string> reporters = eliment.second;
		string reportee = eliment.first;
		
		if(reporters.size() >= k) {
			for(string reporter : reporters) {
				answer[id_index_list[reporter]]++;
			}
		}
	}
	
    return answer;
}

int main() {
	return 0;
}
