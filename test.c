#include <ansics.h>
#include <stdio.h>

int main(void)
{
	printf(ACS_BC(RED) ACS_FC(LYELLOW));
	printf("This is a light yellow text on a red background.");
	printf(ACS_R "\n");
	printf(ACS_FC(BLUE) ACS_F(UNDERLINED));
	printf("This blue text is underlined.");
	printf(ACS_R "\n");
	printf(ACS_F(BLINK));
	printf("Hello world");
	printf(ACS_R " is blinking.\n");
	printf(ACS_F(BOLDBRIGHT) ACS_FC(GREEN));
	printf("BOLD GREEN");
	printf(ACS_R "\n");
	return 0;
}
