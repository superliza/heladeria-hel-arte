/*
	Programa: MenuVentas.c
	Autores:
		1.
		2.
		3.
		4.
		5.
	Fecha: 17/11/2020
	Objetivo: Mostrar el men� de ventas de la helader�a HEL-ARTE.
*/

// Archivos de funciones
#include "Ventas.c"

void MenuVentas () {
	
	//variables locales
	int eOpcion;
	
		//Men�
	do {
		
		system("cls");
		
		MargenPantalla();
		MargenMenu ();
		
		gotoxy(2, 23);
		printf("Mensajes del sistema: ");
		
		CentrarTexto("MEN� DE VENTAS", 2);
		gotoxy(2, 6);
		printf("1. Registrar una venta");
		gotoxy(2, 8);
		printf("2. Cancelar una venta");
		gotoxy(2, 10);
		printf("3. Consultar venta por identificador �nico");
		gotoxy(2, 12);
		printf("4. Listar todas las ventas de un producto");
		gotoxy(2, 14);
		printf("5. Listar las ventas en un periodo de tiempo");
		gotoxy(2, 16);
		printf("6. Listado de todas las ventas");
		gotoxy(2, 18);
		printf("7. Salir");
		
		gotoxy(2, 20);
		printf ("Ingrese una opci�n: ");
		scanf("%d", &eOpcion);
		
		switch(eOpcion) {
			
			case 1: RegistrarVenta();
				break;
			case 2: CancelarVenta();
				break;
			case 3: ConsultarVenta();
				break;
			case 4: ListarVentasDeUnProducto();
				break;
			case 5: ListarVentasEnUnPeriodo();
				break;
			case 6: ListarVentas();
				break;
			case 7: CentrarTexto("Adi�s. :)", 23);
				break;
			default: CentrarTexto("Error, escoja una opci�n v�lida.", 23);
				break;
		}
		
	getchar();
	
	} while (eOpcion != 7);
	
}
