#include <stdio.h>
#include "fruta.h"

int main(void) {	
	
	/**                        (public, public, private)    ****/
	FRUTA *manzana = nuevaFruta("MANZANA","DULCE",0xF00);
	printf("| FRUTA %s| SABOR %s | COLOR %x |",manzana->nombre, manzana->sabor, obtenColorFruta(manzana));
	/** ERROR: **/
	// printf("| FRUTA %s| SABOR %s | COLOR %x |",manzana->nombre, manzana->sabor,manzana->color);

	destruirFruta(&manzana);

	return 0;
}
