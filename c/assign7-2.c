#include <stdio.h>
#define true 1
#define false 0
//윤년판단
int leap_year(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0))
		return true;
	else
		return false;
}
//작년까지 일수
int to_last_year(int year) {
	int i, total = 0;

	for (i = 1; i <= (year - 1); i++) {
		if (leap_year(i))
			total += 366;
		else
			total += 365;
	}
	return total;
}
//올해 1월1일부터 전달 말까지 일수
int to_last_month(int year, int month) {
	int i, total = 0;

	for (i = 1; i <= (month - 1); i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
			total += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			total += 30;
		else {
			if (leap_year(year))
				total += 29;
			else
				total += 28;
		}
	}
	return total;
}
//달력 출력
void print_calendar(int year, int month, int f_d) {
	int max, n;

	if (month == 2) {
		if (leap_year(year)) {
			max = 29;
		}
		else
			max = 28;
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
		max = 31;

	else
		max = 30;

	printf("일\t월\t화\t수\t목\t금\t토\n");

	for (n = 0; n < f_d; n++)
		printf("\t");
	for (int d = 1; d <= max; d++) {
		printf("%d\t", d);
		if (f_d == 6) {
			f_d = -1;
			printf("\n");
		}
		f_d++;
	}
}
	

int main() {
	int year, month, day, first_day;

	printf("Enter year and month.\n");
	scanf("%d %d", &year, &month);//년과 달을 입력 받기

	day = to_last_month(year, month) + to_last_year(year) + 1;

	first_day = day % 7;//입력받은 달 1일의 요일을 판별

	print_calendar(year, month, first_day);

	return 0;
}