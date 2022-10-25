#include <vector>
using namespace std;

int array[104][104];

void initArray(int rows, int columns) {
	int num=1;
	for(int r=1; r<=rows; r++)
		for(int c=1; c<=columns; c++)
			array[r][c]=num++;
}

void TurnArray(vector<int> query) {
	int x1=query[0];
	int y1=query[1];
	int x2=query[2];
	int y2=query[3];
	
	int tempNum=array[x1][y1];
	
	//왼쪽 세로변
	for(int i=x1; i<x2; i++)
		array[i][y1]=array[i+1][y1];
	
	//아래쪽 가로변
	for(int i=y1; i<y2; i++)
		array[x2][i]=array[x2][i+1];
	
	//오른쪽 세로변
	for(int i=x2; i>x1; i--)
		array[i][y2]=array[i-1][y2];
	
	//위쪽 가로변
	for(int i=y2; i>y1; i--)
		array[x1][i]=array[x1][i-1];
		
	array[x1][y1+1]=tempNum;
}

int FindMinimum(vector<int> query) {
	int x1=query[0];
	int y1=query[1];
	int x2=query[2];
	int y2=query[3];
	
	int minN=100*100+1;
	
	//왼쪽 세로변
	for(int i=x1; i<x2; i++)
		minN=min(minN, array[i][y1]);
	
	//아래쪽 가로변
	for(int i=y1; i<y2; i++)
		minN=min(minN, array[x2][i]);
	
	//오른쪽 세로변
	for(int i=x2; i>x1; i--)
		minN=min(minN, array[i][y2]);
	
	//위쪽 가로변
	for(int i=y2; i>y1; i--)
		minN=min(minN, array[x1][i]);
	
	return minN;
}

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    initArray(rows, columns);
    for(vector<int> query : queries) {
    	TurnArray(query);
    	answer.push_back(FindMinimum(query));
    }
    return answer;
}
