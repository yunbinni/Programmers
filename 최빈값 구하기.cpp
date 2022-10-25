#include <algorithm>
#include <vector>
using namespace std;

struct CountbyNumber {
	int number;
	int count;
	CountbyNumber(int pnumber, int pcount) {
		number=pnumber;
		count=pcount;
	}
};

bool compare(CountbyNumber A, CountbyNumber B) {
	if(A.count>B.count) return true;
	return false;
}

int solution(vector<int> array) {
    int arraySize=array.size();
    if(arraySize==1) return 1;
    sort(array.begin(), array.end());
    
	vector<CountbyNumber> CountRecord;
	CountRecord.push_back(CountbyNumber(array[0], 1));
    
    for(int i=1; i<arraySize; i++) {
    	int currentNumber=array[i];
    	int latestNumber=CountRecord.back().number;
    	
    	if(currentNumber==latestNumber)
    		CountRecord.back().count++;
    	else
    		CountRecord.push_back(CountbyNumber(currentNumber, 1));
    }
    
    sort(CountRecord.begin(), CountRecord.end(), compare);
    
    if(CountRecord[0].count==CountRecord[1].count) return -1;
    else return CountRecord[0].number;
}
