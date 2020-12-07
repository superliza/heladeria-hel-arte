/*
	Programa: Almacen.c
	Autores:
		1. Guerrero Torres Elizabeth
		2. L�pez Monares Gail Keegan
		3. Rivera Alvarez Jonathan Charly
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la helader�a HEL-ARTE.
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
	
	CentrarTexto("REGISTRO DE ART�CULOS", 2);
	CentrarTextoEnCuadroChicoIzquierdo("Nombre del art�culo: ", 5);
	CentrarTextoEnCuadroChicoDerecho ("ID de la categor�a: ", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias m�nimas: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias m�ximas: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 16);
	
	CentrarTextoEnCuadroChicoDerecho ("ID del art�culo: ", 13);
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
	
	CentrarTextoEnCuadroChicoDerecho ("� Desea modificar los dato de ", 13);
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
	CentrarTexto("�Qu� dato desea modificar", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("1. Nombre: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("2. Existencias minimas: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("3. Existencias maximas: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("4. Costo: ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("5. Categoria: ", 18);
	
	CentrarTextoEnCuadroChicoDerecho ("Escriba la informaci�n nueva: ", 10);
	CentrarTextoEnCuadroChicoDerecho ("Fecha (dd/mm/aaaa):   /  /    ", 18);
	
	getchar();
	
}

void BorrarArticulo () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("BORRAR ART�CULO", 2);
	CentrarTexto("ID del art�culo", 5);
	
	CentrarTextoEnCuadroChicoIzquierdo ("- Datos del art�culo -", 8);
	CentrarTextoEnCuadroChicoIzquierdo ("ID: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Art�culo: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Categoria: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Cantidad en existencias: ", 16);
	CentrarTextoEnCuadroChicoIzquierdo ("Existencias m�nimas: ", 18);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 20);
	
	CentrarTextoEnCuadroChicoDerecho ("�Desea borrar este art�culo?", 14);
	CentrarTextoEnCuadroChicoDerecho ("[S/N]", 15);
	getchar();
	
}

void ConsultarArticulo () {
	
	system("cls");
	MargenPantalla ();
	
	gotoxy(2, 24);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("CONSULTAR ART�CULO", 2);
	LineaHorizontal (3);
	CentrarTexto("ID del art�culo: ", 4);
	LineaHorizontal (5);
	
	CentrarTexto ("-Datos del art�culo-", 6);
	CentrarTexto ("ID: ", 8);
	CentrarTexto ("Art�culo: ", 10);
	CentrarTexto ("Categoria: ", 12);
	CentrarTexto ("Cantidad en existencias: ", 14);
	CentrarTexto ("Existencias minimas: ", 16);
	CentrarTexto ("Existencias m�ximas: ", 18);
	CentrarTexto ("Fecha (dd/mm/aaaa):   /  /    ", 20);
	LineaHorizontal (22);
	
	getchar();
	
}

void ListarArticulosPorCategoria () {
	
	system("cls");
	MargenPantalla();
	
	CentrarTexto ("LISTADO DE ART�CULOS POR CATEGORIA", 2);
	LineaHorizontal (4);
	CentrarTexto ("ID de la categor�a", 5);
	LineaHorizontal (6);
	LineaHorizontal (8);
	LineaHorizontal (22);
	
	gotoxy(2, 7);
	printf ("ID    Art�culo   Categoria    Existencias    E. m�nimas    E. m�ximas     Fecha");
	
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
	
	CentrarTexto ("LISTADO DE TODOS LOS ART�CULOS ", 2);
	LineaHorizontal (4);
	LineaHorizontal (22);
	
	gotoxy(2, 5);
	printf ("ID    Art�culo   Categoria    Existencias    E. m�nimas    E. m�ximas    Fecha");
	
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
