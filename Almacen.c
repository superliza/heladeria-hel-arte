/*
	Programa: Almacen.c
	Autores:
		1. Guerrero Torres Elizabeth
		2. López Monares Gail Keegan
		3. Rivera Alvarez Jonathan Charly
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la heladería HEL-ARTE.
*/

// Procedimientos y funciones
void RegistrarArticulo ();
void ModificarArticulo ();
void BorrarArticulo ();
void ConsultarArticulo ();
void ListarArticulosPorCategoria ();
void ListarTodosLosArticulos ();

void RegistrarArticulo () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaVertical ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("REGISTRO DE ARTÍCULOS", 2);
	CentrarTextoEnCuadroChicoIzquierdo("Nombre del artículo: ", 5);
	CentrarTextoEnCuadroChicoDerecho ("ID de la categoría: ", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias mínimas: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias máximas: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 16);
	
	CentrarTextoEnCuadroChicoDerecho ("ID del artículo: ", 13);
	getchar();
	
}

void ModificarArticuloUno () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("MODIFICAR DATOS DE UNA ARTICULO", 2);
	CentrarTexto("ID del articulo: ", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("- Datos del articulo -: ", 9);
	CentrarTextoEnCuadroChicoIzquierdo ("ID: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Articulo: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Categoria: ", 13);
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 15);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias minimas: ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias maximas: ", 18);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):", 19);
	CentrarTextoEnCuadroChicoIzquierdo ("   /  /    ", 20);
	
	CentrarTextoEnCuadroChicoDerecho ("¿ Desea modificar los dato de ", 13);
	CentrarTextoEnCuadroChicoDerecho ("este producto?[S/N] ", 14);
	
	fflush(stdin);
	getchar();
}

void ModificarArticuloDos () {

	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	MitadDeLineaHorizontalDerecha ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("MODIFICAR DATOS DE UN ARTICULO", 2);
	CentrarTexto("¿Qué dato desea modificar", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("1. Nombre: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("2. Existencias minimas: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("3. Existencias maximas: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("4. Costo: ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("5. Categoria: ", 18);
	
	CentrarTextoEnCuadroChicoDerecho ("Escriba la información nueva: ", 10);
	CentrarTextoEnCuadroChicoDerecho ("Fecha (dd/mm/aaaa):   /  /    ", 18);
	
	getchar();
	
}

void BorrarArticulo () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("BORRAR ARTÍCULO", 2);
	CentrarTexto("ID del artículo", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("- Datos del artículo -", 8);
	CentrarTextoEnCuadroChicoIzquierdo ("ID: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Artículo: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Categoria: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias mínimas: ", 18);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 20);
	
	CentrarTextoEnCuadroChicoDerecho ("¿Desea borrar este artículo?", 14);
	CentrarTextoEnCuadroChicoDerecho ("[S/N]", 15);
	getchar();
	
}

void ConsultarArticulo () {
	
	system("cls");
	MargenPantalla ();
	
	gotoxy(2, 24);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("CONSULTAR ARTÍCULO", 2);
	LineaHorizontal (3);
	CentrarTexto("ID del artículo: ", 4);
	LineaHorizontal (5);
	
	CentrarTexto ("-Datos del artículo-", 6);
	CentrarTexto ("ID: ", 8);
	CentrarTexto ("Artículo: ", 10);
	CentrarTexto ("Categoria: ", 12);
	CentrarTexto ("Cantidad en existencias: ", 14);
	CentrarTexto ("Existencias minimas: ", 16);
	CentrarTexto ("Existencias máximas: ", 18);
	CentrarTexto ("Fecha (dd/mm/aaaa):   /  /    ", 20);
	LineaHorizontal (22);
	
	getchar();
	
}

void ListarArticulosPorCategoria () {
	
	system("cls");
	MargenPantalla();
	
	CentrarTexto ("LISTADO DE ARTÍCULOS POR CATEGORIA", 2);
	LineaHorizontal (4);
	CentrarTexto ("ID de la categoría", 5);
	LineaHorizontal (6);
	LineaHorizontal (8);
	LineaHorizontal (22);
	
	gotoxy(2, 7);
	printf ("ID    Artículo   Categoria    Existencias    E. mínimas    E. máximas     Fecha");
	
	LineaVertical (6,1);
	LineaVertical (17,1);
	LineaVertical (29,1);
	LineaVertical (44,1);
	LineaVertical (59,1);
	LineaVertical (73,1);
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	getchar();
	
}

void ListarTodosLosArticulos () {
	
	system("cls");
	MargenPantalla();
	
	CentrarTexto ("LISTADO DE TODOS LOS ARTÍCULOS ", 2);
	LineaHorizontal (4);
	LineaHorizontal (22);
	
	gotoxy(2, 5);
	printf ("ID    Artículo   Categoria    Existencias    E. mínimas    E. máximas    Fecha");
	
	LineaHorizontal (6);
	LineaVertical (6, 2);
	LineaVertical (17, 2);
	LineaVertical (29, 2);
	LineaVertical (44, 2);
	LineaVertical (59, 2);
	LineaVertical (73, 2);
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	getchar();
	
}
