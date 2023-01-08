#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int *ptr = malloc(sizeof(int)); //malloc lo que hace es reservarte un espacio en memoría. 
				 // con *a tenemos un puntero a esa memoria y le damos valor 5	
	ptr = 5;
	
	printf("%d\n", *ptr);	
	return (0);
}

