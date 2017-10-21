m#include <stdio.h>
#include <iostream>
#include <stdlib.h>
 
int main ( int argc, char **argv )

{
	   struct l33t{
    char a;
    char e[100];
    char i[100];
    char o[100];
    char u[100];
};	
 	FILE *recursia;
 	
 	char mensaje[100];	
 	recursia = fopen ( "recursia.dat", "wb" ); 
 	printf("\nIntroduce un mensaje:   " );
 	do{
    mensaje[100]=getchar();
	fgets(mensaje,100,stdin);
	fwrite(&mensaje,sizeof(mensaje),1,recursia);
	}while((mensaje [100] = getchar()) != '\n');
 {
 		printf("%s", fputs(mensaje, recursia));
 }
 	fclose ( recursia );
 	 
 	 FILE *recursia1;
 	 char c [100];
 	  recursia1= fopen ("leerdato.dat", "rb");
 	  if (recursia1 == NULL);
 	  	 
	   else {
	   	printf ("\n el contenido de recursia1 es \n\n");
	   	while (feof(recursia) == 0);{ 
		   fgets (c,100, recursia1);
		   fread (&c, sizeof(recursia1),100, recursia1 );
	   		printf ("%s", c);
		   }
	   	    system ("PAUSE");
	   }
    
    	
 	return 0;
}

