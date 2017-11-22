/* Este programa realiza una operación de multiplicación entre dos
 * enteros y envía el resultado a través de una tubería a un segundo
 * programa, el cual a su vez hará uso de este dato 
 * */

#include <stdio.h>

void main(){
	int a=8;
	int b=2;
	int c;
	c=a*b;
	printf("%i",c);
	return;
}//end main()

