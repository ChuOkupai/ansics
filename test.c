#include <ansics.h>
#include <stdio.h>

int main(void)
{
	printf(ACS_BCOLOR(RED) ACS_FCOLOR(LYELLOW));
	printf("This is a light yellow text on a red background.");
	printf(ACS_RESET "\n");
	printf(ACS_FCOLOR(BLUE) ACS_FORMAT(UNDERLINED));
	printf("This blue text is underlined.");
	printf(ACS_RESET "\n");
	printf(ACS_FORMAT(BLINK));
	printf("Hello world");
	printf(ACS_RESET " is blinking.\n");
	printf(ACS_FORMAT(BOLDBRIGHT) ACS_FCOLOR(GREEN));
	printf("BOLD GREEN");
	printf(ACS_RESET "\n");
	return 0;
}
