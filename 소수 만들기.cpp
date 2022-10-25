#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    
    int arr[50001]={0,}; arr[1]=1;
	for(int i=2; i<50001; i++) {
		for(int j=2; i*j<50001; j++) {
			arr[i*j]=1;
		}
	}
	
	for(int i=0; i<nums.size(); i++) {
		for(int j=i+1; j<nums.size(); j++) {
			for(int k=j+1; k<nums.size(); k++) {
				if(arr[nums[i]+nums[j]+nums[k]]==0)
					answer++;
			}
		}
	}

    return answer;
}
