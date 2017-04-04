#include <stdio.h>

int main(void){

	int n;
	scanf("%d", &n);
	int segundo = n%60;
	int minuto = n/60;
	int hora = minuto/60;
	printf ("%d:%d:%d\n",hora, minuto, segundo);

return 0;

}
	

