/*
	Programa: MenuAlmacen.c
	Autores:
		1.
		2.
		3.
		4.
		5.
	Fecha: 17/11/2020
	Objetivo: Mostrar el men� de almac�n de la helader�a HEL-ARTE.
*/

// Archivos de funciones
#include "Almacen.c"

void MenuAlmacen () {
	
	//variables locales
	int eOpcion;
	
		//Men�
	do {
		
		system("cls");
		
		MargenPantalla();
		MargenMenu ();
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
		CentrarTexto("MEN� DE ALMAC�N", 2);
		gotoxy(2, 6);
		printf("1. Registrar una categor�a de un art�culo", 4);
		gotoxy(2, 8);
		printf("2. Registrar un art�culo", 5);
		gotoxy(2, 10);
		printf("3. Modificar un art�culo", 6);
		gotoxy(2, 12);
		printf("4. Borrar un art�culo", 7);
		gotoxy(2, 14);
		printf("5. Consultar un art�culo por identificador �nico", 8);
		gotoxy(2, 16);
		printf("6. Listado de todos los art�culos", 9);
		gotoxy(2, 18);
		printf("7. Salir", 10);
		
		gotoxy(2, 20);
		printf ("Ingrese una opci�n: ", 12);
		scanf("%d", &eOpcion);
		
		switch(eOpcion) {
			
			case 1: RegistrarCategoria();
				break;
			case 2: RegistrarArticulo();
				break;
			case 3: ModificarArticulo();
				break;
			case 4: BorrarArticulo();
				break;
			case 5: ConsultarArticulo();
				break;
			case 6: ListarArticulos();
				break;
			case 7: CentrarTexto("Adi�s. :)", 23);
				break;
			default: CentrarTexto ("Error, escoja una opci�n v�lida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 7);
	
}
