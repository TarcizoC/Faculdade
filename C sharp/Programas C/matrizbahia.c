#include <stdio.h>
#include <stdlib.h>



int main() { 
    int l,c,a,b;
            printf("Escolhe seu num de linha: \n");
            scanf("%d",&l);
            printf("Escolhe seu num de coluna: ");
            scanf("%d",&c);
            
    int matriz[l][c];
    
    for(a=0;a<l;a++)
    {
    	for(b=0;b<c;b++) {
    		
    scanf("%d",&matriz[a][b]);
		}
    	
    
	}
	for(a=0;a<l;a++)
	{   for(b=0;b<c;b++) 
	{        printf("%d",matriz[b][a]);
	}
	}
	
	
	
	
	
	
	
	
	return 0;
}
