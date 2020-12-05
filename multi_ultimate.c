#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#define TRUE 1
int multi_ultimate(int,int);
int multi_ultimate_bas(int);
int multi_ultimate_inter(int);
int multi_ultimate_final(int);
int main()
{
	int p1,p2;
	printf("lets start");
	getchar();
	system("cls");
	multi_ultimate(p1,p2);
	printf("%d%d",p1,p2);
}
int multi_ultimate(int p1,int p2)
{
	p1=0,p2=0;
	int j1=0,j2=0,j3=0,j4=0,j5=0,j6=0;
	printf("Okay lets start will player 1\nPress Enter");
	getchar();
	system("cls");
	multi_ultimate_bas(j1);
	system("cls");
	printf("Okay lets start will player 2");
	getchar();
	system("cls");
	multi_ultimate_bas(j2);
	if(j1>=5&&j2>=5)
	{
		system("cls");
		printf("Congratulations You both have successfully cleared the round\nLets move to intermediate round\nPress enter to move forward");
		getchar();
		system("cls");
		multi_ultimate_inter(j3);
		system("cls");
		printf("Lets start with player 2\nPress enter to start the game");
		multi_ultimate_inter(j4);
		system("cls");
		printf("press enter to check the scores");
		getchar();
		system("cls");
		if(j3>=7&&j4>=7)
	{
		system("cls");
		printf("Congratulations You both have successfully cleared the round\nLets move to final round\nPress enter to move forward");
		getchar();
		system("cls");
		multi_ultimate_final(j5);
		system("cls");
		printf("Lets start with player 2\nPress enter to start the game");
		multi_ultimate_final(j6);
		system("cls");
		printf("press enter to check the scores");
		if(j5>=10&&j6>=10)
		{
				system("cls");
			printf("Congratulations\n\nYou both have cleared the round\n Press enter to see which one of have received the title of quizhilic");
			getchar();
			system("cls");
		}
		if(j5>=10&&j6<10)
		{
				system("cls");
			printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
			return main();
		}
			if(j5<10&&j6>=10)
	{
			system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\nAs Player 2 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
		return main();
		
	}
	if(j5<10&&j6<10)
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
	if(j1>=5&&j2<5)
	{
		system("cls");
		printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
	if(j1<5&&j2>=5)
	{
		system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
		if(j1<5&&j2<5)
	{
			system("cls");
		printf("Sorry!!\nBoth are not eligible\n");
		int main();
		return main();
	}
	
	if(j3>=7&&j4<7)
	{
		system("cls");
		printf("Congratulations to Player 1 for winning this round. Sorry player 2 you haven't passes the round\n As Player 1 has won this game so,Press enter to move to main menu");
		int main();
		return main();
	}
	if(j3<7&&j4>=7)
	{
		system("cls");
		printf("Congratulations to Player 2 for winning this round. Sorry player 1 you haven't passes the round\nAs Player 2 has won this game so,Press enter to move to main menu");
			getchar();
			system("cls");
			int main();
		return main();
		
	}
		if(j3<7&&j4<7)
	{
			system("cls");
		printf("Sorry you both havent cleared the round.!!\nPress enter to return to main menu");
		getchar();
		system("cls");
			int main();
		return main();
	}
	p1=j1+j3+j5;
	p2=j2+j4+j6;
	printf("Okay lets end here");
}
int multi_ultimate_bas(int k)
{
	int u[7],i,j,temp,t1=0;//t2=0,t3=0,total=0;
	srand(time(NULL));
	for(i=0;i<7;i++)
	{
		temp=rand()%7;
		for(j=0;j<=i-1;j++)
		{
			if(temp==u[j])
			break;
		}
		if(j==i)
		{
			u[i]=temp;
		}
		else
		i--;
	}
for(i=0;i<7;i++)
   {
	if(u[i]==0)
	{
		int s=1,ms=0;
	    int ch;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tQues.:- How many percentage of Indians believe that\n");
        printf("\t\t\t\t\t\t         Teen Tigaada Kaam Bigaada.\n\n");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) (60-70)%%\t(2) (40-50)%%\n");
        printf("\t\t\t\t\t\t(3) (50-60)%%\t(4) (20-30)%%\n\n\n");    
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
			    if(ch==2)
		        	{
		        	 printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
		        	 t1=t1+1;
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch==1||ch==3||ch==4)
		        	{
		        		
		             	t1=t1+0;
		                 printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
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
if(u[i]==1)
{
		int s1=1,ms1=0;
	int ch1;
printf("Relate the phases:\n1. Singer			a. Akshay Kumar\n2. Dancer			b. Arijit Singh\n3. Actor			c. Remo D'Souza\n4. Writer			d. Charles Dikens\n");
printf("\nOptions\n1. : 1(a)-3(b)-4(c)-2(d)\n2. : 2(a)-4(c)-1(b)-3(d)\n3. : 1(a)-4(c)-2(d)-3(c)\n4. : 4(d)-2(c)-1(b)-3(a)\n");
printf("***********************************\n");
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
					printf("Your time is up\nPress any key to switch\n");
					
					getchar();
				system("cls");
				break;
				}
			}
if(s1!=51)
{
	        printf("\n Enter the choice:- ");
			scanf("%d",&ch1);
			if(ch1==4)
			{
				    t1=t1+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				    fflush(stdin);
				    getchar();
			        system("cls");
					
			}
			
			else if(ch1==1||ch1==2||ch1==3)
			{
			t1=t1+0;
		    printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
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
if(u[i]==2)
	{
		int s2=1,ms2=0;
	    int ch2;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tWhere does today come before yesterday?\n\n\n ");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) calender\t(2) mobile \n");
        printf("\t\t\t\t\t\t(3) dictionary\t(4) NOT\n\n\n");    
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
			    if(ch2==3)
		        	{
				    t1=t1+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				    fflush(stdin);
				    getchar();
			        system("cls");
					
		        	}
		     	else if(ch2==1||ch2==2||ch2==4)
		        	{
		             		t1=t1+0;
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
if(u[i]==3)
	{
		int s3=1,ms3=0;
	    int ch3;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\twho is the god of cricket in India?\n\n\n ");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) sachin tendulkar\t(2) mahendra singh dhoni \n");
        printf("\t\t\t\t\t\t(3) Rohit Sharma    \t(4) virat kohli\n\n\n");    
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
			    if(ch3==1)
		        	{
				      t1=t1+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(ch3==3||ch3==2||ch3==4)
		        	{
		             		t1=t1+0;
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
if(u[i]==4)
	{
		int s4=1,ms4=0;
	    int ch4;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\twho is the god of football in World?\n\n\n ");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) Diego Maradona \t(2) Ronaldo \n");
        printf("\t\t\t\t\t\t(3) messi     \t(4) Neymar\n\n\n");    
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
			    if(ch4==1)
		        	{
				      t1=t1+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(ch4==3||ch4==2||ch4==4)
		        	{
		             		t1=t1+0;
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
if(u[i]==5)
	{
		int s5=1,ms5=0;
	    int ch5;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of Indians believe that Modi\n");
        printf("\t\t\t\t\t\t\t        Government is development government.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (50-60)%%    (2) (60-70)%%\n");
        printf("\t\t\t\t\t\t\t(3) (70-80)%%    (4) (40-50)%%\n\n\n\n");   
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
			    if(ch5==2)
		        	{
				      t1=t1+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(ch5==3||ch5==1||ch5==4)
		        	{
		             		t1=t1+0;
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
if(u[i]==6)
	{
		int s6=1,ms6=0;
	    int ch6;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("Guess the player:\n1. Cricket			(a) 12\n2. Chess			(b) 2\n3. Kabbadi			(c) 11\n4. Kho-Kho			(d) 7\n");
printf("\nOptions:\n1. : 3(d)-2(b)-4(a)-1(c)\n2. : 2(a)-4(b)-1(d)-3(c)\n3. : 1(c)-2(d)-3(b)-4(a)\n4. : 3(d)-4(b)-1(c)-2(d)\n");
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
				      t1=t1+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(ch6==3||ch6==2||ch6==4)
		        	{
		             		t1=t1+0;
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
return (t1);
}
int multi_ultimate_inter(int l)
{
int v[10],i,j,t2=0,temp;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		temp=rand()%10;
		for(j=0;j<=i-1;j++)
		{
			if(temp==v[j])
			break;
		}
		if(j==i)
		{
			v[i]=temp;
		}
		else
		i--;
	}
	for(i=0;i<10;i++)
{
	if(v[i]==0)
	{
		int s7=1,ms7=0;
	    int b1;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tQues.:- In Indian What is the percentage of Divorce?\n\n");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) (0-1)%%\t(2) (1-2)%%\n");
        printf("\t\t\t\t\t\t(3) (2-3)%%\t(4) (3-4)%%\n\n\n");    
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
			    scanf(" %d",&b1);
			    if(b1==1)
		        	{
				      t2=t2+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b1==3||b1==2||b1==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==1)
	{
		int s8=1,ms8=0;
	    int b2;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tQues.:- what is the financial capital of India?\n\n");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) Chennai \t(2) Delhi\n");
        printf("\t\t\t\t\t\t(3) Mumbai  \t(4) Hyderabad\n\n\n");    
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
			    scanf(" %d",&b2);
			    if(b2==3)
		        	{
				      t2=t2+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b2==2||b2==1||b2==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==2)
	{
		int s9=1,ms9=0;
	    int b3;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tQues.:- how many states in India?\n\n");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) 27 \t(2) 28\n");
        printf("\t\t\t\t\t\t(3) 29  \t(4) 30\n\n\n");    
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
			    scanf(" %d",&b3);
			    if(b3==2)
		        	{
				      t2=t2+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b3==3||b3==1||b3==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==3)
	{
		int s10=1,ms10=0;
	    int b4;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    	printf("Antonyms:\n1. Entrance			a. Expert\n2. Hasten			b. Conclusion\n3. Feeble			c. Fresh\n4. Lazy				d. Dawdle");
    	printf("\n\nOptions\n1. 1(b)-4(c)-2(d)-3(a)\n2. 3(a)-1(c)-2(d)-4(b)\n3. 4(c)-2(a)-1(b)-3(d)\n4. 1(c)-2(d)-3(a)-4(d)\n");
        printf("***********************************\n"); 
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
			    scanf(" %d",&b4);
			    if(b4==1)
		        	{
				      t2=t2+1;
		        printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b4==3||b4==2||b4==4)
		        	{
		             		t2=t2+0;
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
		if(v[i]==4)
	{
		int s11=1,ms11=0;
	    int b5;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf("\t\t\t\t\t\t\tQues.:- How many percentage people In India, face problem when the\n");
        printf("\t\t\t\t\t\t\t        government announced ''NOTE BANDI''.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (60-70)%%\t(2) (70-90)%%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%%\t(4) (20-30)%%\n\n\n");  
        printf("***********************************\n"); 
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
			    scanf(" %d",&b5);
			    if(b5==3)
		        	{
				      t2=t2+1;
		        printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b5==1||b5==2||b5==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==5)
	{
		int s12=1,ms12=0;
	    int b6;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf("\t\t\t\t\t\t\tQues.:- How many districts are in India?? \n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) 640 \t(2) 739\n");
        printf("\t\t\t\t\t\t\t(3) 552 \t(4) 593 \n\n\n");  
        printf("***********************************\n"); 
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
			    scanf(" %d",&b6);
			    if(b6==2)
		        	{
				        t2=t2+1;
		                printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b6==1||b6==3||b6==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==6)
	{
		int s13=1,ms13=0;
	    int b7;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("Guess the Capitals:\n1. Belgium\t\t\ta. Tripoli\n2. China\t\t\tb. Beijing\n3. Egypt\t\t\td. Brussels\n4. Libya\t\t\tc. Cairo");
	    printf("\n\nOptions\n1. 3(c)-2(b)-1(d)-4(c)\n2. 2(d)-3(a)-4(b)-1(c)\n3. 1(d)-4(a)-3(c)-2(b)\n4. 3(a)-4(b)-1(c)-2(b)\n");
        printf("***********************************\n");
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
			    scanf(" %d",&b7);
			    if(b7==3)
		        	{
				      t2=t2+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b7==1||b7==2||b7==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==7)
	{
		int s14=1,ms14=0;
	    int b8;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("what is the name of fastest car in India?? ");
	    printf("\n\nOptions\n1. bugatti \n2. mercedes \n3. Tuatara \n4. Ferrari\n");
        printf("***********************************\n");
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
			    scanf(" %d",&b8);
			    if(b8==3)
		        	{
				      t2=t2+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b8==1||b8==2||b8==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==8)
	{
		int s15=1,ms15=0;
	    int b9;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\tQues.:- What is the Golden City of India?? \n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) Amritsar  \t(2) Jaislmer\n");
        printf("\t\t\t\t\t\t\t(3) Jaipur    \t(4) Chandigarh \n\n\n");  
        printf("***********************************\n"); 
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
			    scanf(" %d",&b9);
			    if(b9==2)
		        	{
				      t2=t2+1;
		        printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b9==1||b9==3||b9==4)
		        	{
		             		t2=t2+0;
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
	if(v[i]==9)
	{
		int s16=1,ms16=0;
	    int b10;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\tQues.:- What is the Pink City of India?? \n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) Amritsar  \t(2) Jaislmer\n");
        printf("\t\t\t\t\t\t\t(3) Jaipur    \t(4) Chandigarh \n\n\n");  
        printf("***********************************\n"); 
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
			    scanf(" %d",&b10);
			    if(b10==3)
		        	{
				      t2=t2+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(b10==1||b10==2||b10==4)
		        	{
		             		t2=t2+0;
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
return (t2);
}
int multi_ultimate_final(int m)
{
int w[12],i,j,temp,t3=0;
	srand(time(NULL));
	for(i=0;i<12;i++)
	{
		temp=rand()%12;
		for(j=0;j<=i-1;j++)
		{
			if(temp==w[j])
			break;
		}
		if(j==i)
		{
			w[i]=temp;
		}
		else
		i--;
	}

for(i=0;i<12;i++)
{
	if(w[i]==0)
	{
		int s17=1,ms17=0;
	    int c1;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
         printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people are graduates \n");
        printf("\t\t\t\t\t\t\t        according to the census 2011?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (7-8)%%\t(2) (8-9)%%\n");
        printf("\t\t\t\t\t\t\t(3) (5-6)%%\t(4) (2-3)%%\n\n\n");    
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
			    scanf(" %d",&c1);
			    if(c1==2)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c1==1||c1==3||c1==4)
		        	{
		             	t3=t3+0;
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
	if(w[i]==1)
	{
		int s18=1,ms18=0;
	    int c2;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
         printf("\t\t\t\t\t\t\tQues.:- Who is the president of India \n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) Pranav Mukherji\t(2) Narendra Modi\n");
        printf("\t\t\t\t\t\t\t(3) Indira Gandhi  \t(4) Ramnath Kovind\n\n\n");    
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
			    scanf(" %d",&c2);
			    if(c2==4)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c2==1||c2==2||c2==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==2)
	{
		int s19=1,ms19=0;
	    int c3;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
         printf("\t\t\t\t\t\t\tQues.:- Who is the first prime minister of India \n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) Jawahar Lal Nehru \t(2) Rajiv Gandhi \n");
        printf("\t\t\t\t\t\t\t(3) Indira Gandhi    \t(4) Motilal Nehru\n\n\n");    
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
			    scanf(" %d",&c3);
			    if(c3==1)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c3==4||c3==2||c3==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==3)
	{
		int s20=1,ms20=0;
	    int c4;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("Guess the Location National Parks :\n1. Jim Corbett\t\t\ta. West Bengal\n2. Kazairanga\t\t\tb. Rajasthan\n3. Ranthambore\t\t\tc. Uttrakhand\n4. Sunderbans\t\t\td. Assam");
	    printf("\n\nOptions\n1. 1(c)-2(d)-3(b)-4(a)\n2. 4(c)-3(a)-2(d)-1(c)\n3. 3(a)-2(b)-1(c)-4(d)\n4. 2(d)-3(b)-1(c)-4(b)\n");
        printf("***********************************\n"); 
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
			    scanf(" %d",&c4);
			    if(c4==1)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c4==4||c4==2||c4==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==4)
	{
		int s21=1,ms21=0;
	    int c5;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("Guess the Youtubers:\n1. Titu Mama\t\t\ta. Carry Minati\n2. Kamla\t\t\tb. BB ki Vines\n3. Mostly Sane\t\t\tc. Prajakta\n4. Papi Guidya\t\t\td. Ashish Chanchalani");
	    printf("\n\nOptions\n1. 4(a)-3(c)-2(d)-1(b)\n2. 1(b)-2(a)-3(c)-4(a)\n3. 4(a)-3(b)-1(c)-2(d)\n4. 3(c)-2(d)-1(b)-4(a)\n");
        printf("***********************************\n"); 
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
			    scanf(" %d",&c5);
			    if(c5==4)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c5==1||c5==2||c5==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==5)
	{
		int s22=1,ms22=0;
	    int c6;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
       printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people wants Rahul Gandhi \n");
        printf("\t\t\t\t\t\t\t        as our next prime minister?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (1-10)%%\t (2) (40-50)%%\n");
        printf("\t\t\t\t\t\t\t(3) (20-30)%%\t(4) (10-15)%%\n\n\n");  
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
			    scanf(" %d",&c6);
			    if(c6==1)
		        	{
				      t3=t3+1;
		        printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c6==4||c6==2||c6==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==6)
	{
		int s23=1,ms23=0;
	    int c7;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- What percentage of the population suffers from mental illness in US?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (1-10)%%      (2) (10-20)%%\n");
        printf("\t\t\t\t\t\t\t(3) (20-30)%%     (4) (30-40)%%\n\n\n\n");
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
			    scanf(" %d",&c7);
			    if(c7==2)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c7==4||c7==1||c7==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==7)
	{
		int s24=1,ms24=0;
	    int c8;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In which year, the first train ran in India ?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) 1852     (2) 1872\n");
        printf("\t\t\t\t\t\t\t(3) 1873    (4) 1853\n\n\n\n");
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
			    scanf(" %d",&c8);
			    if(c8==4)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c8==2||c8==1||c8==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==8)
	{
		int s25=1,ms25=0;
	    int c9;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- Who wrote the constitution of India ?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) JawaharLal Nehru    (2) B.R. Ambedkar \n");
        printf("\t\t\t\t\t\t\t(3) Motilal Nehru       (4) Mahatma Gandhi\n\n\n\n");
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
			    scanf(" %d",&c9);
			    if(c9==2)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c9==4||c9==1||c9==3)
		        	{
		             	t3=t3+0;
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
	if(w[i]==9)
	{
		int s26=1,ms26=0;
	    int c10;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    	printf("Guess the Dialogue:\n1.""Insaan ko Dibbe mei tab hone chahiye jab voh mar chuka ho""		a. K3G\n2.""Tussi jaa rahe ho""							b. ANAND\n3.""Humare yahan ghari ki sui character decide karti hain""			c. ZNMD\n4.""Zindagi Badi Honi Chahiye Lambi nahi""					d. PINK");
	printf("\n\nOptions\n1. 1(c)-2(d)-4(a)-3(b)\n2. 4(a)-1(c)-2(b)-3(d)\n3. 1(c)-2(a)-3(d)-4(b)\n4. 6(b)-1(c)-2(a)-3(d)\n");
printf("***********************************\n");
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
			    scanf(" %d",&c10);
			    if(c10==3)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c10==4||c10==1||c10==2)
		        	{
		             	t3=t3+0;
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
	if(w[i]==10)
	{
		int s27=1,ms27=0;
	    int c11;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How much percentage of popolulation of india thinks\n");
        printf("\t\t\t\t\t\t\t        Shushant Singh Rajput was murdered?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (55-60)%%\t(2) (90-95)%%\n");
        printf("\t\t\t\t\t\t\t(3) (75-80)%%\t(4) (85-90)%%\n\n\n"); 
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
			    scanf(" %d",&c11);
			    if(c11==4)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c11==3||c11==1||c11==2)
		        	{
		             	t3=t3+0;
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
	if(w[i]==11)
	{
		int s28=1,ms28=0;
	    int c12;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 	printf("Guess what they like most to eat:\n1. Mice			a. Milk\n2. Cow			b. Carrot\n3. Rabbit		c. Grass\n4. Cat			d. Cheese");
	printf("\n\nOptions\n1. 1(b)-4(a)-3(c)-2(d)\n2. 2(c)-3(b)-1(d)-4(a)\n3. 4(a)-3(c)-1(b)-2(d)\n4. 3(c)-2(d)-1(a)-3(b)\n");
    printf("***********************************\n");
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
			    scanf(" %d",&c12);
			    if(c12==2)
		        	{
				      t3=t3+1;
		        	printf("OKAY!!\nYOUR ANSWER HAS BEEN LOCKED.PRESS ENTER TO CONTINUE");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
					
		        	}
		     	else if(c12==3||c12==1||c12==4)
		        	{
		             	t3=t3+0;
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
return (t3);
}
