#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
		printf("enter the value of A :- ");
		scanf("%d",&a);
		
		printf("enter the value of B :- ");
		scanf("%d",&b);
		
		printf("enter the value of C :- ");
		scanf("%d",&c);
		
		printf("enter the value of D :- ");
		scanf("%d",&d);
		
		printf("enter the value of E :- ");
		scanf("%d",&e);
		
		if(a<b)
		{
			if(a<c)
			{
				if(a<d)
				{
					if(a<e)
					{
						printf("a is min.");	
					}
					else
					{
						printf("e is min.");
					}	
				}
				else
				{
					if(d<e)
					{
						printf("d is min.");
					}
					else
					{
						printf("e is min.");	
					}
				}
			}
			else
			{
				if(c<d)
				{
					if(c<e)
					{
						printf("c is min.");	
					}
					else
					{
						printf("e is min.");
					}
				}
				else
				{
					if(d<e)
					{
						printf("d is min.");
					}
					else
					{
						printf("e is min.");
					}
				}
			}
				
		}
		else
		{
			if(b<c)
			{
				if(b<d)
				{
					if(b<e)
					{
						printf("b is min.");	
					}
					else
					{
						printf("e is min.");
					}	
				}
				else
				{
					if(d<e)
					{
						printf("d is min.");
					}
					else
					{
						printf("e is min.");	
					}
				}
			}
			else
			{
				if(c<d)
				{
					if(c<e)
					{
						printf("c is min.");	
					}
					else
					{
						printf("e is min.");
					}
				}
				else
				{
					if(d<e)
					{
						printf("d is min.");	
					}	
					else
					{
						printf("e is min.");
					}
				}
			}
			
		}
		
	}

