/*
	Programa: Almacen.c
	Autores:
		1.
		2.
		3.
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la heladería HEL-ARTE.
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
	printf ("Registrar categoría.");
	getchar();
	
}

void RegistrarArticulo () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaVertical ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("REGISTRO DE ARTÍCULOS", 2);
	CentrarTextoEnCuadroChicoIzquierdo("Nombre del artículo: ", 6);
	CentrarTextoEnCuadroChicoDerecho ("ID de la categoría: ", 6);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias mínimas: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias máximas: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 16);
	
	CentrarTextoEnCuadroChicoDerecho ("ID del artículo: ", 14);
	getchar();
	
}

void ModificarArticulo () {
	
	system("cls");
	MargenPantalla();
	printf ("Modificar artículo");
//	getchar();
}

void BorrarArticulo () {
	
	system("cls");
	MargenPantalla();
	printf ("Borrar artículo");
//	getchar();
}

void ConsultarArticulo () {
	
	system("cls");
	MargenPantalla();
	printf ("Consultar artículo");
//	getchar();
}

void ListarArticulos () {
	
	system("cls");
	MargenPantalla();
	printf ("Listar todos los artículos");
//	getchar();
}
