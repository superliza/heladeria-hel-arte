/*
	Programa: MenuAlmacen.c
	Autores:
		1. Guerrero Torres Elizabeth
		2. López Monares Gail Keegan
		3. Rivera Alvarez Jonathan Charly
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
		printf("1. Registrar un artículo");
		gotoxy(2, 8);
		printf("2. Modificar un artículo");
		gotoxy(2, 10);
		printf("3. Borrar un artículo");
		gotoxy(2, 12);
		printf("4. Consultar un artículo por identificador único");
		gotoxy(2, 14);
		printf("5. Listado de todos los artículos");
		gotoxy(2, 16);
		printf("6. Listado de todos los artículos");
		gotoxy(2, 18);
		printf("7. Salir");
		
		gotoxy(2, 20);
		printf ("Ingrese una opción: ");
		scanf("%d", &eOpcion);
		
		switch(eOpcion) {
			
			case 1: RegistrarArticulo();
				break;
			case 2: ModificarArticuloUno();
					ModificarArticuloDos ();
				break;
			case 3: BorrarArticulo();
				break;
			case 4: ConsultarArticulo();
				break;
			case 5: ListarArticulosPorCategoria ();
				break;
			case 6: ListarTodosLosArticulos ();
				break;
			case 7: CentrarTexto("Adiós. :)", 23);
				break;
			default: CentrarTexto ("Error, escoja una opción válida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 7);
	
}
