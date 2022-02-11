#ifndef FRUTA_H
#define FRUTA_H

#include <stdlib.h>

struct FRUTA { 
     char *nombre;  /* Nombre de la Fruta      */
     char *sabor;   /* Sabor de la Fruta       */
     void *private; /* Privados en Fruta.c     */
};

typedef struct FRUTA FRUTA;

/* Public:                                     */
int  destruirFruta(FRUTA **);
int  obtenColor(FRUTA *);
char *obtenNombre(FRUTA *);
/* Constructor:                                 */
FRUTA *nuevaFruta(char *nombre,char *sabor,int color);


#endif
