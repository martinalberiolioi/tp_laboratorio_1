typedef struct
{
    char titulo[50];
    char genero[50];
    char duracion[6];
    char descripcion[500];
    float puntaje;
    char linkImagen[200];
    int state;

}eMovie;

/* \brief esta funcion se encarga de mostrar el menu por pantalla y capturar la opcion seleccionada
*   \return devuelve la opcion elegida por el usuario
*
*/
int menu (void);

/* \brief esta funcion se encarga de realizar el alta de una pelicula nueva
*   \param en eMovie*  se ingresa el auxiliar de pelicula, en el cual se ingresan los datos
*
*/
void altaPelicula(eMovie*);

/* \brief esta funcion se encarga de realizar la baja de una pelicula
*   \param en eMovie*  se ingresa el auxiliar de pelicula, en el cual se ingresan los datos a dar de baja
*
*/
void bajaPelicula(eMovie*);

/* \brief esta funcion se encarga de modificar una pelicula
*   \param en eMovie*  se ingresa el auxiliar de pelicula, en el cual se ingresan los datos de la pelicula a modificar
*
*/
void modifPelicula(eMovie*);

/* \brief esta funcion se encarga de generar la pagina .html para ver las peliculas cargadas
*   \param en eMovie* se ingresa el auxiliar de pelicula, en el cual se ingresan los datos de la pelicula a mostrar
*
*/
void generaWeb(eMovie*);
