/*
	Programa: Productos.c
	Autores:
		1. Guerrero Torres Elizabeth
		2. López Monares Gail Keegan
		3. Rivera Alvarez Jonathan Charly
	Fecha: 17/11/2020
	Objetivo: Realizar todas las operaciones correspondientes de la heladería HEL-ARTE.
*/

// Procedimientos y funciones
void RegistrarProducto ();
void ModificarProducto ();
void BorrarProducto ();
void ConsultarProducto ();
void ListarProductosCategoria ();
void ListarProductos ();

void RegistrarProducto () {
	
	system("cls");
	MargenPantalla ();
	MargenConDosCuadros ();
	
	gotoxy(2, 23);
	printf("Mensajes del sistema: ");
	
	CentrarTexto("REGISTRO DE PRODUCTO", 2);
	CentrarTexto("Nombre del producto: ", 5);
	
//	gotoxy (22, 10);
	CentrarTextoEnCuadroChicoIzquierdo ("ID de la categoría: ", 10);
	CentrarTextoEnCuadroChicoIzquierdo ("Artículos para elaborar el producto: ", 12);
	CentrarTextoEnCuadroChicoIzquierdo ("Precio: ", 14);
	CentrarTextoEnCuadroChicoIzquierdo ("Fecha (dd/mm/aaaa):   /  /    ", 16);
	CentrarTextoEnCuadroChicoDerecho ("ID del producto registrado: ", 14);
	
	getchar();
}

void ModificarProducto () {
	
	system("cls");
	printf ("Modificar producto");
	getchar();
}

void BorrarProducto () {
	
	system("cls");
	printf ("Borrar producto");
	getchar();
}

void ConsultarProducto () {
	
	system("cls");
	printf ("Consultar producto");
	getchar();
}

void ListarProductosCategoria () {
	
	system("cls");
	printf ("Listar productos por categoría");
	getchar();
}

void ListarProductos () {
	
	system("cls");
	printf ("Listar todos los productos");
	getchar();
}
