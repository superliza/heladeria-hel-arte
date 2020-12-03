/*
	Programa: Almacen.c
	Autores:
		1.
		2.
		3.
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la helader�a HEL-ARTE.
*/

// Procedimientos y funciones
void RegistrarCategoria ();
void RegistrarArticulo ();
void ModificarArticulo ();
void BorrarArticulo ();
void ConsultarArticulo ();
void ListarArticulos ();

void RegistrarCategoria () {
	
	system("cls");
	printf ("Registrar categor�a.");
	getchar();
	
}

void RegistrarArticulo () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaVertical ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("REGISTRO DE ART�CULOS", 2);
	CentrarTextoEnCuadroChicoIzquierdo("Nombre del art�culo: ", 6);
	CentrarTextoEnCuadroChicoDerecho ("ID de la categor�a: ", 6);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias m�nimas: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias m�ximas: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 16);
	
	CentrarTextoEnCuadroChicoDerecho ("ID del art�culo: ", 14);
	getchar();
	
}

void ModificarArticulo () {
	
	system("cls");
	MargenPantalla();
	printf ("Modificar art�culo");
//	getchar();
}

void BorrarArticulo () {
	
	system("cls");
	MargenPantalla();
	printf ("Borrar art�culo");
//	getchar();
}

void ConsultarArticulo () {
	
	system("cls");
	MargenPantalla();
	printf ("Consultar art�culo");
//	getchar();
}

void ListarArticulos () {
	
	system("cls");
	MargenPantalla();
	printf ("Listar todos los art�culos");
//	getchar();
}
