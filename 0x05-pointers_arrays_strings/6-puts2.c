#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);

	str = "Lrmismdlrstae,cnettraiicn lt e oeumdtmo niiutu aoee ooemgaaiu.U nma ii eim usnsrdeectto lac aoi iiu lqi xe omd osqa.Di ueiuedlri erhnei nvlpaevltes ilmdlr ufga ul aitr xetu itocea uiaa o riet uti up u fii eeutmli nmi s aou.";
	puts2(str);

	return (0);
}

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
