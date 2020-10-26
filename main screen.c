#include<stdio.h>
#include<conio.h>
#include<string.h>
int sp(void);
int chp_cate(void);
int high_scr(void);
int main()
{
	int i,j;
	char c;
	for(i=0;i<=18;i++)
	{
		printf("\n");
	}//printf("\a\n\t\t\t\t\t\t\t\tLets Play the Single Player Mode\n");
	printf("\t\t\t\t\t\t\t******************************************\n");
	printf("\t\t\t\t\t\t\t||                                      ||\n");
	printf("\t\t\t\t\t\t\t||                                      ||\n");
	printf("\t\t\t\t\t\t\t||''''Welcome to Quizander Mindblend''''||\n");
	printf("\t\t\t\t\t\t\t||                                      ||\n");
	printf("\t\t\t\t\t\t\t||                                      ||\n");
	printf("\t\t\t\t\t\t\t******************************************\n\n\n");
	printf("\t\t\t\t\t\t\tSelect the mode in which you want to play:-\n\n\n ");
	printf("\t\t\t\t\t\t\t\t\t1.Press S for playing Single player mode.\n\n");
	printf("\t\t\t\t\t\t\t\t\t2.Press M for playing Multi player mode.\n\n");
	printf("\t\t\t\t\t\t\t\t\t3.Press H for help mode.\n\n");
	printf("\t\t\t\t\t\t\t\t\tEnter Your Choice. ");
	scanf("%s",&c);
	if(c=='S' || c=='s')
	{
		system("cls");
		sp();
	}
	else if(c=='M' || c=='m')
	{
	printf("\a\n\t\t\t\t\t\t\t\t\t\t\tLets Play the Multi Player Mode\n");
	}
	else if(c=='H'|| c=='h')
	{
		printf("\a\n\t\t\t\t\t\t\t\t\t\t\tHelp\n");
}
     else
     {
	printf("\a\t\t\t\t\t\t\t\t\t\t\t\tWrong Choice\n");
	}
}
int sp()
{
	printf("Kindly Register Your Name\n");
	char ch[20], cho;
	fflush(stdin);//fflush() is typically used for output stream only.Its purpose is to clear (or flush) the output buffer and move the buffered data to console(in case of stdout) or disk (in case of file output stream).
	gets(ch); 
	system("cls");
	strupr(ch);
	printf("Welcome %s to THE QUIZANDER MINDLBLEND journey\n\n",ch);
	printf("Choose the option from the down below\n\n");
	printf("\t\t\t1.Choose Category\n\n");
	printf("\t\t\t2.Highest Score\n\n");
	printf("\t\t\t3.Back To Main Menu\n\n\t");
	printf("Enter your choice:- ");
	scanf("%c",&cho);
	if(cho=='1')
	{
		cho_cate();
	}
	else if(cho=='2')
	{
		high_scr();
	}
	else if(cho=='3')
	{
		 cho_main();
	}
	else
	{
		printf("Wrongoo");
	}
	}
int cho_cate()
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("\n");
	}
	printf("\n\n\t\t\t\tPress 1 For Playing 10 second observer challenge.");
	printf("\n\n\t\t\t\tPress 2 For Playing Polling Round Fire.");
	printf("\n\n\t\t\t\tPress 3 For Playing Match the Following.");
	printf("\n\n\t\t\t\tPress 4 For Playing Getting the ways out.");
	printf("\n\n\t\t\t\tPress 5 For Playing Ultimate fusion.");
}
int high_scr()
{
	printf("yo");
}
int cho_main()
{
	system("cls");
	int main();
	 return main();
}
