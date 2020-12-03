#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, "spanish");
	
	int entero;
	
	for (entero = 0; entero <= 500; entero ++) {
		
		printf (" %d %c\n", entero, entero);
//		printf ("%c", 153);
	}
    
}
