#include <stdio.h>
#include <stdlib.h>
#include <string.h>



                    
char inicioParaTodosLosCasos(){            
	   
                    char nombre_archivo[20]; 
			        printf("Ingrese el nombre del archivo\n");
			        scanf("%s", nombre_archivo);
			        strcat(nombre_archivo, ".txt"); 
    
     return nombre_archivo[20];
}
