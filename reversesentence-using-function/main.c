#include <stdio.h>
void reverseSentence();
void main()
{
	printf("Enter a Sentence: ");
	reverseSentence();
}
void reverseSentence()
{
	char ch;
	scanf("%c",&ch);
	if(ch!='\n') {
		reverseSentence();
		printf("%c",ch);
	}
}
