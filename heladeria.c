/*
	Programa: heladeriaHelArte.c
	Autores:
		1.
		2.
		3.
	Fecha: 17/11/2020
	Objetivo: Mostrar el men� principal de la helader�a HEL-ARTE.
*/

//Bibliotecas
//#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include "FuncionesPantalla.h"

// Archivos de funciones
#include "MenuProductos.c"
#include "MenuVentas.c"
#include "MenuCompras.c"
#include "MenuAlmacen.c"

#include "logo.c"

//Funci�n principal
int main (void) {
	
	//variables locales
	int eOpcion;
	
//	Logo();
	//Men�
	do {
		
		system("cls");
		
		MargenPantalla ();
		MargenMenu ();
		
//		setlocale(LC_ALL, "spanish");
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
//		gotoxy ();
//		printf("%c", )
		CentrarTexto("HELADER�A HEL-ARTE", 2);
		gotoxy(2, 8);
		printf("1. Men� de productos");
		gotoxy(2, 10);
		printf("2. Men� de ventas");
		gotoxy(2, 12);
		printf("3. Men� de compras");
		gotoxy(2, 14);
		printf("4. Men� de almac�n");
		gotoxy(2, 16);
		printf("5. Salir");
			
		gotoxy(2, 20);
		printf("Ingrese una opci�n: ");	
		scanf("%d", &eOpcion);
		
		
		switch(eOpcion) {
			
			case 1: MenuProductos();
				break;
			case 2: MenuVentas();
				break;
			case 3: MenuCompras();
				break;
			case 4: MenuAlmacen();
				break;
			case 5: CentrarTexto("Adi�s.", 23);
				break;
			default: CentrarTexto("Error, escoja una opci�n v�lida.", 23);
				break;
		}

		getchar();
		
	} while (eOpcion != 5);
	
}
