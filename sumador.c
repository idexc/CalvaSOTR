/*Este programa recibe información de otro a través de una tuberia
 * y utilizada la infomación recibida para realizar una operación
 * de suma (suma +20 al valor recibido de la tubería)
 */

#include<stdio.h>

void main(){
	int s=20;
	int l=0;
	int r=0;
	scanf("%i",&l);
	r=s+l;
	printf("\nEl resultado es %i \n",r);

}
