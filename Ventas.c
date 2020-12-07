/*
	Programa: Ventas.c
	Autores:
		1. Guerrero Torres Elizabeth
		2. López Monares Gail Keegan
		3. Rivera Alvarez Jonathan Charly
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la heladería HEL-ARTE.
*/

// Procedimientos y funciones
void RegistrarVenta ();
void CancelarVenta ();
void ConsultarVenta ();
void ListarVentasDeUnProducto ();
void ListarVentasEnUnPeriodo ();
void ListarVentas ();

void RegistrarVenta () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaHorizontalDerecha ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("REGISTRO DE VENTA", 2);
	CentrarTexto("Nombre del producto: ", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad vendida: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 14);
	CentrarTextoEnCuadroChicoDerecho ("ID de la venta: ", 10);
	CentrarTextoEnCuadroChicoDerecho ("Total de venta: ", 18);
	
	getchar();
}

void CancelarVenta () {
	
    system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaHorizontalDerecha ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("CANCELAR VENTA", 2);
	CentrarTexto("ID de la venta: ", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("-Datos de la venta-: ", 9);
	CentrarTextoEnCuadroChicoIzquierdo ("Producto vendido: ", 11);
	CentrarTextoEnCuadroChicoIzquierdo ("Precio: ", 13);
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad vendida: ", 15);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 17);
	
	CentrarTextoEnCuadroChicoDerecho ("¿Desea cancelar este producto? [S/N]: ", 10);
	CentrarTextoEnCuadroChicoDerecho ("Motivo de cancelacion: ", 18);
	
	getchar();
	
}

void ConsultarVenta () {
	
	system("cls");
	MargenPantalla ();
	
	CentrarTexto("CONSULTAR VENTA", 2);
	LineaHorizontal (4);
	CentrarTexto("ID de la venta: ", 5);
	LineaHorizontal (6);
		
	CentrarTexto ("-Datos de la venta-: ", 8);
	
	CentrarTexto ("ID: ", 10);
	
	CentrarTexto ("Producto vendido: ", 12);
	
	CentrarTexto ("Precio: ", 14);
	
	CentrarTexto ("Costo: ", 16);
	
	CentrarTexto ("Cantidad vendida: ", 18);
	
	CentrarTexto ("Fecha (dd/mm/aaaa):   /  /    ", 20);	

	LineaHorizontal (22);
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	
	getchar();
	
}

void ListarVentasDeUnProducto () {
	
	system("cls");
	MargenPantalla ();
	
	CentrarTexto("LISTADO DE TODAS LAS VENTAS DE UN PRODUCTO", 2);
	LineaHorizontal (4);
	CentrarTexto("ID del producto: ", 5);
	LineaHorizontal (6);
	
	LineaHorizontal (8);
	
	gotoxy (1,7);
	printf (" ID !      Producto      ! Precio !     Costo      !Cantidad vendida!     Fecha");
	
	LineaHorizontal (22);
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	LineaVertical (5,1);
	LineaVertical (26,1);
	LineaVertical (35,1);
	LineaVertical (52,1);
	LineaVertical (69,1);
	
	
	getchar();
}

void ListarVentasEnUnPeriodo () {
	
	system("cls");
	MargenPantalla ();
	
	CentrarTexto("LISTADO DE TODAS LAS VENTAS EN UN PERIODO DE TIEMPO", 2);
	LineaHorizontal (4);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha inicial (dd/mm/aaaa): ",5);
	CentrarTextoEnCuadroChicoDerecho ("Fecha inicial (dd/mm/aaaa): ",5);
	
	LineaHorizontal (6);
	
	gotoxy(43, 4);
	printf("%c", 194);
	gotoxy(43, 5);
	printf("%c", 179);
	gotoxy(43, 6);
	printf("%c", 193);
	
	LineaHorizontal (8);
	
	gotoxy (1,7);
	printf (" ID !      Producto      ! Precio !     Costo      !Cantidad vendida!     Fecha");	

	LineaHorizontal (22);
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	LineaVertical (5,1);
	LineaVertical (26,1);
	LineaVertical (35,1);
	LineaVertical (52,1);
	LineaVertical (69,1);
	
	getchar();
}

void ListarVentas () {
	
	system("cls");
	MargenPantalla ();
	
	CentrarTexto("LISTADO DE TODAS LAS VENTAS", 2);
	LineaHorizontal (4);
	gotoxy (1,5);
	printf (" ID !      Producto      ! Precio !     Costo      !Cantidad vendida!     Fecha");
	LineaHorizontal (6);

	LineaHorizontal (22);
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	LineaVertical (5,2);
	LineaVertical (26,2);
	LineaVertical (35,2);
	LineaVertical (52,2);
	LineaVertical (69,2);
	
	getchar();
}
