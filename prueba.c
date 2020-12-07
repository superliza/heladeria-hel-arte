#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, " ");
	
	int entero;
	
	for (entero = 0; entero <= 256; entero ++) {
		
//		printf (" %d %c\n", entero, entero);
		printf ("ú");
	}
    
}
