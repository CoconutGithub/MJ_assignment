//���� ������ ��ȣȭ ���α׷�
#include<stdio.h>

int main() {
	char ch, cipher; int key;
	
	printf("Enter the key.\n");
	scanf("%d", &key);
	getchar();//Ű�� �Է��ϸ鼭 ���� ����Ű ���
	
	printf("Enter the text.\n");
	for (scanf("%c",&ch);ch!='\n';scanf("%c", &ch)) {
		cipher = ch + key;//��ȣȭ�� �ϱ����� Ű�� ���� ŭ �б�
		cipher %= 128;
		printf("%c", cipher);

	}
	return 0;
}