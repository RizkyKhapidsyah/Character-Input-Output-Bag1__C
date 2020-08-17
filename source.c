#include <stdio.h>
#include <conio.h>

int main()
{
	int c;

	printf("Type a letter: ");
	c = getchar();
	printf("You typed '%c'.\n",c);

	_getch();
	return(0);
}

