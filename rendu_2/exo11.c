#include<stdio.h>

int main(){
	
	double x,y,z;
		x=2.225073858507201383e-308; // 1.00000000000000000000000 
		y=2.225073858507201877e-308; // 1.00000000000000000000001 
                z=y-x;                    
                printf("%.23e",z); //   z=4.94065645841246544176569e-324
                                   //     0.0000000000000000000001 
               

return 0;
}
