#include<stdio.h>
 void main ()
 {
 	int a,b,c,d,e;
 	
 	printf(" enter a value =");
 	scanf("%d",&a);
 	
 	printf(" enter b value =");
 	scanf("%d",&b);
 	
 	printf(" enter c value =");
 	scanf("%d",&c);
 	
 	printf(" enter d value =");
 	scanf("%d",&d);
 	
 	printf(" enter e value =");
 	scanf("%d",&e);
 	
 	(a>b)?(a>c) ? (a>d) ? (a>e) ?printf("a is max")
	 							:printf("e is max")
	 					: (d>e) ?printf("d is max")
						 		:printf("e is max")
	 			:(c>d) 	? (c>e) ?printf("c is max")
	 							:printf("e is max")
				 	   	: (d>e) ?printf("d is max")
						 		:printf("e is max")
	 	 :(b>c) ? (b>d) ? (b>e) ?printf("b is max")
	 							:printf("e is max")
	 					: (d>e) ?printf("d is max")
						 		:printf("e is max")
	 			:(c>d) 	? (c>e) ?printf("c is max")
	 							:printf("e is max")
				 	   	: (d>e) ?printf("d is max")
						 		:printf("e is max");
						 		
 	
 	
 	
 	
 	
 	
 }
