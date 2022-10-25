#include <bits/stdc++.h>
using namespace std;

int arr[12];

void DFS(int L, int idx, int&n, vector<int>& info) {
	if(L>=n) return;
	
	if(arr[idx]>info[idx])
		return;
	
	arr[idx]++;
	DFS(L+1, idx, n, info);
	DFS(L+1, idx+1, n, info);
}

int count(vector<int>& info) {
	int A=0, B=0;
	for(int i=0; i<12; i++) {
		if(info[i]>arr[i]) A+=10-i;
		else B+=10-i;
	}
	
	if(A>=B) return -1;
	else return B-A;
}

vector<int> solution(int n, vector<int> info) {
    vector<int> answer;
    answer.push_back(-1);
    int tmp=0;
    for(int i=0; i<12; i++) {
    	memset(arr, 0, sizeof arr);
    	DFS(0, i, n, info);
    	int score=count(info);
    	if(score>tmp) {
    		tmp=score;
    		answer.assign(11, 0);
    		for(int i=0; i<12; i++)
    			answer[i]=arr[i];
    	}
    }
    return answer;
}
