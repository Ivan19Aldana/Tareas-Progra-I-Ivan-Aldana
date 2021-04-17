//Mynor Ivan Aldana Marin
//0909-20-5400
// Fig. 7.16 LibroCalificaciones.h
// Definici�n de la clase LibroCalificaciones que utiliza un arreglo para almacenar
// Calificaciones de una prueba. Las funciones miembro se definen en LibroCalificaciones.cpp

# include  < string >  // el programa usa la clase string de la Biblioteca est�ndar de C ++
usando std :: string;

// definici�n de la clase LibroCalificaciones
clase  LibroCalificaciones
{
p�blico:
	// constante - numero de estudiantes que tomaron la prueba
	const  static  int estudiantes = 10 ; // observar los datos p�blicos
	
	// el constructor inicializa el nombre del curso y el arreglo de calificaciones
	LibroCalificaciones (cadena, const  int []);
	
	void  establecerNombreCurso (cadena); // funci�n para establecer el nombre del curso
	string obtenerNombreCurso (); // funci�n para obtener el nombre del curso
	void  mostrarMensaje (); // muestra un mensaje de bienvenida
	void  procesarCalificaciones (); // realiza varias operaciones con los datos de calificaciones
	int  obtenerMinimo (); // buscar la calificaci�n minima para la prueba
	int  obtenerMaximo (); // buscar la calificaci�n m�xima para la prueba
	doble  obtenerPromedio (); // determina la calificaci�n promedio de la prueba
	void  imprimirGraficosBarras (); // imprime gr�fico de barras de la distribuci�n de calificicaciones
	void  imprimirCalificaciones (); // imprime el contenido del arreglo calificaciones
privado:
	string nombreCurso; // nombre del curso para este libro de calificaciones
	int calificaciones [estudiantes]; // arreglo de calificaiones
} // fin de la clase LibroCalificaciones
