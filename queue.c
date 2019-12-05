#include<stdio.h>
#include<conio.h>
void main()
{
	int r=-1,f=-1,size=3,ch,s[3],value;
	while(1)
	{
		clrscr();
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.Exit");
		printf("\nenter your choice:");
		scanf("%d",&ch);

		if(ch==1)
		  {
			if(f==0&& r==size-1 || r==f-1)
			  {
				printf("Queue is full");
			  }

			else
			{
				if(r==size-1)
				{
					r=0;
				}
				else
				{
				r++;
				scanf("%d",&value);
				s[r]=value;
				printf("Your number %d is enterd",value);
				}

			if(f==-1)
			{
				f=0;
			}
			}
		  }
	      else if(ch==2)
		  {
			if(f==-1)
			{
				printf("Queue is empety");
			}
			else
			{
				value=s[f];
				printf("Your number %d is deleted",value);
			}
			if(f==r)
			{
				f=-1;
				r=-1;
			}
			else if(f==size-1)
			{
			 f=0;
			}
			else
			{
				f++;
			}
		  }
	      else if(ch==3)
		  {
			break;
		  }
		else
		  {
			printf("** choice is invailid **");
		  }
		  getch();
	}
}
