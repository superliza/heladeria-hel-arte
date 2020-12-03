/*
	Programa: MenuCompras.c
	Autores:
		1.
		2.
		3.
		4.
		5.
	Fecha: 17/11/2020
	Objetivo: Mostrar el men� de compras de la helader�a HEL-ARTE.
*/

// Archivos de funciones
#include "Compras.c"

void MenuCompras () {
	
	//variables locales
	int eOpcion;
	
		//Men�
	do {
		
		system("cls");
		
		MargenPantalla();
		MargenMenu ();
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
		CentrarTexto("MEN� DE COMPRAS", 2);
		gotoxy(2, 6);
		printf("1. Registrar una compra");
		gotoxy(2, 8);
		printf("2. Cancelar una compra");
		gotoxy(2, 10);
		printf("3. Consultar una compra por identificador �nico");
		gotoxy(2, 12);
		printf("4. Listar todas las compras de un art�culo");
		gotoxy(2, 14);
		printf("5. Listar las compras en un periodo de tiempo");
		gotoxy(2, 16);
		printf("6. Listado de todas las compras");
		gotoxy(2, 18);
		printf("7. Salir");
		
		gotoxy(2, 20);
		printf ("Ingrese una opci�n: ");
		scanf("%d", &eOpcion);
		
		switch(eOpcion) {
			
			case 1: RegistrarCompra();
				break;
			case 2: CancelarCompra();
				break;
			case 3: ConsultarCompra();
				break;
			case 4: ListarComprasDeUnArticulo();
				break;
			case 5: ListarComprasEnUnPeriodo();
				break;
			case 6: ListarCompras();
				break;
			case 7: CentrarTexto("Adi�s. :)", 23);
				break;
			default: CentrarTexto("Error, escoja una opci�n v�lida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 7);
	
}
