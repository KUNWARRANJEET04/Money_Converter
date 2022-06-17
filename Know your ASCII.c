#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int i;
	printf("ASCII value of A to Z is=\n");
	ch='A';
	for(i=0;i<26;i++)
	{
		printf("%c=%d\n",ch,ch);
		ch++;
	}
	printf("\n\nASCII value of a to z is=\n");
	ch='a';
	for(i=0;i<26;i++)
	{
		printf("%c=%d\n",ch,ch);
		ch++;
	}
	printf("Enter a Character that u want to know:");
	scanf("%c", &ch);
    printf("ASCII value of %c = %d", ch, ch);	getch();
}
