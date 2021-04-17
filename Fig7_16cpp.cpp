//Mynor Ivan Aldana Marin
//0909-20-5400
// Fig. 7.16 LibroCalificaciones.h
// Definición de la clase LibroCalificaciones que utiliza un arreglo para almacenar
// Calificaciones de una prueba. Las funciones miembro se definen en LibroCalificaciones.cpp

# include  < string >  // el programa usa la clase string de la Biblioteca estándar de C ++
usando std :: string;

// definición de la clase LibroCalificaciones
clase  LibroCalificaciones
{
público:
	// constante - numero de estudiantes que tomaron la prueba
	const  static  int estudiantes = 10 ; // observar los datos públicos
	
	// el constructor inicializa el nombre del curso y el arreglo de calificaciones
	LibroCalificaciones (cadena, const  int []);
	
	void  establecerNombreCurso (cadena); // función para establecer el nombre del curso
	string obtenerNombreCurso (); // función para obtener el nombre del curso
	void  mostrarMensaje (); // muestra un mensaje de bienvenida
	void  procesarCalificaciones (); // realiza varias operaciones con los datos de calificaciones
	int  obtenerMinimo (); // buscar la calificación minima para la prueba
	int  obtenerMaximo (); // buscar la calificación máxima para la prueba
	doble  obtenerPromedio (); // determina la calificación promedio de la prueba
	void  imprimirGraficosBarras (); // imprime gráfico de barras de la distribución de calificicaciones
	void  imprimirCalificaciones (); // imprime el contenido del arreglo calificaciones
privado:
	string nombreCurso; // nombre del curso para este libro de calificaciones
	int calificaciones [estudiantes]; // arreglo de calificaiones
} // fin de la clase LibroCalificaciones
