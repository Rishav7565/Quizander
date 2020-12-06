#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#define TRUE 1 
#define R 4 
#define C 4 
int multi_path(int,int);
int multi_path_bas(int);
int multi_path_inter(int);
int multi_path_final(int);
int main()
{
	int m1,m2;
	printf("lets start");
	getchar();
	system("cls");
	multi_path(m1,m2);
	printf("%d%d",m1,m2);
}
int multi_path(int m1,int m2)
{
	m1=0,m2=0;
	int l1=0,l2=0,l3=0,l4=0,l5=0,l6=0;
	printf("Okay lets start will player 1\nPress Enter");
	getchar();
	system("cls");
	multi_path_bas(l1);
	system("cls");
	printf("Okay lets start will player 2");
	getchar();
	system("cls");
	multi_path_bas(l2);
	if(l1>=5&&l2>=5)
	{
		system("cls");
		printf("Congratulations You both have successfully cleared the round\nLets move to intermediate round\nPress enter to move forward");
		getchar();
		system("cls");
		multi_path_inter(l3);
		system("cls");
		printf("Lets start with player 2\nPress enter to start the game");
		multi_path_inter(l4);
		system("cls");
		printf("press enter to check the scores");
		getchar();
		system("cls");
		if(l3>=7&&l4>=7)
	{
		system("cls");
		printf("Congratulations You both have successfully cleared the round\nLets move to final round\nPress enter to move forward");
		getchar();
		system("cls");
		multi_path_final(l5);
		system("cls");
		printf("Lets start with player 2\nPress enter to start the game");
		multi_path_final(l6);
		system("cls");
		printf("press enter to check the scores");
		if(l5>=10&&l6>=10)
		{
				system("cls");
			printf("Congratulations\n\nYou both have cleared the round\n Press enter to see which one of have received the title of quizhilic");
			getchar();
			system("cls");
		}
		if(l5>=10&&l6<10)
		{
				system("cls");
			printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
			return main();
		}
			if(l5<10&&l6>=10)
	{
			system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\nAs Player 2 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
		return main();
		
	}
	if(l5<10&&l6<10)
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
	if(l1>=5&&l2<5)
	{
		system("cls");
		printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
	if(l1<5&&l2>=5)
	{
		system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
		if(l1<5&&l2<5)
	{
			system("cls");
		printf("Sorry!!\nBoth are not eligible\n");
		int main();
		return main();
	}
	
	if(l3>=7&&l4<7)
	{
		system("cls");
		printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
	if(l3<7&&l4>=7)
	{
		system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\nAs Player 2 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
		return main();
		
	}
		if(l3<7&&l4<7)
	{
			system("cls");
		printf("Sorry you both havent cleared the round.!!\nPress enter to return to main menu");
		getchar();
		system("cls");
			int main();
		return main();
	}
	m1=l1+l3+l5;
	m2=l2+l4+l6;
	printf("Okay lets end here");
}// C++ program to count number of paths in a maze 
// with obstacles. 

int multi_path_bas(int d) 
{ 

   	int a[7],i,j,temp,bm1=0,bm2=0,bm3=0;
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
  int maze[R][C] = {{ 0, 0, 0, 0}, 
					{ 0,-1, 0, 0}, 
					{-1, 0, 0, 0}, 
					{ 0, 0, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O\n\t O X O O\n\t X O O O\n\t O O O O\n"); 
					printf("\nOPTIONS:-\n1. 2\n2. 5\n3. 4\n4. 0\n");
                    printf("\n*******************************************\n\n");
	int i,j,k;
	if (maze[0][0]==-1) 
		k=0; 

	for (i=0; i<R; i++) 
	{ 
		if (maze[i][0] == 0) 
			maze[i][0] = 1;  
		else
			break; 
	} 
 
	for ( i=1; i<C; i++) 
	{ 
		if (maze[0][i] == 0) 
			maze[0][i] = 1; 
		else
			break; 
	} 

	for ( i=1; i<R; i++) 
	{ 
		for (j=1; j<C; j++) 
		{ 
			if (maze[i][j] == -1) 
				continue; 
			if (maze[i-1][j] > 0) 
				maze[i][j] = (maze[i][j] + maze[i-1][j]);  
			if (maze[i][j-1] > 0) 
				maze[i][j] = (maze[i][j] + maze[i][j-1]); 
		} 
	} 

int ms=1,s=1,ch;
	k=(maze[R-1][C-1] > 0)? maze[R-1][C-1] : 0; 
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s);
				ms++;
				Sleep(10);
				if(ms==60)
				{	
					s++;
					ms=0;
				}
				if(s==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch);
			if(ch==3)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch==1||ch==2||ch==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==2)
  {		
  int maze1[R][C] ={{ 0,-1, 0, 0}, 
					{ 0,-1, 0,-1}, 
					{ 0, 0,-1, 0}, 
					{ 0, 0, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X O O\n\t O X O X\n\t O O X O\n\t O O O O\n"); 
					printf("\nOPTIONS:-\n1. 2\n2. 5\n3. 4\n4. 0\n");
printf("\n*******************************************\n\n");
	int i1,j1,k1;
	if (maze1[0][0]==-1) 
		k1=0; 

	for (i1=0; i1<R; i1++) 
	{ 
		if (maze1[i1][0] == 0) 
			maze1[i1][0] = 1;  
		else
			break; 
	} 
 
	for ( i1=1; i1<C; i1++) 
	{ 
		if (maze1[0][i1] == 0) 
			maze1[0][i1] = 1; 
		else
			break; 
	} 

	for ( i1=1; i1<R; i1++) 
	{ 
		for (j1=1; j1<C; j1++) 
		{ 
			if (maze1[i1][j1] == -1) 
				continue; 
			if (maze1[i1-1][j1] > 0) 
				maze1[i1][j1] = (maze1[i1][j1] + maze1[i1-1][j1]);  
			if (maze1[i1][j1-1] > 0) 
				maze1[i1][j1] = (maze1[i1][j1] + maze1[i1][j1-1]); 
		} 
	} 

int ms1=1,s1=1,ch1;
	k1=(maze1[R-1][C-1] > 0)? maze1[R-1][C-1] : 0; 
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s1);
				ms1++;
				Sleep(10);
				if(ms1==60)
				{	
					s1++;
					ms1=0;
				}
				if(s1==51)
				{ 
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s1!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch1);
			if(ch1==1)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch1==3||ch1==2||ch1==4)
			{
		printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==3)
{
 int maze2[R][C] = {{ 0, 0, 0, 0}, 
					{ 0, 0,-1, 0}, 
					{-1, 0, 0, 0}, 
					{ 0, 0, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O\n\t O O X O\n\t X O O O\n\t O O O O\n"); 
					printf("\nOPTIONS:-\n1. 6\n2. 5\n3. 4\n4. 7\n");
printf("\n*******************************************\n\n");
	int i2,j2,k2;
	if (maze2[0][0]==-1) 
		k2=0; 

	for (i2=0; i2<R; i2++) 
	{ 
		if (maze2[i2][0] == 0) 
			maze2[i2][0] = 1;  
		else
			break; 
	} 
 
	for ( i2=1; i2<C; i2++) 
	{ 
		if (maze2[0][i2] == 0) 
			maze2[0][i2] = 1; 
		else
			break; 
	} 

	for ( i2=1; i2<R; i2++) 
	{ 
		for (j2=1; j2<C; j2++) 
		{ 
			if (maze2[i2][j2] == -1) 
				continue; 
			if (maze2[i2-1][j2] > 0) 
				maze2[i2][j2] = (maze2[i2][j2] + maze2[i2-1][j2]);  
			if (maze2[i2][j2-1] > 0) 
				maze2[i2][j2] = (maze2[i2][j2] + maze2[i2][j2-1]); 
		} 
	} 

int ms2=1,s2=1,ch2;
	k2=(maze2[R-1][C-1] > 0)? maze2[R-1][C-1] : 0; 
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s2);
				ms2++;
				Sleep(10);
				if(ms2==60)
				{	
					s2++;
					ms2=0;
				}
				if(s2==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s2!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch2);
			if(ch2==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch2==1||ch2==2||ch2==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==4)
{		
 int maze3[R][C] = {{ 0,-1, 0, 0}, 
					{ 0, 0, 0,-1}, 
					{ 0, 0,-1, 0}, 
					{-1, 0,-1, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X O O\n\t O O O X\n\t O O X O\n\t X O X O\n"); 
					printf("\nOPTIONS:-\n1. 2\n2. 5\n3. 4\n4. 0\n");
printf("\n*******************************************\n\n");
	int i3,j3,k3;
	if (maze3[0][0]==-1) 
		k3=0; 

	for (i3=0; i3<R; i3++) 
	{ 
		if (maze3[i3][0] == 0) 
			maze3[i3][0] = 1;  
		else
			break; 
	} 
 
	for ( i3=1; i3<C; i3++) 
	{ 
		if (maze3[0][i3] == 0) 
			maze3[0][i3] = 1; 
		else
			break; 
	} 

	for ( i3=1; i3<R; i3++) 
	{ 
		for (j3=1; j3<C; j3++) 
		{ 
			if (maze3[i3][j3] == -1) 
				continue; 
			if (maze3[i3-1][j3] > 0) 
				maze3[i3][j3] = (maze3[i3][j3] + maze3[i3-1][j3]);  
			if (maze3[i3][j3-1] > 0) 
				maze3[i3][j3] = (maze3[i3][j3] + maze3[i3][j3-1]); 
		} 
	} 

int ms3=1,s3=1,ch3;
	k3=(maze3[R-1][C-1] > 0)? maze3[R-1][C-1] : 0; 
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s3);
				ms3++;
				Sleep(10);
				if(ms3==60)
				{	
					s3++;
					ms3=0;
				}
				if(s3==51)
				{ 
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s3!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch3);
			if(ch3==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch3==1||ch3==2||ch3==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==5)
{
 int maze4[R][C] = {{ 0,-1,-1,-1}, 
					{ 0, 0, 0,-1}, 
					{-1, 0, 0, 0}, 
					{ 0, 0, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X\n\t O O O X\n\t X O O O\n\t O O O O\n"); 
					printf("\nOPTIONS:-\n1. 6\n2. 5\n3. 4\n4. 7\n");
printf("\n*******************************************\n\n");
	int i4,j4,k4;
	if (maze4[0][0]==-1) 
		k4=0; 

	for (i4=0; i4<R; i4++) 
	{ 
		if (maze4[i4][0] == 0) 
			maze4[i4][0] = 1;  
		else
			break; 
	} 
 
	for ( i4=1; i4<C; i4++) 
	{ 
		if (maze4[0][i4] == 0) 
			maze4[0][i4] = 1; 
		else
			break; 
	} 

	for ( i4=1; i4<R; i4++) 
	{ 
		for (j4=1; j4<C; j4++) 
		{ 
			if (maze4[i4][j4] == -1) 
				continue; 
			if (maze4[i4-1][j4] > 0) 
				maze4[i4][j4] = (maze4[i4][j4] + maze4[i4-1][j4]);  
			if (maze4[i4][j4-1] > 0) 
				maze4[i4][j4] = (maze4[i4][j4] + maze4[i4][j4-1]); 
		} 
	} 

int ms4=1,s4=1,ch4;
	k4=(maze4[R-1][C-1] > 0)? maze4[R-1][C-1] : 0; 
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s4);
				ms4++;
				Sleep(10);
				if(ms4==60)
				{	
					s4++;
					ms4=0;
				}
				if(s4==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s4!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch4);
			if(ch4==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch4==1||ch4==3||ch4==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
	}
	if(a[i]==6)
	{
 int maze5[R][C] = {{ 0, 0, 0, 0}, 
					{ 0,-1, 0,-1}, 
					{ 0, 0, 0, 0}, 
					{-1,-1, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O\n\t O X O X\n\t O O O O\n\t X X O O\n"); 
					printf("\nOPTIONS:-\n1. 2\n2. 5\n3. 4\n4. 0\n");
printf("\n*******************************************\n\n");
	int i5,j5,k5;
	if (maze5[0][0]==-1) 
		k5=0; 

	for (i5=0; i5<R; i5++) 
	{ 
		if (maze5[i5][0] == 0) 
			maze5[i5][0] = 1;  
		else
			break; 
	} 
 
	for ( i5=1; i5<C; i5++) 
	{ 
		if (maze5[0][i5] == 0) 
			maze5[0][i5] = 1; 
		else
			break; 
	} 

	for ( i5=1; i5<R; i5++) 
	{ 
		for (j5=1; j5<C; j5++) 
		{ 
			if (maze5[i5][j5] == -1) 
				continue; 
			if (maze5[i5-1][j5] > 0) 
				maze5[i5][j5] = (maze5[i5][j5] + maze5[i5-1][j5]);  
			if (maze5[i5][j5-1] > 0) 
				maze5[i5][j5] = (maze5[i5][j5] + maze5[i5][j5-1]); 
		} 
	} 

int ms5=1,s5=1,ch5;
	k5=(maze5[R-1][C-1] > 0)? maze5[R-1][C-1] : 0; 
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s5);
				ms5++;
				Sleep(10);
				if(ms5==60)
				{	
					s5++;
					ms5=0;
				}
				if(s5==51)
				{ 
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s5!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch5);
			if(ch5==3)
			{
				printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch5==1||ch5==2||ch5==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
if(a[i]==0)
{
	
 int maze6[R][C] = {{ 0,-1, 0,-1}, 
					{ 0, 0, 0, 0}, 
					{ 0,-1, 0,-1}, 
					{ 0, 0, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X O X\n\t O O O O\n\t O X O X\n\t O O O O\n"); 
					printf("\nOPTIONS:-\n1. 2\n2. 5\n3. 4\n4. 0\n");
printf("\n*******************************************\n\n");
	int i6,j6,k6;
	if (maze6[0][0]==-1) 
		k6=0; 

	for (i6=0; i6<R; i6++) 
	{ 
		if (maze6[i6][0] == 0) 
			maze6[i6][0] = 1;  
		else
			break; 
	} 
 
	for ( i6=1; i6<C; i6++) 
	{ 
		if (maze6[0][i6] == 0) 
			maze6[0][i6] = 1; 
		else
			break; 
	} 

	for ( i6=1; i6<R; i6++) 
	{ 
		for (j6=1; j6<C; j6++) 
		{ 
			if (maze6[i6][j6] == -1) 
				continue; 
			if (maze6[i6-1][j6] > 0) 
				maze6[i6][j6] = (maze6[i6][j6] + maze6[i6-1][j6]);  
			if (maze6[i6][j6-1] > 0) 
				maze6[i6][j6] = (maze6[i6][j6] + maze6[i6][j6-1]); 
		} 
	} 

int ms6=1,s6=1,ch6;
	k6=(maze6[R-1][C-1] > 0)? maze6[R-1][C-1] : 0; 
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
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s6!=51)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch6);
			if(ch6==1)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm1=bm1+1;
				system("cls");
			}
			else if(ch6==3||ch6==2||ch6==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
}
}
printf("basic Round over\nPress enter");
getchar();
system("cls");
return (bm1);
}
int multi_path_inter(int e)
{

	int b[10],i,j,temp,bm2=0;
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
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O X\n");
					printf("\t O O O O O\n");
					printf("\t O O X O X\n");
					printf("\t X O X O O\n"); 
					printf("\t O X O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 8\n3. 10\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms7=1,s7=1,ch7;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s7);
				ms7++;
				Sleep(10);
				if(ms7==60)
				{	
					s7++;
					ms7=0;
				}
				if(s7==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s7!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch7);
			if(ch7==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch7==1||ch7==3||ch7==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(b[i]==1)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t X X X X O\n");
					printf("\t O O O X O\n");
					printf("\t X O O O X\n");
					printf("\t O O O O O\n"); 
					printf("\t O O X O O\n");
					printf("\nOPTIONS:-\n1. 2\n2. 1\n3. 0\n4. 3\n");
printf("\n*******************************************\n\n");

	int ms8=1,s8=1,ch8;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s8);
				ms8++;
				Sleep(10);
				if(ms8==60)
				{	
					s8++;
					ms8=0;
				}
				if(s8==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s8!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch8);
			if(ch8==3)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch8==1||ch8==2||ch8==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  	if(b[i]==2)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O\n");
					printf("\t O O O X O\n");
					printf("\t X O O O X\n");
					printf("\t O O O X O\n"); 
					printf("\t O O X O O\n");
					printf("\nOPTIONS:-\n1. 2\n2. 9\n3. 0\n4. 8\n");
printf("\n*******************************************\n\n");

	int ms9=1,s9=1,ch9;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s9);
				ms9++;
				Sleep(10);
				if(ms9==60)
				{	
					s9++;
					ms9=0;
				}
				if(s9==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s9!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch9);
			if(ch9==3)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch9==1||ch9==2||ch9==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(b[i]==3)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O X\n");
					printf("\t O O X O O\n");
					printf("\t O X O O O\n");
					printf("\t X O O X O\n"); 
					printf("\t O O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 5\n3. 10\n4. 2\n");
printf("\n*******************************************\n\n");

	int ms10=1,s10=1,ch10;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s10);
				ms10++;
				Sleep(10);
				if(ms10==60)
				{	
					s10++;
					ms10=0;
				}
				if(s10==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s10!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch10);
			if(ch10==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch10==1||ch10==2||ch10==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  	if(b[i]==4)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O O\n");
					printf("\t O X O O O\n");
					printf("\t O O O O O\n");
					printf("\t O O X O O\n"); 
					printf("\t O O O O X\n");
					printf("\nOPTIONS:-\n1. 5\n2. 1\n3. 0\n4. 3\n");
printf("\n*******************************************\n\n");

	int ms11=1,s11=1,ch11;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s11);
				ms11++;
				Sleep(10);
				if(ms11==60)
				{	
					s11++;
					ms11=0;
				}
				if(s11==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s11!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch11);
			if(ch11==3)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch11==1||ch11==2||ch11==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(b[i]==5)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O X\n");
					printf("\t O X O O O\n");
					printf("\t O O O O O\n");
					printf("\t X O X O O\n"); 
					printf("\t O X 0 O O\n");
					printf("\nOPTIONS:-\n1. 12\n2. 11\n3. 14\n4. 13\n");
printf("\n*******************************************\n\n");

	int ms12=1,s12=1,ch12;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s12);
				ms12++;
				Sleep(10);
				if(ms12==60)
				{	
					s12++;
					ms12=0;
				}
				if(s12==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s12!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch12);
			if(ch12==3)
			{
				    printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch12==1||ch12==2||ch12==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  	if(b[i]==6)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O O\n");
					printf("\t O X O O O\n");
					printf("\t X O O O O\n");
					printf("\t O X O O X\n"); 
					printf("\t X O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 5\n3. 6\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms13=1,s13=1,ch13;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s13);
				ms13++;
				Sleep(10);
				if(ms13==60)
				{	
					s13++;
					ms13=0;
				}
				if(s13==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s13!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch13);
			if(ch13==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch13==1||ch13==3||ch13==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(b[i]==7)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X O O O\n");
					printf("\t O O O O O\n");
					printf("\t X O X O O\n");
					printf("\t O O O O X\n"); 
					printf("\t O O O O O\n");
					printf("\nOPTIONS:-\n1. 4\n2. 2\n3. 7\n4. 5\n");
printf("\n*******************************************\n\n");

	int ms14=1,s14=1,ch14;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s14);
				ms14++;
				Sleep(10);
				if(ms14==60)
				{	
					s14++;
					ms14=0;
				}
				if(s14==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s14!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch14);
			if(ch14=1)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch14==3||ch14==2||ch14==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  	if(b[i]==8)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t X O O X O\n");
					printf("\t O O O X O\n");
					printf("\t X O O O X\n");
					printf("\t O O O O O\n"); 
					printf("\t O O X O O\n");
					printf("\nOPTIONS:-\n1. 0\n2. 1\n3. 5\n4. 2\n");
printf("\n*******************************************\n\n");

	int ms15=1,s15=1,ch15;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s15);
				ms15++;
				Sleep(10);
				if(ms15==60)
				{	
					s15++;
					ms15=0;
				}
				if(s15==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s15!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch15);
			if(ch15==1)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch15==3||ch15==2||ch15==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(b[i]==9)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O X O O\n");
					printf("\t O O X O O\n");
					printf("\t X O X O X\n");
					printf("\t O O O O X\n"); 
					printf("\t O O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 11\n3. 10\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms16=1,s16=1,ch16;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s16);
				ms16++;
				Sleep(10);
				if(ms16==60)
				{	
					s16++;
					ms16=0;
				}
				if(s16==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s16!=41)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch16);
			if(ch16==3)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm2=bm2+1;
				system("cls");
			}
			else if(ch16==1||ch16==2||ch16==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  
}
printf("intermediate Round over\nPress enter");
getchar();
system("cls");
return (bm2);
}
int multi_path_final(int f)
{
	int c[12],i,j,temp,bm3=0;
	srand(time(NULL));
	for(i=0;i<=12;i++)
	{
		temp=rand()%12;
		for(j=0;j<=i-1;j++)
		{
			if(temp==c[j])
			break;
		}
		if(j==i&&temp<12)
		{
			c[i]=temp;
		}
		else
		i--;
    	}
for(i=0;i<12;i++)
   {
	if(c[i]==0)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O O O O O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 15\n2. 17\n3. 10\n4. 19\n");
printf("\n*******************************************\n\n");

	int ms17=1,s17=1,ch17;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s17);
				ms17++;
				Sleep(10);
				if(ms17==60)
				{	
					s17++;
					ms17=0;
				}
				if(s17==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s17!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch17);
			if(ch17==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch17==1||ch17==3||ch17==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==1)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 11\n2. 13\n3. 17\n4. 15\n");
printf("\n*******************************************\n\n");

	int ms18=1,s18=1,ch18;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s18);
				ms18++;
				Sleep(10);
				if(ms18==60)
				{	
					s18++;
					ms18=0;
				}
				if(s18==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s18!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch18);
			if(ch18==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch18==1||ch18==2||ch18==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==2)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t O O X O X O\n");
					printf("\t O X O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 1\n3. 3\n4. 4\n");
printf("\n*******************************************\n\n");

	int ms19=1,s19=1,ch19;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s19);
				ms19++;
				Sleep(10);
				if(ms19==60)
				{	
					s19++;
					ms19=0;
				}
				if(s19==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s19!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch19);
			if(ch19==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch19==1||ch19==3||ch19==4)
			{
		    printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==3)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X O O X O\n");
					printf("\t O O O X O O\n");
					printf("\t X O X O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O X O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 2\n3. 10\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms20=1,s20=1,ch20;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s20);
				ms20++;
				Sleep(10);
				if(ms20==60)
				{	
					s20++;
					ms20=0;
				}
				if(s20==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s20!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch20);
			if(ch20==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch20==1||ch20==3||ch20==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==4)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O X\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X X\n");
					printf("\t O O X O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 11\n3. 10\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms21=1,s21=1,ch21;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s21);
				ms21++;
				Sleep(10);
				if(ms21==60)
				{	
					s21++;
					ms21=0;
				}
				if(s21==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s21!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch21);
			if(ch21==1)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch21==3||ch21==2||ch21==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==5)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O X O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 16\n2. 11\n3. 14\n4. 4\n");
printf("\n*******************************************\n\n");

	int ms22=1,s22=1,ch22;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s22);
				ms22++;
				Sleep(10);
				if(ms22==60)
				{	
					s22++;
					ms22=0;
				}
				if(s22==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s22!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch22);
			if(ch22==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch22==1||ch22==3||ch22==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==6)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O X\n");
					printf("\nOPTIONS:-\n1. 6\n2. 7\n3. 0\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms23=1,s23=1,ch23;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s23);
				ms23++;
				Sleep(10);
				if(ms23==60)
				{	
					s23++;
					ms23=0;
				}
				if(s23==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s23!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch23);
			if(ch23==3)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch23==1||ch23==2||ch23==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==7)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 16\n2. 11\n3. 10\n4. 19\n");
printf("\n*******************************************\n\n");

	int ms24=1,s24=1,ch24;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s24);
				ms24++;
				Sleep(10);
				if(ms24==60)
				{	
					s24++;
					ms24=0;
				}
				if(s24==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s24!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch24);
			if(ch24==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch24==1||ch24==2||ch24==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==8)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O X O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 6\n2. 5\n3. 8\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms25=1,s25=1,ch25;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s25);
				ms25++;
				Sleep(10);
				if(ms25==60)
				{	
					s25++;
					ms25=0;
				}
				if(s25==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s25!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch25);
			if(ch25==2)
			{
				    printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch25==1||ch25==3||ch25==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==9)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 16\n2. 11\n3. 10\n4. 19\n");
printf("\n*******************************************\n\n");

	int ms26=1,s26=1,ch26;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s26);
				ms26++;
				Sleep(10);
				if(ms26==60)
				{	
					s26++;
					ms26=0;
				}
				if(s26==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s26!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch26);
			if(ch26==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch26==1||ch26==2||ch26==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==10)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O X\n"); 
					printf("\t O O X O X O\n");
					printf("\t O O O O X O\n");
					printf("\nOPTIONS:-\n1. 3\n2. 0\n3. 4\n4. 2\n");
printf("\n*******************************************\n\n");

	int ms27=1,s27=1,ch27;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s27);
				ms27++;
				Sleep(10);
				if(ms27==60)
				{	
					s27++;
					ms27=0;
				}
				if(s27==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s27!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch27);
			if(ch27==2)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch27==1||ch27==3||ch27==4)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
			fflush(stdin);
			getchar();
			system("cls");
		}
	}
  }
  if(c[i]==11)
	{
		printf("Guess the total number of ways we could reach from the source to destination\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t O X X X O O\n");
					printf("\t O O O X O O\n");
					printf("\t X O O O X O\n");
					printf("\t O O O O O O\n"); 
					printf("\t O O X O O O\n");
					printf("\t O O O O O O\n");
					printf("\nOPTIONS:-\n1. 8\n2. 11\n3. 10\n4. 9\n");
printf("\n*******************************************\n\n");

	int ms28=1,s28=1,ch28;
	while(!kbhit() && TRUE)		
	{
	printf("     \r 00:00:%2d",s28);
				ms28++;
				Sleep(10);
				if(ms28==60)
				{	
					s28++;
					ms28=0;
				}
				if(s28==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s28!=31)
    {
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch28);
			if(ch28==4)
			{
					printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
					fflush(stdin);
				getchar();
				bm3=bm3+1;
				system("cls");
			}
			else if(ch28==1||ch28==2||ch28==3)
			{
			printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
			fflush(stdin);
			getchar();
			system("cls");
		}
		else
		{
			printf("Invalid Option\nPress Enter to Continue");
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
  

 




