// C++ program to count number of paths in a maze 
// with obstacles. 
#include<stdio.h> 
#define R 4 
#define C 4 
#define TRUE 1
void countPaths() 
{ 
		int maze[R][C] = {{0, 0, 0, 0}, 
					{0, -1, 0, 0}, 
					{-1, 0, 0, 0}, 
					{0, 0, 0, 0}};
					printf("Guess the total number of ways we could reach from the source to destonation\nYOu just have to move forward and downward direction\n\n"); 
					printf("\t0 0 0 0\n\t0-1 0 0\n\t-1 0 0 0\n\t0 0 0 0\n"); 
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
				if(s==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
				}
			}
if(s!=31)
{
	        printf("\n Enter the choice:- ");
			scanf(" %d",&ch);
			if(ch==3)
			{
					printf("\nCorrect answer\nPress Enter to move to next question");
					fflush(stdin);
				getchar();
				system("cls");
			}
			else if(ch==1||ch==2||ch==4)
			{
			printf("Incorrect Answer!!!\nPress Enter to continue");
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
 


int main() 
{ 

	countPaths(); 
	return 0; 
} 

