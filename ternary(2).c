#include<stdio.h>

 void main ()
 {
 	int a,b,c,d;
 	
 	printf(" enter a value =");
 	scanf("%d",&a);
 	
 	printf(" enter b value =");
 	scanf("%d",&b);
 	
 	printf(" enter c value =");
 	scanf("%d",&c);
 	
 	printf(" enter d value =");
 	scanf("%d",&d);
 	
 
 	
 	(a>b)?(a>c)?(a>d)?printf("a is max")
	 				 :printf("d is max")
	 		   :(c>d)?printf("c is max")
	 		   		 :printf("d is max")	
	 	 :(b>c)?(b>d)?printf("b is max")
	 				 :printf("d is max")
	 		   :(c>d)?printf("c is max")
	 		   		 :printf("d is max");
	 	 	
						 		
 	
 	
 	
 	
 	
 	
 }
