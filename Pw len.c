#include<stdio.h>
#include <string.h>
#include <stdlib.h>
void display();
int main()
{
	int lc=0,uc=0,sc=0,d=0,i;
	char upc[27]="ABCDEFGHIJKLMNUPQRSTUVWXYZ";
	char lcc[27]="abcdefghijklmnopqrstuvwxyz";
	char spc[20]="!@#$%^&*()_+-={[""]}<''>/\|;:,?";
	char dgc[100]="0123456789";
	char pw[100];
	printf("Enter password of your choice to known its strength\n");
	gets(pw);
	if(strlen(pw)>8)
	{
		for(i=0;i<strlen(pw);i++)
		if(strchr(upc,pw[i]))
		{
			uc=1;
		}
		else if(strchr(lcc,pw[i]))
		{
			lc=1;
		}
		else if(strchr(spc,pw[i]))
		{
			sc=1;
		}
		else if(strchr(dgc,pw[i]))
		{
			d=1;
		}
		
		
		if(uc+lc+sc+d==4)
		{
			printf("\nYour Password is Strong");
		}
		else if(uc+lc+sc+d==3)
		{
			printf("\nYour Password is Good");
		}
		else if(uc+lc+sc+d==2)
		{
			printf("\nYour Password is Moderate");
		}
		else if(uc+lc+sc+d==1)
		{
			printf("\nYour Password is Weak");
		}
	}
	
	else
	{
		printf("\nGiven lenght of password should bemore than of 8 characters");
	}
}
