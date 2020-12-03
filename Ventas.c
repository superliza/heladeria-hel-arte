/*
	Programa: Ventas.c
	Autores:
		1.
		2.
		3.
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
	CentrarTexto("Nombre del producto: ", 6);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad vendida: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 14);
	CentrarTextoEnCuadroChicoDerecho ("ID de la venta: ", 11);
	CentrarTextoEnCuadroChicoDerecho ("Total de venta: ", 17);
	
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
	CentrarTexto("ID de la venta: ", 6);
	
	CentrarTextoEnCuadroChicoIzquierdo ("-Datos de la venta-: ", 9);
	CentrarTextoEnCuadroChicoIzquierdo ("Producto vendido: ", 11);
	CentrarTextoEnCuadroChicoIzquierdo ("Precio: ", 13);
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad vendida: ", 15);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 17);
	
	CentrarTextoEnCuadroChicoDerecho ("¿Desea cancelar este producto? [S/N]", 11);
	CentrarTextoEnCuadroChicoDerecho ("Motivo de cancelacion: ", 17);

	
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
	
	printf ("Listar venta producto");
	getchar();
}

void ListarVentasEnUnPeriodo () {
	
	printf ("Listar ventas periodo");
	getchar();
}

void ListarVentas () {
	
	printf ("Listar todas las ventas");
	getchar();
}
