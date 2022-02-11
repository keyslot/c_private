  /* fruta.c */
#include "fruta.h"

typedef struct{
      /* PRIVATE DATA                           */
      int color; 
}FRUTA_PRIVATE;

typedef struct GET{
      FRUTA   *public;
      FRUTA_PRIVATE *private;
}*GET;

static GET
new(void) 
{
      GET this = malloc(sizeof(struct GET)); 
      this->public = malloc(sizeof(FRUTA));
      this->private = malloc(sizeof(FRUTA_PRIVATE));
      this->public->private = this;
      return this;
}

static GET
exists(FRUTA *fruta) 
{
      return (fruta && fruta->private?fruta->private:NULL);
}

FRUTA* 
nuevaFruta(char *nombre, char *sabor, int color)
{
      GET this = new();
      this->public->nombre = nombre;
      this->public->sabor = sabor;
      this->private->color = color;		
      return this->public;
}

int 
destruirFruta(FRUTA **fruta)
{
      if (!*fruta) return 0;
      GET this = exists(*fruta);
      if (this) {
          free(this->public);
	  free(this->private);
          free(this);
      }
      this = NULL;
      *fruta = NULL;
      return 1;
}

int 
obtenColor(FRUTA *fruta)
{
      GET this = exists(fruta);
      return this->private->color;
}