/*
	Programa: MenuCategoria.c
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
#include "Categorias.c"

void MenuCategorias () {
	
	//variables locales
	int eOpcion;
	
		//Men�
	do {
		
		system("cls");
		
		MargenPantalla();
		MargenMenu ();
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
		CentrarTexto("MEN� DE CATEGORIA", 2);
		
		gotoxy(2, 8);
		printf("1. Registrar una Categor�a");
		
		gotoxy(2, 10);
		printf("2. Borrar una Categoria");
		
		gotoxy(2, 12);
		printf("3. Modificar una Categoria");
		
		gotoxy(2, 14);
		printf("4. Listado de Todas las Categorias");
		
		gotoxy(2, 16);
		printf("5. Salir");
		
		gotoxy(2, 20);
		printf ("Ingrese una opci�n: ");
		scanf("%d", &eOpcion);
		
		switch(eOpcion) {
			
			case 1: RegistrarCategoria();
				break;
			case 2: BorrarCategoria();
				break;
			case 3: ModificarCategoria();
				break;
			case 4: ListarTodasLasCategorias();
				break;
			case 5: CentrarTexto("Adi�s. :)", 23);
				break;
			default: CentrarTexto ("Error, escoja una opci�n v�lida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 5);
	
}
