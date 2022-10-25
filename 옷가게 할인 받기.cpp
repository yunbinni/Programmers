using namespace std;

int solution(int price) {
    int answer = price;
    if(price>=100000)
    	answer=price*0.95;
    if(price>=300000)
    	answer=price*0.90;
    if(price>=500000)
    	answer=price*0.80;
    return answer;
}
