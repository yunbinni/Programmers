#include<bits/stdc++.h>
#include<map>
#include<set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	
	vector<int> answer(id_list.size(), 0); // ��ȯ��ü �ʱ�ȭ 
	
	map<string, int> id_index_list; // ����ں� index ����� 
	
	map<string, set<string> > flag; // �ǽŰ���-�Ű��� �����
	
	// ����� indexing
	for(int i=0; i<id_list.size(); i++)
		id_index_list[id_list[i]] = i;
	
	// �Ű��� �Ľ�
	for(string eliment : report) {
		stringstream ss(eliment);
		string s, e;
		ss >> s >> e;
		
		flag[e].insert(s); // �ǽŰ��ڸ� �Ű��� ������� ���� 
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
