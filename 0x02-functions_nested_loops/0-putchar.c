#include "stdio.h"
/**
 *
 *  * Print "_putchar" followed by a new line.
 *
 *   * Description: You are not allowed to include standard libraries.
 *
 *    * Return: 0
 *
 *     */

int main(void){
	char myVar[] = "putchar";
	int i = 0;
	while (myVar[i] != '\0'){
		putchar(myVar[i]);
		i++;
		putchar('\n');
	return (0);
}
