#include<stdio.h>

int main()
{
	int f = 0;
	int i = 0;
	int head = 0;
	int tail = 0;
	int pre = 0;
	int bianli = 0; 
	printf("����Ԫ�ظ�����\n");
	scanf ("%d",&f);
	int num[f];
	int number = 0;
	while(f>i)
	{
		printf("����Ԫ��ֵ��\n");
	    scanf("%d",&number);
		num[i]=number;
		i++;
	}
	int k = 0;
	printf("������Ϊ��");
	while(k<f)
	{
		printf(" %d",num[k]);
		k++;
	}	
	tail = f-1;
	while(head < tail)
	{
		pre = num[head];
		num[head]=num[tail];
		num[tail]=pre;
		head++;
		tail--;
	}
	printf("�����鷴��Ϊ:");
	while (bianli<f)
	{
		printf(" %d",num[bianli]);
		bianli++;
	}
}