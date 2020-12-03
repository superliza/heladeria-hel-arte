/*
	Programa: MenuProductos.c
	Autores:
		1.
		2.
		3.
	Fecha: 17/11/2020
	Objetivo: Mostrar el men� de productos de la helader�a HEL-ARTE.
*/

// Archivos de funciones
#include "Productos.c"

void MenuProductos () {
	
	//variables locales
	int eOpcion;
	
	//Men�
	do {
		
		system("cls");
		
		MargenPantalla();
		MargenMenu ();
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
		CentrarTexto("MEN� DE PRODUCTOS", 2);
		gotoxy(2, 6);
		printf("1. Registrar un producto", 4);
		gotoxy(2, 8);
		printf("2. Modificar datos de un producto", 5);
		gotoxy(2, 10);
		printf("3. Borrar un producto", 6);
		gotoxy(2, 12);
		printf("4. Consultar un producto por identificador �nico");
		gotoxy(2, 14);
		printf("5. Listar productos por categor�a");
		gotoxy(2, 16);
		printf("6. Listado de todos los productos");
		gotoxy(2, 18);
		printf("7. Salir");
		
		gotoxy(2, 20);
		printf ("Ingrese una opci�n: ");
		scanf("%d", &eOpcion);
		
		switch(eOpcion) {
			
			case 1: RegistrarProducto();
				break;
			case 2: ModificarProducto();
				break;
			case 3: BorrarProducto();
				break;
			case 4: ConsultarProducto();
				break;
			case 5: ListarProductosCategoria();
				break;
			case 6: ListarProductos();
				break;
			case 7: CentrarTexto ("Adi�s. :)", 23);
				break;
			default: CentrarTexto ("Error, escoja una opci�n v�lida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 7);
}
