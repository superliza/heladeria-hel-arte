/*
	Programa: MenuAlmacen.c
	Autores:
		1.
		2.
		3.
		4.
		5.
	Fecha: 17/11/2020
	Objetivo: Mostrar el menú de almacén de la heladería HEL-ARTE.
*/

// Archivos de funciones
#include "Almacen.c"

void MenuAlmacen () {
	
	//variables locales
	int eOpcion;
	
		//Menú
	do {
		
		system("cls");
		
		MargenPantalla();
		MargenMenu ();
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
		CentrarTexto("MENÚ DE ALMACÉN", 2);
		gotoxy(2, 6);
		printf("1. Registrar una categoría de un artículo", 4);
		gotoxy(2, 8);
		printf("2. Registrar un artículo", 5);
		gotoxy(2, 10);
		printf("3. Modificar un artículo", 6);
		gotoxy(2, 12);
		printf("4. Borrar un artículo", 7);
		gotoxy(2, 14);
		printf("5. Consultar un artículo por identificador único", 8);
		gotoxy(2, 16);
		printf("6. Listado de todos los artículos", 9);
		gotoxy(2, 18);
		printf("7. Salir", 10);
		
		gotoxy(2, 20);
		printf ("Ingrese una opción: ", 12);
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
			case 7: CentrarTexto("Adiós. :)", 23);
				break;
			default: CentrarTexto ("Error, escoja una opción válida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 7);
	
}
