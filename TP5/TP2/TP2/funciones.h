typedef struct
{
    char nombre[40];
    int edad, dni, estado;

}eProto;

/** \brief esta funcion inicializa todos los estados de usuario en 0
 * \param persona[20] es el array que anida, entre otras cosas, el estado del usuario. Sea 1 para indicar su alta, o 0 para indicar su baja
 */

void inicializar0 (eProto[]);

/** \brief esta funcion valida que el tamaño del string ingresado por el usuario no supere al tamaño del auxiliar, para prevenir errores
 * \param auxNOM[40] es el auxiliar donde es copiado el string que el usuario ingresa
 */

void validarTam (char[]);

/** \brief esta funcion valida que el string ingresado por el usuario no contenga numeros
 * \param auxNOM[40] es el auxiliar donde es copiado el string que el usuario ingresa
 */

void nombreSinNum (char[]);

/** \brief esta funcion pasa a mayuscula todas las iniciales del string, por ejemplo, es especialmente util si el usuario ingresa un nombre compuesto
 * \param auxNOM[40] es el auxiliar donde es copiado el string que el usuario ingresa
 */

void pasarMayus (char[]);

/** \brief esta funcion verifica si la base de datos tiene usuarios ingresados o no
 * \param aux[40] es el auxiliar que recibe a persona[20], para luego recorrer los campos de Estado y verificar si estan de alta o de baja
 */

int verificaBD (eProto[]);
