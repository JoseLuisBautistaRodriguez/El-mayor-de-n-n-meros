//El mayor de n números

#include <stdio.h>

int main(){
	
	int x, y, i, num;
	x = 0 ;
	i = 1 ;
	
	printf("\n	Ingresa el numero de valores que quieres comparar: ");
	scanf("%i", &y);
	printf("\n");
	y = y + 1;
	
	do {
		
		printf("		Ingresa tu ° %d ° numero: ", i);
		scanf("%i", &num );
		
		if(num<0){
			
			if(num>x){
				
				x = num ;
				
			}
			else if(i==1){
				
				x = num;
				
			}
		}
		else if(num >= 0){
			
			if( num>x ){
				
				x = num ;
				
			}
			
		}
		
		i = i + 1;

	} while( y > i);  //Al usar un do while, coloque un > en vez de un ==, ya que la condición continua hasta que sea falsa.
	
	
	printf("\n	El numero mas grande es: °° %d °° 	Fin del programa.\n\n\n", x);
	
	system ("pause");
	return 0 ;
}
