#include <stdio.h>
#include <conio.h>

int main() {
	int a = 10;
	{
		//k�me parantezleri ile bir alt blok olu�tu
		int a = 5;
		printf("\n%d", a);
	}
	printf("\n%d", a);
	_getch(); return 0;
}