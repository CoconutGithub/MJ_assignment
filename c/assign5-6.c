//BMI지수 구하는 프로그램

#include<stdio.h>

//BMI지수 구하는 함수
double BMI(double weight, double height) {
	return weight / (height * height);
}

//BMI지수 분류
void BMI_value(double BMI) {
	if (BMI < 18.5)
		printf("your BMI is %lf.It is Underweight.",BMI);
	else if(BMI<25.0)
		printf("your BMI is %lf.It is Normal.",BMI);
	else if(BMI>25.0)
		printf("your BMI is %lf.It is Overweight.",BMI);
}



int main() {
	double height, weight, bmi;
	
	printf("Enter your weight.\n");
	scanf_s("%lf", &weight);
	printf("Enter your height.\n");
	scanf_s("%lf", &height);
	bmi =BMI(weight, height);//BMI값 대입
	BMI_value(bmi);
	
	return 0;
}