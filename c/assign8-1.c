#include<stdio.h>
//rate를 인자로 받는 함수
double change_rate(double rate) {
	rate *= 1.1;
	return rate;
}

int main() {
	double rate;
	rate = .2;
	rate = change_rate(rate);//rate를 인자로 전달 후 바뀐 rate값을 다시 받기
	printf("The modified rate is %lf.\n", rate);
	return 0;
}