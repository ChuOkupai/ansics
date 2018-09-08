#include <ansics.h>
#include <stdio.h>

#define _BC(V)	ACS_BC(V)
#define _FC(V)	ACS_FC(V)
#define _F(V)	ACS_F(V)
#define _R 		ACS_R"\n"

int main(void)
{
	printf(_BC(BLACK) "black" _R);
	printf(_BC(RED) "red" _R);
	printf(_BC(GREEN) "green" _R);
	printf(_BC(YELLOW) "yellow" _R);
	printf(_BC(BLUE) "blue" _R);
	printf(_BC(MAGENTA) "magenta" _R);
	printf(_BC(CYAN) "cyan" _R);
	printf(_BC(LGRAY) "light gray" _R);
	printf(_BC(DGRAY) "dark gray" _R);
	printf(_BC(LRED) "light red" _R);
	printf(_BC(LGREEN) "light green" _R);
	printf(_BC(LYELLOW) "light yellow" _R);
	printf(_BC(LBLUE) "blue" _R);
	printf(_BC(LMAGENTA) "light magenta" _R);
	printf(_BC(LCYAN) "light cyan" _R);
	printf(_BC(WHITE) "white" _R);
	printf(_FC(BLACK) "black" _R);
	printf(_FC(RED) "red" _R);
	printf(_FC(GREEN) "green" _R);
	printf(_FC(YELLOW) "yellow" _R);
	printf(_FC(BLUE) "blue" _R);
	printf(_FC(MAGENTA) "magenta" _R);
	printf(_FC(CYAN) "cyan" _R);
	printf(_FC(LGRAY) "light gray" _R);
	printf(_FC(DGRAY) "dark gray" _R);
	printf(_FC(LRED) "light red" _R);
	printf(_FC(LGREEN) "light green" _R);
	printf(_FC(LYELLOW) "light yellow" _R);
	printf(_FC(LBLUE) "blue" _R);
	printf(_FC(LMAGENTA) "light magenta" _R);
	printf(_FC(LCYAN) "light cyan" _R);
	printf(_FC(WHITE) "white" _R);
	printf(_F(BLINK) "blink" _R);
	printf(_F(BOLDBRIGHT) "bold/bright" _R);
	printf(_F(HIDDEN) "hidden" _R); // hidden btw monkaS
	printf(_F(REVERSE) "reverse" _R);
	printf(_F(STRIKETHROUGH) "strikethrough" _R);
	printf(_F(UNDERLINED) "underlined" _R);
	return 0;
}
