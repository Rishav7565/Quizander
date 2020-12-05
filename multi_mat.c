#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#define TRUE 1
int multi_mat(int,int);
int multi_mat_bas(int);
int multi_mat_inter(int);
int multi_mat_final(int);
int main()
{
	int a1,a2;
	printf("lets start");
	getchar();
	system("cls");
	multi_mat(a1,a2);
	printf("%d%d",a1,a2);
}
int multi_mat(int a1,int a2)
{
	a1=0,a2=0;
	int y1=0,y2=0,y3=0,y4=0,y5=0,y6=0;
	printf("Okay lets start will player 1\nPress Enter");
	getchar();
	system("cls");
	multi_mat_bas(y1);
	system("cls");
	printf("Okay lets start will player 2");
	getchar();
	system("cls");
	multi_mat_bas(y2);
	if(y1>=5&&y2>=5)
	{
		system("cls");
		printf("Congratulations You both have successfully cleared the round\nLets move to intermediate round\nPress enter to move forward");
		getchar();
		system("cls");
		multi_mat_inter(y3);
		system("cls");
		printf("Lets start with player 2\nPress enter to start the game");
		multi_mat_inter(y4);
		system("cls");
		printf("press enter to check the scores");
		getchar();
		system("cls");
		if(y3>=7&&y4>=7)
	{
		system("cls");
		printf("Congratulations You both have successfully cleared the round\nLets move to final round\nPress enter to move forward");
		getchar();
		system("cls");
		multi_mat_final(y5);
		system("cls");
		printf("Lets start with player 2\nPress enter to start the game");
		multi_mat_final(y6);
		system("cls");
		printf("press enter to check the scores");
		if(y5>=10&&y6>=10)
		{
				system("cls");
			printf("Congratulations\n\nYou both have cleared the round\n Press enter to see which one of have received the title of quizhilic");
			getchar();
			system("cls");
		}
		if(y5>=10&&y6<10)
		{
				system("cls");
			printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
			return main();
		}
			if(y5<10&&y6>=10)
	{
			system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\nAs Player 2 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
		return main();
		
	}
	if(y5<10&&y6<10)
	{
			system("cls");
		printf("Sorry!!\nBoth are not eligible\n");
		int main();
		return main();
	}
		getchar();
		system("cls");
	}
		
	}
	if(y1>=5&&y2<5)
	{
		system("cls");
		printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
	if(y1<5&&y2>=5)
	{
		system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
		if(y1<5&&y2<5)
	{
			system("cls");
		printf("Sorry!!\nBoth are not eligible\n");
		int main();
		return main();
	}
	
	if(y3>=7&&y4<7)
	{
		system("cls");
		printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
	if(y3<7&&y4>=7)
	{
		system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\nAs Player 2 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
		return main();
		
	}
		if(y3<7&&y4<7)
	{
			system("cls");
		printf("Sorry you both havent cleared the round.!!\nPress enter to return to main menu");
		getchar();
		system("cls");
			int main();
		return main();
	}
	a1=y1+y3+y5;
	a2=y2+y4+y6;
	printf("Okay lets end here");
}
int multi_mat_bas(int w)
{
		int a[7],i,j,temp,bm1=0;//bm2=0,bm3=0,total=0;
	srand(time(NULL));
	for(i=0;i<=6;i++)
	{
		temp=rand()%7;
		for(j=0;j<=i-1;j++)
		{
			if(temp==a[j])
			break;
		}
		if(j==i)
		{
			a[i]=temp;
		}
		else
		i--;
	}
for(i=0;i<7;i++)
{
	if(a[i]==1)
	{
		int s=1,ms=0;     
	    int ch;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tA. Complete the Phrases:\n\t\t\t\t\t\t\t\t\t\t1. No pain			a. a cake\n\t\t\t\t\t\t\t\t\t\t2. Beat around			b. the devil\n\t\t\t\t\t\t\t\t\t\t3. Speak of			c. No gain\n\t\t\t\t\t\t\t\t\t\t4. Piece of			d. the bushes\n\n\t\t\t\t\t\t\t\t\t\tOptions:\n");
        printf("\t\t\t\t\t\t\t\t\t\t1. : 1(a)-2(c)-3(d)-4(b)\n\t\t\t\t\t\t\t\t\t\t2. : 4(a)-1(c)-2(d)-3(b)\n\t\t\t\t\t\t\t\t\t\t3. : 3(a)-1(d)-2(b)-4(c)\n\t\t\t\t\t\t\t\t\t\t4. : 2(a)-3(b)-1(c)-4(a)\n");
        printf("\t\t\t\t\t\t\t\t\t\t***********************************\n");
	while(!kbhit() && TRUE)		
	{
            	printf("\r\t\t\t\t\t\t\t\t\t\t 00:00:%2d",s);
				ms++;
				Sleep(10);
				if(ms==60)
				{	
					s++;
					ms=0;
				}
				if(s==51)
				{
					printf("\n\t\t\t\t\t\t\t\t\t\tYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s!=51)
{
	        printf("\n\t\t\t\t\t\t\t\t\t\t Enter the choice:- ");
			scanf(" %d",&ch);
			if(ch==2)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch==1||ch==3||ch==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==2)
{
		int s1=1,ms1=0;
	int ch1;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tRelate the phases:\n\t\t\t\t\t\t\t\t\t\t1. Singer			a. Akshay Kumar\n\t\t\t\t\t\t\t\t\t\t2. Dancer			b. Arijit Singh\n\t\t\t\t\t\t\t\t\t\t3. Actor			c. Remo D'Souza\n\t\t\t\t\t\t\t\t\t\t4. Writer			d. Charles Dikens\n");
    printf("\n\t\t\t\t\t\t\t\t\t\tOptions\n\t\t\t\t\t\t\t\t\t\t1. : 1(a)-3(b)-4(c)-2(d)\n\t\t\t\t\t\t\t\t\t\t2. : 2(a)-4(c)-1(b)-3(d)\n\t\t\t\t\t\t\t\t\t\t3. : 1(a)-4(c)-2(d)-3(c)\n\t\t\t\t\t\t\t\t\t\t4. : 4(d)-2(c)-1(b)-3(a)\n");
    printf("\t\t\t\t\t\t\t\t\t\t***********************************\n");
    while(!kbhit() && TRUE)
	{
		printf("\r\t\t\t\t\t\t\t\t\t\t 00:00:%2d",s1);
				ms1++;
				Sleep(10);
				if(ms1==60)
				{
					s1++;
					ms1=0;
				}
				if(s1==51)
				{
					printf("\n\t\t\t\t\t\t\t\t\t\tYour time is up\n\t\t\t\t\t\t\t\t\t\tPress any key to switch\n");
					
					getchar();
				system("cls");
				break;
				}
			}
if(s1!=51)
{
	        printf("\n\t\t\t\t\t\t\t\t\t\t Enter the choice:- ");
			scanf("%d",&ch1);
			if(ch1==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	
					bm1=bm1+1;
					fflush(stdin);
				getchar();
				system("cls");
			}
			
			else if(ch1==1||ch1==2||ch1==3)
			{
		printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
				printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==3)
{
		int s2=1,ms2=0;
	int ch2;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tGuess the player:\n\t\t\t\t\t\t\t\t\t\t1. Cricket			(a) 12\n\t\t\t\t\t\t\t\t\t\t2. Chess			(b) 2\n\t\t\t\t\t\t\t\t\t\t3. Kabbadi			(c) 11\n\t\t\t\t\t\t\t\t\t\t4. Kho-Kho			(d) 7\n");
printf("\n\t\t\t\t\t\t\t\t\t\tOptions:\n\t\t\t\t\t\t\t\t\t\t1. : 3(d)-2(b)-4(a)-1(c)\n\t\t\t\t\t\t\t\t\t\t2. : 2(a)-4(b)-1(d)-3(c)\n\t\t\t\t\t\t\t\t\t\t3. : 1(c)-2(d)-3(b)-4(a)\n\t\t\t\t\t\t\t\t\t\t4. : 3(d)-4(b)-1(c)-2(d)\n");
printf("\t\t\t\t\t\t\t\t\t\t***********************************\n");
while(!kbhit() && TRUE)
	{
		printf("\r\t\t\t\t\t\t\t\t\t\t 00:00:%2d",s2);
				ms2++;
				Sleep(10);
				if(ms2==60)
				{
					s2++;
					ms2=0;
				}
				if(s2==51)
				{
					printf("\n\t\t\t\t\t\t\t\t\t\tYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(s2!=51)
{
	
            printf("\n\t\t\t\t\t\t\t\t\t\t Enter the choice:- ");
			scanf("%d",&ch2);
			if(ch2==1)
			{
				bm1=bm1+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ch2==2||ch2==3||ch2==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}

}
if(a[i]==4)
{
	int s3=1,ms3=0;
	int ch3;	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tGuess the Movie:\n\t\t\t\t\t\t\t\t\t\t1. Akshay Kumar & Katrina Kaif			(a) ABCD 2\n\t\t\t\t\t\t\t\t\t\t2. Varun Dhawan & Shraddha Kapoor		(b) Happy New year\n\t\t\t\t\t\t\t\t\t\t3. Sharukh khan & Abhishek Bacchan		(c) Villan\n\t\t\t\t\t\t\t\t\t\t4. Sidharth Malhotra & Ritesh Deshmukh	        (d) Welcome\n");
printf("\n\t\t\t\t\t\t\t\t\t\tOptions:\n\t\t\t\t\t\t\t\t\t\t1. : 4(c)-1(d)-2(a)-3(b)\n\t\t\t\t\t\t\t\t\t\t2. : 1(a)-4(c)-2(d)-3(b)\n\t\t\t\t\t\t\t\t\t\t3. : 2(b)-1(d)-4(a)-3(c)\n\t\t\t\t\t\t\t\t\t\t4. : 2(c)-4(a)-1(d)-3(d)\n");
printf("\t\t\t\t\t\t\t\t\t\t***********************************\n");
while(!kbhit() && TRUE)
		
	{
		printf("\r\t\t\t\t\t\t\t\t\t\t 00:00:%2d",s3);
				ms3++;
				Sleep(10);
				if(ms3==60)
				{
					
					s3++;
					ms3=0;
				}
				if(s3==51)
				{
					printf("\n\t\t\t\t\t\t\t\t\t\tYour time is up\n\t\t\t\t\t\t\t\t\t\tPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(s3!=51)
{
	
            printf("\n\t\t\t\t\t\t\t\t\t\t Enter the choice:- ");
			scanf("%d",&ch3);
			if(ch3==1)
			{
				bm1=bm1+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ch3==2||ch3==3||ch3==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}

}
if(a[i]==5)
{
int s4=1,ms4=0;
	int ch4;	
printf("\t\t\t\t\t\t\t\t\t\tCorrect Form:\n\t\t\t\t\t\t\t\t\t\t1. Continents			(a) 28\n\t\t\t\t\t\t\t\t\t\t2. Oceans			(b) 7\n\t\t\t\t\t\t\t\t\t\t3. States in India		(c) 8\n\t\t\t\t\t\t\t\t\t\t4. Union Territories		(d) 5\n");
printf("\n\t\t\t\t\t\t\t\t\t\tOptions:\n\t\t\t\t\t\t\t\t\t\t1. : 1(d)-3(a)-2(b)-4(c)\n\t\t\t\t\t\t\t\t\t\t2. : 2(c)-4(a)-1(d)-3(b)\n\t\t\t\t\t\t\t\t\t\t3. : 3(a)-1(b)-2(c)-4(d)\n\t\t\t\t\t\t\t\t\t\t4. : 4(c)-1(b)-2(d)-3(a)\n");
printf("\t\t\t\t\t\t\t\t\t\t***********************************\n");
while(!kbhit() && TRUE)
		
	{
		printf("\r\t\t\t\t\t\t\t\t\t\t 00:00:%2d",s4);
				ms4++;
				Sleep(10);
				if(ms4==60)
				{
					
					s4++;
					ms4=0;
				}
				if(s4==51)
				{
					printf("\n\t\t\t\t\t\t\t\t\t\tYour time is up\n\t\t\t\t\t\t\t\t\t\tPress any key to switch\n");
					getchar();
				system("cls");
			
				break;
				
				}
			}
if(s4!=51)
{
	
            printf("\n\t\t\t\t\t\t\t\t\t\t Enter the choice:- ");
			scanf("%d",&ch4);
			if(ch4==4)
			{
				bm1=bm1+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ch4==1||ch4==3||ch4==2)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}

}
if(a[i]==6)
{
	int s5=1,ms5=0;
	int ch5;
	printf("\t\t\t\t\t\t\t\t\t\tChoose the Correct one:\n\t\t\t\t\t\t\t\t\t\t1. Bengaluru			(a) Patliputra\n\t\t\t\t\t\t\t\t\t\t2. JaipuR			(b) City of dreams\n\t\t\t\t\t\t\t\t\t\t3. Mumbai			(c) Silicon Valley of India\n\t\t\t\t\t\t\t\t\t\t4. Patna			(d) Pink City\n");
printf("\n\t\t\t\t\t\t\t\t\t\tOptions:\n1. : 1(c)-4(a)-3(b)-2(d)\n2. : 2(a)-3(c)-4(b)-1(d)\n3. : 2(c)-1(d)-4(a)-3(b)\n4. : 4(a)-1(b)-3(c)-2(d)\n");
printf("\t\t\t\t\t\t\t\t\t\t***********************************\n");
while(!kbhit() && TRUE)
		
	{
		printf("                                           \r 00:00:%2d",s5);
				ms5++;
				Sleep(10);
				if(ms5==60)
				{
					
					s5++;
					ms5=0;
				}
				if(s5==51)
				{
					printf("\nYour time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(s5!=51)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ch5);
			if(ch5==1)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
					bm1=bm1+1;
				getchar();
				system("cls");
			}
			else if(ch5==2||ch5==3||ch5==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Any Key to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}

}
if(a[i]==0)
{
	int s6=1,ms6=0;
	int ch6;
	printf("Choose the Correct form:\n1. Mars			(a) Earth's sister\n2. Venus		(b) Great Dark Spot\n3. Jupiter		(c) Red planet\n4. Neptune		(d) gas-giant planet\n");
printf("\nOptions:\n1. : 1(d)-4(a)-2(b)-3(c)\n2. : 4(b)-1(a)-2(c)-3(d)\n3. : 3(d)-4(b)-1(c)-2(a)\n4. : 2(a)-1(d)-3(c)-4(b)\n");
printf("***********************************\n");
while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s6);
				ms6++;
				Sleep(10);
				if(ms6==60)
				{
					
					s6++;
					ms6=0;
				}
				if(s6==51)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(s6!=51)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ch6);
			if(ch6==3)
			{
				bm1=bm1+1;
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ch6==1||ch6==2||ch6==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}

}
}
printf("Basic Round over\nPress enter");
getchar();
system("cls");
return (bm1);

}
int multi_mat_inter(int x)
{
		int b[10],temp,i,j,bm2=0;
	srand(time(NULL));
	for(i=0;i<=9;i++)
	{
		temp=rand()%10;
		for(j=0;j<=i-1;j++)
		{
			if(temp==b[j])
			break;
		}
		if(j==i)
		{
			b[i]=temp;
		}
		else
		i--;
	}
	for(i=0;i<=9;i++)
	{
		if(b[i]==0)
		{
			int se1=1,mse1=0;
	int bh1;
		printf("Guess the show:\n1. The vampire diaries		a.Cersei\n2. Comedy Nights with Kapil	b. Gaitonde\n3. Sacred Games			c. Guthi\n4. Game of Thrones		d. Damon Salvatore");
	printf("\n\nOptions\n1. 2(c)-1(a)-3(d)-4(d)\n2. 1(b)-4(a)-2(c)-3(d)\n3. 3(b)-1(d)-4(a)-2(c)\n4. 2(c)3(b)-4(a)-1(b)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se1);
				mse1++;
				Sleep(10);
				if(mse1==60)
				{
					
					se1++;
					mse1=0;
				}
				if(se1==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se1!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh1);
			if(bh1==3)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh1==1||bh1==2||bh1==4)
			{
		printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}

		}
		if(b[i]==1)
		{
			int se2=1,mse2=0;
	int bh2;
	printf("Choose the correct form\n1.""The way to get started is to quit talking and begin doing.""					a. Nelson Mandela\n2.""The greatest glory in living lies not in never falling, but in rising every time we fall.""	b. Mother Teresa\n3.""Life is what happens when you're busy making other plans.""					c. Walt Disney\n4.""Spread love everywhere you go. Let no one ever come to you without leaving happier.""		d. John Lennon");
	printf("\n\nOptions\n1. 2(a)-4(b)-3(c)-1(d)\n2. 3(d)-2(a)-1(c)-4(b)\n3. 1(a)-4(e)-2(d)-3(b)\n4. 2(a)-3(b)-4(d)-1(c)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se2);
				mse2++;
				Sleep(10);
				if(mse2==60)
				{
					
					se2++;
					mse2=0;
				}
				if(se2==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se2!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh2);
			if(bh2==2)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh2==1||bh2==3||bh2==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
		}
	}
	if(b[i]==2)
	{
		int se3=1,mse3=0;
	int bh3;
	printf("Name the Ghost\n1. Conjuring 2\t\t\ta. Samara\n2. Insidious\t\t\tb. Kayako Saeki\n3. The Grudge\t\t\tc. Valak\n4. The ring\t\t\td. Parker Crane");
	printf("\n\nOptions\n1. 1(c)-2(d)-3(a)-4(b)\n2. 2(d)-1(a)-3(c)-4(a)\n3. 3(b)-4(a)-1(c)-2(d)\n4. 4(a)-2(b)-3(c)-1(d)\n");
printf("***********************************\n");

	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se3);
				mse3++;
				Sleep(10);
				if(mse3==60)
				{
					
					se3++;
					mse3=0;
				}
				if(se3==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se3!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh3);
			if(bh3==3)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh3==1||bh3==2||bh3==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(b[i]==3)
{
	int se4=1,mse4=0;
	int bh4;
	printf("Synonyms:\n1. Dangerous		a. scrutinize\n2. Quiet		b. Perilous\n3. Move			c. Tranquil\n4. Look			d. Plod");
	printf("\n\nOptions\n1. 1(b)-4(a)-3(c)-2(d)\n2. 2(c)-1(b)-3(d)-4(a)\n3. 1(a)-4(b)-1(c)-2(d)\n4. 2(a)-1(b)-4(d)-3(b)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se4);
				mse4++;
				Sleep(10);
				if(mse4==60)
				{
					
					se4++;
					mse4=0;
				}
				if(se4==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se4!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh4);
			if(bh4==2)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh4==1||bh4==3||bh4==4)
			{
			printf("Incorrect Option!!!\nPress any key to continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
		printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(b[i]==4)
{
	int se5=1,mse5=0;
	int bh5;
	printf("Antonyms:\n1. Entrance			a. Expert\n2. Hasten			b. Conclusion\n3. Feeble			c. Fresh\n4. Lazy				d. Dawdle");
	printf("\n\nOptions\n1. 1(b)-4(c)-2(d)-3(a)\n2. 3(a)-1(c)-2(d)-4(b)\n3. 4(c)-2(a)-1(b)-3(d)\n4. 1(c)-2(d)-3(a)-4(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se5);
				mse5++;
				Sleep(10);
				if(mse5==60)
				{
					
					se5++;
					mse5=0;
				}
				if(se5==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se5!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh5);
			if(bh5==1)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh5==3||bh5==2||bh5==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(b[i]==5)
{
	int se6=1,mse6=0;
	int bh6;
	printf("Guess the Capitals:\n1. Belgium\t\t\ta. Tripoli\n2. China\t\t\tb. Beijing\n3. Egypt\t\t\td. Brussels\n4. Libya\t\t\tc. Cairo");
	printf("\n\nOptions\n1. 3(c)-2(b)-1(d)-4(c)\n2. 2(d)-3(a)-4(b)-1(c)\n3. 1(d)-4(a)-3(c)-2(b)\n4. 3(a)-4(b)-1(c)-2(b)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se6);
				mse6++;
				Sleep(10);
				if(mse6==60)
				{
					
					se6++;
					mse6=0;
				}
				if(se6==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se6!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh6);
			if(bh6==3)
			{
				bm2=bm2+1;
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh6==1||bh6==2||bh6==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(b[i]==6)
{
	int se7=1,mse7=0;
	int bh7;
	printf("Guess the Location National Parks :\n1. Jim Corbett\t\t\ta. West Bengal\n2. Kazairanga\t\t\tb. Rajasthan\n3. Ranthambore\t\t\tc. Uttrakhand\n4. Sunderbans\t\t\td. Assam");
	printf("\n\nOptions\n1. 1(c)-2(d)-3(b)-4(a)\n2. 4(c)-3(a)-2(d)-1(c)\n3. 3(a)-2(b)-1(c)-4(d)\n4. 2(d)-3(b)-1(c)-4(b)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se7);
				mse7++;
				Sleep(10);
				if(mse7==60)
				{
					
					se7++;
					mse7=0;
				}
				if(se7==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se7!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh7);
			if(bh7==1)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh7==3||bh7==2||bh7==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(b[i]==7)
{
	int se8=1,mse8=0;
	int bh8;
	printf("Guess the Youtubers:\n1. Titu Mama\t\t\ta. Carry Minati\n2. Kamla\t\t\tb. BB ki Vines\n3. Mostly Sane\t\t\tc. Prajakta\n4. Papi Guidya\t\t\td. Ashish Chanchalani");
	printf("\n\nOptions\n1. 4(a)-3(c)-2(d)-1(b)\n2. 1(b)-2(a)-3(c)-4(a)\n3. 4(a)-3(b)-1(c)-2(d)\n4. 3(c)-2(d)-1(b)-4(a)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se8);
				mse8++;
				Sleep(10);
				if(mse8==60)
				{
					
					se8++;
					mse8=0;
				}
				if(se8==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se8!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh8);
			if(bh8==4)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh8==3||bh8==2||bh8==1)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}

if(b[i]==8)
{
	int se9=1,mse9=0;
	int bh9;
	printf("Guess the Dialogue:\n1.""Insaan ko Dibbe mei tab hone chahiye jab voh mar chuka ho""		a. K3G\n2.""Tussi jaa rahe ho""							b. ANAND\n3.""Humare yahan ghari ki sui character decide karti hain""			c. ZNMD\n4.""Zindagi Badi Honi Chahiye Lambi nahi""					d. PINK");
	printf("\n\nOptions\n1. 1(c)-2(d)-4(a)-3(b)\n2. 4(a)-1(c)-2(b)-3(d)\n3. 1(c)-2(a)-3(d)-4(b)\n4. 6(b)-1(c)-2(a)-3(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se9);
				mse9++;
				Sleep(10);
				if(mse9==60)
				{
					
					se9++;
					mse9=0;
				}
				if(se9==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se9!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh9);
			if(bh9==3)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh9==4||bh9==2||bh9==1)
			{
		printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(b[i]==9)
{
	int se10=1,mse10=0;
	int bh10;
	printf("Guess what they like most to eat:\n1. Mice			a. Milk\n2. Cow			b. Carrot\n3. Rabbit		c. Grass\n4. Cat			d. Cheese");
	printf("\n\nOptions\n1. 1(b)-4(a)-3(c)-2(d)\n2. 2(c)-3(b)-1(d)-4(a)\n3. 4(a)-3(c)-1(b)-2(d)\n4. 3(c)-2(d)-1(a)-3(b)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",se10);
				mse10++;
				Sleep(10);
				if(mse10==60)
				{
					
					se10++;
					mse10=0;
				}
				if(se10==41)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(se10!=41)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&bh10);
			if(bh10==2)
			{
				bm2=bm2+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(bh10==4||bh10==3||bh10==1)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
printf("Intermediate Round over\nPress enter");
getchar();
system("cls");
return (bm2);
}
}
int multi_mat_final(int y)
{
		int c[12],i,j,temp,bm3=0;
	srand(time(NULL));
	for(i=0;i<12;i++)
	{
		temp=rand()%12;
		for(j=0;j<=i-1;j++)
		{
			if(temp==c[j])
			break;
		}
		if(j==i)
		{
			c[i]=temp;
		}
		else
		i--;
	}
for(i=0;i<12;i++)
{
	if(c[i]==1)
	{
			int sec1=1,msec1=0;
	int ah1;
printf("Answer about the Solar System:\n1. Coldest Planet			a. Mercury\n2. Planet Out of the Solar system	b. Pluto \n3. Planets with most moons		c. Uranus\n4. Closest of the sun			d. Saturn");
	printf("\n\nOptions\n2. 3(d)-1(c)-2(a)-4(b)\n1. 2(b)-1(c)-3(d)-4(a)\n4. 2(b)-4(a)-3(c)-1(d)\n3. 3(a)-1(b)-2(d)-4(c)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec1);
				msec1++;
				Sleep(10);
				if(msec1==60)
				{
					
					sec1++;
					msec1=0;
				}
				if(sec1==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec1!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah1);
			if(ah1==1)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah1==4||ah1==2||ah1==3)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==2)
	{
			int sec2=1,msec2=0;
	int ah2;
	printf("Tell me about the places:\n1. This tradition of carrying heavy portable shrines,or ""mikoshi,""takes place in what country?		a. Japan\n2. This former trading city built by the Nabataeans, a Semitic tribe					b. Jordan\n3. This mountain is the tallest in Africa. In what country is it located?				c. Tanzania\n4. This vibrant capital city, with its collage of colonial and Art Deco architecture.			d Cuba");
	printf("\n\nOptions\n4. 2(a)-1(c)-3(c)-4(d)\n1. 1(c)-2(a)-4(b)-3(d)\n3. 2(a)-4(b)-1(c)-3(d)\n2. 3(c)-1(a)-2(b)-4(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec2);
				msec2++;
				Sleep(10);
				if(msec2==60)
				{
					
					sec2++;
					msec2=0;
				}
				if(sec2==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec2!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah2);
			if(ah2==2)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah2==4||ah2==1||ah2==3)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==3)
	{
			int sec3=1,msec3=0;
	int ah3;
	printf("Guess about the ocean:\n1. Biggest ocean of the world							a. Southern Ocean\n2. Largest breeding grounds of the world for humpback whales.			b.Indian Ocean\n3. Home of Emperor Penguins and Wandering Albatrosses.				c. Artic Ocean\n4. There are many polar bears living						d. Pacific Ocean");
	printf("\n\nOptions\n4. 3(b)-2(a)-1(c)-4(d)\n1. 1(b)-4(a)-3(c)-2(d)\n3. 2(b)-4(c)-1(d)-2(b)\n2. 1(d)-2(b)-3(a)-4(c)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec3);
				msec3++;
				Sleep(10);
				if(msec3==60)
				{
					
					sec3++;
					msec3=0;
				}
				if(sec3==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec3!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah3);
			if(ah3==2)
			{
				bm3=bm3+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah3==4||ah3==1||ah3==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	
		if(c[i]==4)
	{
			int sec4=1,msec4=0;
	int ah4;
	printf("COVID19 Special\n1.How is COVID-19 passed on?					a. A new and continuous cough,Fever,Tiredness\n2. What are the common symptoms of COVID-19?			b. Through droplets that come from your mouth and nose when you cough or breathe out\n3.Example of physical distancing				c.People with certain underlying health conditions\n4. Which people is COVID-19 more dangerous for			d. You stop going to crowded places and visiting other people's houses");
	printf("\n\nOptions\n3. 1(b)-2(a)-3(d)-1(c)\n4. 1(b)-3(d)-4(c)-2(a)\n1. 1(b)-4(c)-2(d)-3(a)\n2. 4(a)-2(c)-3(d)-1(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec4);
				msec4++;
				Sleep(10);
				if(msec4==60)
				{
					
					sec4++;
					msec4=0;
				}
				if(sec4==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec4!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah4);
			if(ah4==4)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah4==2||ah4==1||ah4==3)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==5)
	{
			int sec5=1,msec5=0;
	int ah5;
	printf("Quotes And People:\n1. ""The future belongs to those who believe in the beauty of their dreams.""			a. Anne Frank\n2. ""Whoever is happy will make others happy too.""			 				b. Babe Ruth\n3. ""Never let the fear of striking out keep you from playing the game.""				c.  Eleanor Roosevelt\n4. ""Life is either a daring adventure or nothing at all.""						d. Helen Killer");
	printf("\n\nOptions\n1. 2(c)-4(b)-1(a)-3(d)\n3. 4(a)-3(c)-2(b)-1(d)\n2. 1(c)-3(a)-2(d)-4(b)\n4. 2(a)-1(c)-3(b)-4(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec5);
				msec5++;
				Sleep(10);
				if(msec5==60)
				{
					
					sec5++;
					msec5=0;
				}
				if(sec5==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec5!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah5);
			if(ah5==4)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah5==2||ah5==1||ah5==3)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
		if(c[i]==6)
	{
			int sec6=1,msec6=0;
	int ah6;
	printf("Countries and Capitals:\n1. Qatar\t\t\ta. Belgrade\n2. Senegal\t\t\tb. Doha\n3. Serbia\t\t\tc. Dakar\n4. Sweden\t\t\td. Stockholm");
	printf("\n\nOptions:\n3. 1(b)-4(d)-2(c)-3(a)\n2. 1(c)-3(d)-4(a)-2(b)\n1. 2(b)-1(a)-4(c)-3(d)\n4. 1(c)-4(b)-3(a)-2(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec6);
				msec6++;
				Sleep(10);
				if(msec6==60)
				{
					
					sec6++;
					msec6=0;
				}
				if(sec6==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec6!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah6);
			if(ah6==3)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah6==2||ah6==1||ah6==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==7)
	{
			int sec7=1,msec7=0;
	int ah7;
		printf("Guess the Synonyms:\n1. Stop			a. Recount\n2. Tell			b. Cease\n3. Trouble		c. Distress\n4. True			d. Precise");
	printf("\n\nOptions:\n1. 1(a)-2(c)-3(d)-4(b)\n3. 2(c)-3(a)-4(b)-1(a)\n2. 1(b)-4(d)-2(a)-3(c)\n4. 1(c)-4(b)-2(a)-3(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec7);
				msec7++;
				Sleep(10);
				if(msec7==60)
				{
					
					sec7++;
					msec7=0;
				}
				if(sec7==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec7!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah7);
			if(ah7==2)
			{
				bm3=bm3+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah7==3||ah7==1||ah7==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==8)
	{
			int sec8=1,msec8=0;
	int ah8;
	printf("Guess the Antonyms:\n1. Ancient\t\t\ta. Sparse\n2. Abundant\t\t\tb. New\n3. Artificial\t\t\tc. Detractor\n4. Ally\t\t\t  	d. Unaffected");
	printf("\n\nOptions:\n2. 2(a)-4(b)-3(c)-1(d)\n3. 1(b)-4(c)-2(a)-3(d)\n1. 4(c)-1(d)-2(a)-3(e)\n4. 3(a)-1(b)-2(c)-4(d)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec8);
				msec8++;
				Sleep(10);
				if(msec8==60)
				{
					
					sec8++;
					msec8=0;
				}
				if(sec8==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec8!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah8);
			if(ah8==3)
			{
				bm3=bm3+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah8==2||ah8==1||ah8==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==9)
	{
			int sec9=1,msec9=0;
	int ah9;
	printf("National Parks:\n1. Van Vihar NP\t\t\ta. West Bengal\n2. Tadoba NP\t\t\tb. Madhya Pradesh\n3. Sultanpur NP\t\t\tc. Maharashtra\n4. Singalila NP\t\t\td. Haryana");
	printf("\n\nOptions:\n4.\t3(d)-1(b)-2(c)-4(a)\n3.\t2(a)-3(d)-4(c)-1(b)\n2.\t1(b)-4(c)-2(b)-3(d)\n1.\t1(b)-4(a)-2(d)-3(c)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec9);
				msec9++;
				Sleep(10);
				if(msec9==60)
				{
					
					sec9++;
					msec9=0;
				}
				if(sec9==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec9!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah9);
			if(ah9==4)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				system("cls");
			}
			else if(ah9==2||ah9==1||ah9==3)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==10)
	{
			int sec10=1,msec10=0;
	int ah10;
		printf("Guess the shows:\n1. Family Man\t\t\ta. Zarina Malik\n2. Originals\t\t\tb. Scott McCall\n3. Teen Wolf\t\t\tc. Michaelson\n4. Inside Edge\t\t\td. Srikant Tiwari");
	printf("\n\nOptions:\n1. 1(c)-2(d)-3(a)-4(b)\n2. 1(a)-4(c)-3(d)-2(b)\n3. 3(b)-1(d)-4(a)-2(c)\n4. 1(d)-4(a)-2(b)-3(c)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec10);
				msec10++;
				Sleep(10);
				if(msec10==60)
				{
					
					sec10++;
					msec10=0;
				}
				if(sec10==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec10!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah10);
			if(ah10==3)
			{
				bm3=bm3+1;
						printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah10==2||ah10==1||ah10==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
		if(c[i]==11)
	{
			int sec11=1,msec11=0;
	int ah11;
	printf("1.Guess the Incidents:\n1. American Resolution\t\t\ta. 1517-1648\n2. The Reformation\t\t\tb. 1939-1945\n3. Fall of Berlin\t\t\tc. 1775-1783\n4. World War 2\t\t\t	d. 1517");
	printf("\n\nOptions:\n1. 2(a)-1(c)-4(b)-3(d)\n2. 3(c)-1(d)-2(a)-4(b)\n3. 3(b)-4(d)-2(a)-1(c)\n4. 1(c)-3(d)-4(a)-2(b)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec11);
				msec11++;
				Sleep(10);
				if(msec11==60)
				{
					
					sec11++;
					msec11=0;
				}
				if(sec11==31)
				{
					printf("Your time is up\nPress any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec11!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah11);
			if(ah11==1)
			{
				bm3=bm3+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah11==2||ah11==3||ah11==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(c[i]==0)
	{
			int sec12=1,msec12=0;
	int ah12;
	printf("Guess the Dialouge\n1. ""Aaj mere paas gaadi hai, bungla hai, paisa hai... tumhare paas kya hai?""\t\t\t		a. Sholay\n2. ""Kitney aadmi the""\t\t\t									b. Shahenshah\n3. ""Kaun kambakth hai jo bardasht karne ke liye peeta hai. Main toh peeta hoon ke bas saans le sakoon""		c. Mr. India\n4. ""Mogambo khush hua!""\t\t\t									d. Devdas");
	printf("\n\nOptions\n1. 1(c)-4(a)-2(d)-3(b)\n4. 3(d)-2(a)-1(c)-4(b)\n3. 2(c)-3(a)-4(b)-1(d)\n2. 1(b)-3(d)-4(c)-2(a)\n");
printf("***********************************\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",sec12);
				msec12++;
				Sleep(10);
				if(msec12==60)
				{
					
					sec12++;
					msec12=0;
				}
				if(sec12==31)
				{
					printf("Your time is up Press any key to switch\n");
					getchar();
				system("cls");
				
				break;
				
				}
			}
if(sec12!=31)
{
	
            printf("\n Enter the choice:- ");
			scanf("%d",&ah12);
			if(ah12==2)
			{
				bm3=bm3+1;
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ah12==1||ah12==3||ah12==4)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("\nInvalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
}
printf("Final Round over\nPress enter");
getchar();
system("cls");
return (bm3);
}

