#ifndef FRUTA_H
#define FRUTA_H

#include <stdlib.h>
#include "logfile.h"

struct FRUTA { 
     char *nombre;  /* Nombre de la Fruta      */
     char *sabor;   /* Sabor de la Fruta       */
     void *private; /* Privados en src/fruta.c */
};

typedef struct FRUTA FRUTA;

/* Public:                                     */
int  destruirFruta(FRUTA **);
int  obtenColorFruta(FRUTA *);
/* Constructor:                                 */
FRUTA *nuevaFruta(char *nombre,char *sabor,int color);

/* Private: src/fruta.c                        */

#endif
