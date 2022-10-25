using namespace std;

long long arr[2001];

long long solution(int n) {
    arr[1]=1, arr[2]=2;
    
    for(int i=3; i<=n; i++)
    	arr[i]=(arr[i-1]+arr[i-2])%1234567;
    
    return arr[n];
}
