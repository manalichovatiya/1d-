#include <stdio.h>    
int main(){  
 	int n;
 	printf("Inter the size of Array:"); 
 	scanf("%d",&n);
    int a[n]; 
    int i;   
    
    for(i=0; i<n; i++){  
	    printf("Element[%d]: ",i);
        scanf("%d", &a[i]);  
    }    
    printf("\nElements in array are: ");  
    for(i=0; i<n; i++){  
        printf("%d  ", a[i]);  
    } 
    printf("\n");	
}
