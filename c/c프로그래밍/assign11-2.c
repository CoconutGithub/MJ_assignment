#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a_ele = 0, b_ele = 0, i, j, k=0,l;
	int* a, * b, * m;
	//�迭�� ����
	a = (int*)malloc(a_ele * sizeof(int));
	b = (int*)malloc(b_ele * sizeof(int));
	m = (int*)malloc((a_ele + b_ele) * sizeof(int));

	printf("Enter number of elements in array a.\n");
	scanf("%d", &a_ele);//a�迭 ��Ҹ� �Է¹���

	printf("Enter data to be inserted in array a. It must be in sorted order.\n");
	
	//a�迭�� ä������
	for (i = 0; i < a_ele; i++)
	{
		scanf("%d", &a[i]);
	}
	
	if (a == NULL)
		exit(1);
	printf("Enter number of elements in array b.\n");
	scanf("%d", &b_ele);//b�迭 ��Ҹ� �Է¹���

	printf("Enter data to be inserted in array b. It must be in sorted order.\n");	
	
	//b�迭�� ä������
	for (j = 0; j < b_ele; j++)
	{
		scanf("%d", &b[j]);
	}
	
	if (b == NULL)
		exit(1);
	
	//i,j���� �ʱ�ȭ
	i = 0;
	j = 0;

	//�� �� �迭�� ���������� m�迭�� ä���ֱ�
	while (i < a_ele || j < b_ele)
	{
		if (a[i] < b[j])
		{
			m[k] = a[i];
			i++;
			k++;
		}
		else
		{
			m[k] = b[j];
			j++;
			k++;
		}
	}

	//���� �迭�� ���� �� m�迭�� ����
	if (a_ele < b_ele)
	{
		for (; j < b_ele;j++)
		{
			m[k] = b[j];
			k++;
		}
	}
	else
	{
		for (; i < a_ele; i++)
		{
			m[k] = a[i];
			k++;
		}
	}

	if (m == NULL)
		exit(1);

	//m�迭 ���
	printf("Result of merging is,");
	for (l = 0; l < k; l++)
	{
		printf("%d", m[l]);
	}

	//�迭���� ����
	free(m);
	free(b);
	free(a);

	return 0;
}
	
	