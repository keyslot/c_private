#include <stdio.h>
#include "fruta.h"

int main(void) {	
	 
	FRUTA *manzana = nuevaFruta("MANZANA","DULCE",100);
	FRUTA *pera = nuevaFruta("PERA","DULCE",200);	
	
	printf("COLOR %s:%d,%s\n",manzana->nombre,
	                       obtenColor(manzana),
			       manzana->sabor
			       );
	printf("COLOR %s:%d,%s\n",pera->nombre,
	                       obtenColor(pera),
			       pera->sabor
			       );
	
	destruirFruta(&pera);
	destruirFruta(&manzana);
}
