#include <stdio.h>

void	jugar(int *x) // pasamos en lugar del número el puntero a un número. 
{
	int y = *x; //rescato el número que hay en esa dirección de memoria. 
				// *x es justo lo contratio que &x, asterisco a la izq del puntero c recupera 
				// el valor que hay en ese puntero. y será 10. 
				//*x es el número que hay en la dirección de memoria de ese puntero. 
	y = (y + 2) ; 
	*x = y; // guardamos el 12 en la dirección de memoria n. X ya no es 10.
	printf("%d\n", y);

}

/* void	jugar(int x)
{	
	x = 2 * x + 1;
	printf("%d\n", x); // imprime 21. 
	printf("%p\n", &x); 
} */

int	main(void)
{
	int x; 

	x  = 10;
				//&x es la dirección de memoria de x. 
	jugar(&x); // para pasar la dirección de x si no pongo el & me sale que 
				//no es compatible con int *x (pasar número a argumento puntero no se puede)
				// hay que pasar una dirección a un argumento puntero. 

	printf("%d\n", x); // imprime 10 no 21 xq pasamos una copia. 
	printf("%p\n", &x);	

	// printf("%d\n", x);
	//printf("%u\n", &x);// imprime la dirección como número. 	
	//printf("%p\n", &x);// imprime la dirección de memoria. 

	/*para guardar la dirección de memoría se usa el puntero*/	
	// se escribe así

	//int *dirx = &x;
	
	// usos de punteros. Principal para trabajar con referencias
	// en funciones. 

	return (0);
}
