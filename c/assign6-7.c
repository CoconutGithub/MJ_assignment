//씨저 사이퍼 암호화 프로그램
#include<stdio.h>

int main() {
	char ch, cipher; int key;
	
	printf("Enter the key.\n");
	scanf("%d", &key);
	getchar();//키를 입력하면서 생긴 엔터키 흡수
	
	printf("Enter the text.\n");
	for (scanf("%c",&ch);ch!='\n';scanf("%c", &ch)) {
		cipher = ch + key;//암호화를 하기위해 키의 수만 큼 밀기
		cipher %= 128;
		printf("%c", cipher);

	}
	return 0;
}