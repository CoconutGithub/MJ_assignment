#include<stdio.h>

int main() {
	char A[100] = { 0 }, B[100] = { 0 }; int num, i=0, j=0;

	printf("Enter the first string.\n");
	for (A[i] = getchar(); A[i] != '\n'; A[i] = getchar()) {
		i++;
	}
	printf("Enter the second string.\n");
	for (B[j] = getchar(); B[j] != '\n'; B[j] = getchar()) {
		j++;
	}
	i = 0;
	for (j=0; B[j] != '\n';) {
		if (A[i] == B[j])
				B[j] = '*';
		else {
			if (B[j] == '*') {
				i++;
				j = 0;
			}
				
			else
				j++;
		}
				
		}
	for (j = 0; B[j] != '\n';) {
		if (B[j] == '*')
			j++;
		else
			printf("No, they are NOT anagram.");
	}
	printf("Yes, they are anagram.");

	return 0;
}


