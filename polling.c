#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void basic_pol(void);
int main()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t*********************************\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t||     Lets start the game     ||\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t|| Entering to the basic round ||\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t*********************************");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t     Press enter Key to continue the Game:- ");
	getchar();
	system("cls");
	basic_pol();
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tOkay lets end here");
	return 0;
}
void basic_pol()
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch==1||ch==3||ch==4)
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
	if(a[i]==2)
	{
		int s1=1,ms1=0;
	int ch1;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of Indians believe that Modi\n");
        printf("\t\t\t\t\t\t\t        Government is development government.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (50-60)%%    (2) (60-70)%%\n");
        printf("\t\t\t\t\t\t\t(3) (70-80)%%    (4) (40-50)%%\n\n\n\n");
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
			    if(ch1==2)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch1==1||ch1==3||ch1==4)
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
     	if(a[i]==3)
	{
		int s2=1,ms2=0;
	    int ch2;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of people believe that\n");
        printf("\t\t\t\t\t\t\t        Online study is better than offline study.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (55-60)%%\t(2) (50-60)%%\n");
        printf("\t\t\t\t\t\t\t(3) (60-65)%%\t(4) (10-20)%%\n\n\n");    
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
			    if(ch2==2)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch2==1||ch2==3||ch2==4)
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
	if(a[i]==4)
	{
		int s3=1,ms3=0;
    	int ch3;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- Kitne % Bharatiyon ko school ke dino mein apne\n");
        printf("\t\t\t\t\t\t\t        teacher se pyaar hua hai?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (60-70)%%     (2) (70-75)%%\n");
        printf("\t\t\t\t\t\t\t(3) (75-80)%%     (4) (80-85)%%\n\n\n\n");
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
			    if(ch3==3)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch3==1||ch3==2||ch3==4)
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
     	if(a[i]==5)
	{
		int s4=1,ms4=0;
	    int ch4;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of male user of\n");
        printf("\t\t\t\t\t\t\t        Instagram in India.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (60-70)%%\t(2) (70-85)%%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%%\t(4) (20-30)%%\n\n\n");    
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch4==2||ch4==3||ch4==4)
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
	if(a[i]==6)
	{
		int s5=1,ms5=0;
	int ch5;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- Kitne Pratishat Indian Cricket viewers sochte hai if they move\n");
        printf("\t\t\t\t\t\t\t        from watching the match, India would lose.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (40-50)%%     (2) (30-40)%%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%%     (4) (20-25)%%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch5==1||ch5==3||ch5==4)
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
if(a[i]==0)
	{
		int s6=1,ms6=0;
	    int ch6;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of Student believe that\n");
        printf("\t\t\t\t\t\t\t        Tukka in exam will save them.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (35-60)%%\t(2) (50-60)%%\n");
        printf("\t\t\t\t\t\t\t(3) (55-70)%%\t(4) (45-50)%%\n\n\n");    
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
			    if(ch6==4)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm1=bm1+1;
			        	system("cls");
		        	}
		     	else if(ch6==1||ch6==3||ch6==2)
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
}
if(bm1>=5)
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\tCONGRATULATIONS!!!!\n\t\t\t\t\t\t\t\t\tYou have Successfully completed the basic round\n");
	printf("\t\t\t\t\t\t\t\t\t\t\tPress enter to start the INTERMEDIATE ROUND");
	getchar();
	system("cls");
	printf("Welcome to the intermediate round\nThis round will have 10 Questions and the time limit is 40 seconds.\nBEST OF LUCK!!!\nPress Enter to continue\n");
	getchar();
	system("cls");
	int b[10],bm2=0;
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
		int s7=1,ms7=0;
	    int ch7;
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
			    scanf(" %d",&ch7);
			    if(ch7==1)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch7==2||ch7==3||ch7==4)
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
	if(b[i]==1)
	{
		int s8=1,ms8=0;
	int ch8;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of love marriages are successful \n");
        printf("\t\t\t\t\t\t\t        in India according to IPSOS survey 2013?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (50-60)%%     (2) (60-70)%%\n");
        printf("\t\t\t\t\t\t\t(3) (70-80)%%     (4) (40-50)%%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch8==1||ch8==2||ch8==4)
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
     	if(b[i]==2)
	{
		int s9=1,ms9=0;
	    int ch9;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of people are unemployed\n");
        printf("\t\t\t\t\t\t\t        in India according to 2020?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (1-5)%%\t  (2) (5-10)%%\n");
        printf("\t\t\t\t\t\t\t(3) (10-15)%%\t(4) (15-20)%%\n\n\n");    
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
			    if(ch9==2)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch9==1||ch9==3||ch9==4)
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
	if(b[i]==3)
	{
		int s10=1,ms10=0;
    	int ch10;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people boycott Chinese products?\n");
        printf("\t\t\t\t\t\t\t        Chinese products?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (60-70)%%     (2) (70-75)%%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%%     (4) (80-90)%%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch10==1||ch10==2||ch10==3)
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
     	if(b[i]==4)
	{
		int s11=1,ms11=0;
	    int ch11;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage people In India, face problem when the\n");
        printf("\t\t\t\t\t\t\t        government announced ''NOTE BANDI''.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (60-70)%%\t(2) (70-90)%%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%%\t(4) (20-30)%%\n\n\n");    
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch11==2||ch11==1||ch11==4)
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
	if(b[i]==5)
	{
		int s12=1,ms12=0;
	int ch12;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of people are totally \n");
        printf("\t\t\t\t\t\t\t        based on farming in world?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (50-60)%%    (2) (65-75)%%\n");
        printf("\t\t\t\t\t\t\t(3) (80-85)%%    (4) (90-95)%%\n\n\n\n");
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
			    if(ch12==1)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch12==2||ch12==3||ch12==4)
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
if(b[i]==6)
	{
		int s13=1,ms13=0;
	    int ch13;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people are graduates \n");
        printf("\t\t\t\t\t\t\t        according to the census 2011?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (7-8)%%\t(2) (8-9)%%\n");
        printf("\t\t\t\t\t\t\t(3) (5-6)%%\t(4) (2-3)%%\n\n\n");    
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch13==1||ch13==3||ch13==4)
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
	    if(b[i]==7)
	{
		int s14=1,ms14=0;
	    int ch14;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people wants Rahul Gandhi \n");
        printf("\t\t\t\t\t\t\t        as our next prime minister?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (1-10)%%\t (2) (40-50)%%\n");
        printf("\t\t\t\t\t\t\t(3) (20-30)%%\t(4) (10-15)%%\n\n\n");    
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
			    if(ch14==1)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch14==2||ch14==3||ch14==4)
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
	if(b[i]==8)
	{
		int s15=1,ms15=0;
	int ch15;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- What percentage of the population suffers from mental illness in US?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (1-10)%%      (2) (10-20)%%\n");
        printf("\t\t\t\t\t\t\t(3) (20-30)%%     (4) (30-40)%%\n\n\n\n");
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
			    if(ch15==2)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch15==1||ch15==3||ch15==4)
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
if(b[i]==9)
	{
		int s16=1,ms16=0;
	    int ch16;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How much percentage of popolulation of india thinks\n");
        printf("\t\t\t\t\t\t\t        Shushant Singh Rajput was murdered?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (55-60)%%\t(2) (90-95)%%\n");
        printf("\t\t\t\t\t\t\t(3) (75-80)%%\t(4) (85-90)%%\n\n\n");    
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
			    if(ch16==4)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm2=bm2+1;
			        	system("cls");
		        	}
		     	else if(ch16==1||ch16==3||ch16==2)
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
     }    
  }
  else
  {
  	printf("SORRY!!\nYou are not applicable for the next round\nBetter luck next time!!\nPress enter to return to main menu!!");
	getchar();
	system("cls");
  }

  if(bm2>=7)
{
	printf("CONGRATUALTIONS!!!!!\nYou are qualified to the last round!\nPress Enter to Continue");
	getchar();
	system("cls");
	printf("Welcome to the last round!! This round will contain 12 questions. The time limit will be of 50 seconds.\nThis is the round where the QUIZIHILIC title will be decided");
	printf("\nPress enter to continue");
	getchar();
	system("cls");
	int c[12],bm3=0;
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
		int s17=1,ms17=0;
	    int ch17;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tQues.:- 11.	In India, how many percentage of employees are satisfied\n");
        printf("\t\t\t\t\t\t        with their current job?\n\n");
        printf("\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t(1) (60-70)%%\t(2) (40-50)%%\n");
        printf("\t\t\t\t\t\t(3) (70-80)%%\t(4) (20-30)%%\n\n\n");    
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
			    if(ch17==3)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch17==1||ch17==2||ch17==4)
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
	if(c[i]==1)
	{
		int s18=1,ms18=0;
	int ch18;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of Indian are worried about\n");
        printf("\t\t\t\t\t\t\t        fake news on media?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (50-60)%%    (2) (60-70)%%\n");
        printf("\t\t\t\t\t\t\t(3) (70-85)%%    (4) (80-95)%%\n\n\n\n");
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
			    if(ch18==2)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch18==1||ch18==3||ch18==4)
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
     	if(c[i]==2)
	{
		int s19=1,ms19=0;
	    int ch19;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of employees are satisfied\n");
        printf("\t\t\t\t\t\t\t        with their current salary?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (10-20)%%\t(2) (20-30)%%\n");
        printf("\t\t\t\t\t\t\t(3) (30-40)%5\t(4) (40-50)%%\n\n\n");    
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch19==1||ch19==3||ch19==4)
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
	if(c[i]==3)
	{
		int s20=1,ms20=0;
    	int ch20;
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people lost their job\n");
        printf("\t\t\t\t\t\t\t        in COVID-19 pandemic?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (10-20)%%     (2) (20-30)%%\n");
        printf("\t\t\t\t\t\t\t(3) (30-40)%%     (4) (80-85)%%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch20==1||ch20==3||ch20==4)
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
     	if(c[i]==4)
	{
		int s21=1,ms21=0;
	    int ch21;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- In India, how many percentage of people think that ''NOTE BANDI'' \n");
        printf("\t\t\t\t\t\t\t        is good for India?\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (40-50)%%\t(2) (50-60)%%\n");
        printf("\t\t\t\t\t\t\t(3) (60-70)%%\t(4) (70-80)%%\n\n\n");    
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
			    if(ch21==3)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch21==2||ch21==1||ch21==4)
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
	if(c[i]==5)
	{
		int s22=1,ms22=0;
	int ch22;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- India ke village mein kitne Percent logo ki pehli pasand\n");
        printf("\t\t\t\t\t\t\t        aj bhi Hero Honda Spendor hai.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (40-50)%%     (2) (30-40)%%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%%     (4) (20-25)%%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch22==1||ch22==3||ch22==4)
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
if(c[i]==6)
	{
		int s23=1,ms23=0;
	    int ch23;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- Canada mein kitne pratishat Bhartiya nagrik\n");
        printf("\t\t\t\t\t\t\t        Job dundhne jatein hai.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (35-60)%%\t(2) (5-10)%%\n");
        printf("\t\t\t\t\t\t\t(3) (15-25)%%\t(4) (25-30)%%\n\n\n");    
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
			    if(ch23==2)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch23==1||ch23==3||ch23==4)
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
	    if(c[i]==7)
	{
		int s24=1,ms24=0;
	    int ch24;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of male user of\n");
        printf("\t\t\t\t\t\t\t        Instagram in India.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (60-70)%\t(2) (70-85)%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%\t(4) (20-30)%\n\n\n");    
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
			    if(ch24==1)
		        	{
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch24==2||ch24==3||ch24==4)
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
	if(c[i]==8)
	{
		int s25=1,ms25=0;
	int ch25;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- Kitne Pratishat Indian Cricket viewers sochte hai if they move\n");
        printf("\t\t\t\t\t\t\t        from watching the match, India would lose.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (40-50)%     (2) (30-40)%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%     (4) (20-25)%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch25==1||ch25==3||ch25==4)
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
if(c[i]==9)
	{
		int s26=1,ms26=0;
	    int ch26;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of Student believe that\n");
        printf("\t\t\t\t\t\t\t        Tukka in exam will save them.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (35-60)%\t(2) (50-60)%\n");
        printf("\t\t\t\t\t\t\t(3) (55-70)%\t(4) (45-50)%\n\n\n");    
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch26==1||ch26==3||ch26==2)
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
	    if(c[i]==10)
	{
		int s27=1,ms27=0;
	    int ch27;
	    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- Kitne Pratishat Indian Cricket viewers sochte hai if they move\n");
        printf("\t\t\t\t\t\t\t        from watching the match, India would lose.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (40-50)%     (2) (30-40)%\n");
        printf("\t\t\t\t\t\t\t(3) (50-60)%     (4) (20-25)%\n\n\n\n");
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch27==1||ch27==3||ch27==4)
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
if(c[i]==11)
	{
		int s28=1,ms28=0;
	    int ch28;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\tQues.:- How many percentage of Student believe that\n");
        printf("\t\t\t\t\t\t\t        Tukka in exam will save them.\n\n");
        printf("\t\t\t\t\t\t\tOptions:-\n\n");
        printf("\t\t\t\t\t\t\t(1) (35-60)%\t(2) (50-60)%\n");
        printf("\t\t\t\t\t\t\t(3) (55-70)%\t(4) (45-50)%\n\n\n");    
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
				      	printf("\nCorrect answer\nPress Enter to move to next question");
				     	fflush(stdin);
			        	getchar();
			         	bm3=bm3+1;
			        	system("cls");
		        	}
		     	else if(ch28==1||ch28==3||ch28==2)
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
     }    
  }
  else
{
	printf("SORRY!!!!!\nYou are not applicable for the next round\nBetter luck next time!!\nPress enter to return to main menu and try your luck");
}getchar();
	system("cls");
}
