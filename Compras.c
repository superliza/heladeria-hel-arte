/*
	Programa: Compras.c
	Autores:
		1.
		2.
		3..
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la helader�a HEL-ARTE.
*/

// Procedimientos y funciones
void RegistrarCompra ();
void CancelarCompra ();
void ConsultarCompra ();
void ListarComprasDeUnArticulo ();
void ListarComprasEnUnPeriodo ();
void ListarCompras ();

void RegistrarCompra () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaHorizontalDerecha ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("REGISTRO DE COMPRA", 2);
	CentrarTexto("ID del art�culo comprado: ", 6);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad comprada del art�culo: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Costo unitario del art�culo", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Compra antes de impuestos: ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("Impuesto de la compra (opcional): ", 18);
	CentrarTextoEnCuadroChicoIzquierdo ("Proveedor: ", 20);
	CentrarTextoEnCuadroChicoDerecho ("ID de la compra: ", 11);
	CentrarTextoEnCuadroChicoDerecho ("Total de compra: ", 17);
	
	getchar ();
}

void CancelarCompra () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaHorizontalDerecha ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("CANCELAR COMPRA", 2);
	CentrarTexto("ID de la compra: ", 6);
	
	CentrarTextoEnCuadroChicoIzquierdo ("- Datos de la compra - ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("ID", 12);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Art�culo comprado: ", 13);
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad comprada del art�culo: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Costo unitario: ", 15);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("Compra antes de impuestos: ", 17);
	CentrarTextoEnCuadroChicoIzquierdo ("Impuesto aplicado a la compra (opcional): ", 18);
	CentrarTextoEnCuadroChicoIzquierdo ("Proveedor: ", 19);
	CentrarTextoEnCuadroChicoIzquierdo ("Total de compra: ", 20);
	
	CentrarTextoEnCuadroChicoDerecho ("�Desea cancelar esta compra [S/N]?: ", 11);
	CentrarTextoEnCuadroChicoDerecho ("Motivo de la cancelaci�n: ", 17);
	
	getchar();
}

void ConsultarCompra () {
	
	system("cls");
	MargenPantalla ();
	CentrarTexto("CONSULTAR COMPRA", 2);
	LineaHorizontal (4);
	CentrarTexto("ID de la compra: ", 5);
	LineaHorizontal (6);
	LineaHorizontal (22);
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("- Datos de la compra -", 8);
	CentrarTexto("ID: ", 10);
	CentrarTexto("Art�culo comprado: ", 11);
	CentrarTexto("Cantidad comprada del art�culo: ", 12);
	CentrarTexto("Costo unitario: ", 13);
	CentrarTexto("Fecha:   /  /    ", 14);
	CentrarTexto("Compra antes de impuestos: ", 15);
	CentrarTexto("Impuesto aplicado a la compra (opcional): ", 16);
	CentrarTexto("Proveedor: ", 17);
	CentrarTexto("Total de la compra: ", 18);
	
	getchar();
}

void ListarComprasDeUnArticulo () {
	
	system("cls");
	MargenPantalla ();
	CentrarTexto("LISTADO DE TODAS LAS COMPRAS DE UN ART�CULO", 2);
	LineaHorizontal (4);
	CentrarTexto("ID del art�culo: ", 5);
	LineaHorizontal (6);
	LineaHorizontal (8);
	LineaHorizontal (22);
	LineaVertical (5);
	LineaVertical (18);
	getchar();
}

void ListarComprasEnUnPeriodo () {
	
	printf ("Listar compras en un periodo");
	getchar();
}

void ListarCompras () {
	
	printf ("Listar todas las compras");
	getchar();
}
