#include<stdio.h>
#include<conio.h>
#define TRUE 1
#include<windows.h>
#include<string.h>
int sp(void);
int cho_cate(void);
int high_scr(void);
int basic_obv(void);
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
	char ch[20] ;
	char cho;
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
	fflush(stdin);
	scanf("%c",&cho);
	printf("%c",cho);
	if(cho=='1')
	{
		cho_cate();
	}
	if(cho=='2')
	{
		high_scr();
	}
	if(cho=='3')
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
	char ch;
	for(i=0;i<=3;i++)
	{
		printf("\n");
	}
	printf("\n\n\t\t\t\tPress 1 For Playing 10 second observer challenge.");
	printf("\n\n\t\t\t\tPress 2 For Playing Polling Round Fire.");
	printf("\n\n\t\t\t\tPress 3 For Playing Match the Following.");
	printf("\n\n\t\t\t\tPress 4 For Playing Getting the ways out.");
	printf("\n\n\t\t\t\tPress 5 For Playing Ultimate fusion.");
	printf("\nEnter your choice:- ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='1')
	{
	printf("Lets start the game\nEntering to the basic round");
	printf("\nPress enter");
	fflush(stdin);
	getchar();
	system("cls");
	basic_obv();
	printf("Okay lets end here");
	
}
}
int basic_obv()
{
	int a[7],i,j,temp,z1=0;
	srand(time(NULL));
	for(i=0;i<7;i++)
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
	if(a[i]==0)
	{
		int s=1,ms=0;
		int s1=1,ms1=0;
	int ch;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*Apple  | Cat | Dear    | Elephant  | Ant   | Around | Arrive | Bear   | Beat   | Black  *\n");
	printf("\t\t\t\t\t\t\t\t*Carry  | Car | Accept  | Tiger     | Ship  | Chair  | Child  | Eight  | Goat   | Hut    *\n");
	printf("\t\t\t\t\t\t\t\t*Coffee | Bat | Silence | Equipment | Stand | Hell   | Sand   | Salman | Puppet | Sharukh*\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'a' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  Ability   | (2)  Able     | (3)  About  | (4)  Above   | (5)  Apple         *\n");
	printf("\t\t\t\t\t\t\t*(6)  According | (7)  Ant      | (8)  Around | (9)  Act     | (10) Arrive        *\n");
	printf("\t\t\t\t\t\t\t*(11) Activity  | (12) Actually | (13) Add    | (14) Address | (15) Administration*\n");
	printf("\t\t\t\t\t\t\t*(16) Admit     | (17) Accept   | (18) Affect | (19) After   | (20) Again         *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-1,5,6,9,3     (2):-18,15,6,9,2\n");
	printf("\t\t\t\t\t\t\t(3):-5,7,8,10,17   (4):-3,6,12,15,17\n");
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
				if(s1==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s1!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch);
			    if(ch==3)
		        	{
		        		z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch==1||ch==2||ch==4)
		        	{
		        		z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
	if(a[i]==1)
	{
		int s2=1,ms2=0;
		int s3=1,ms3=0;
	int ch1;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t2.Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t************************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*Answer | Press    | Century | Soup      | Table | Chair    | Zoom | Why    | Wide   | Anything*\n");
	printf("\t\t\t\t\t\t\t\t*Dance  | Dance    | Danger  | Cake      | Ear   | Complete | Game | Ice    | Baby   | Gate    *\n");
	printf("\t\t\t\t\t\t\t\t*Belt   | Baseball | Silence | Equipment | Stand | Hell     | Bull | Salman | Puppet | Katrina *\n");
	printf("\t\t\t\t\t\t\t\t********************************************************************************************** *\n\n\n");
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
				if(s2==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'c' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  Candidate | (2)  Capital   | (3)  Car       | (4)  Card     | (5)  Care      *\n");
	printf("\t\t\t\t\t\t\t*(6)  Career    | (7)  Complete  | (8)  Case      | (9)  Catch    | (10) Cause     *\n");
	printf("\t\t\t\t\t\t\t*(11) Cell      | (12) Center    | (13) Central   | (14) Century  | (15) Certain   *\n");
	printf("\t\t\t\t\t\t\t*(16) Certainly | (17) Chair     | (18) Challenge | (19) Chance   | (20) Cake      *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-7,14,17,20   (2):-2,5,12,18\n");
	printf("\t\t\t\t\t\t\t(3):-5,8,13,19    (4):-3,11,15,17\n");
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
				if(s3==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s3!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch1);
			    if(ch1==1)
		        	{
				      	z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch1==2||ch1==3||ch1==4)
		        	{
		             	z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
		int s4=1,ms4 =0;
		int s5=1,ms5=0;
	int ch2;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t3.Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t************************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*Add   | dark     | bean    | beautiful | last  | early    | fault | few    | different  | case*\n");
	printf("\t\t\t\t\t\t\t\t*later  | half     | is      | keep      | main  | ladder   | lonely| idea   | miss       |ring    *\n");
	printf("\t\t\t\t\t\t\t\t********************************************************************************************** *\n\n\n");
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
				if(s4==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'L' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  land      | (2)  language  | (3)  large     | (4)  last     | (5)  lonely      *\n");
	printf("\t\t\t\t\t\t\t*(6)  laugh     | (7)  law       | (8)  lawyer    | (9)  later    | (10) lay     *\n");
	printf("\t\t\t\t\t\t\t*(11) lead      | (12) leader    | (13) learn     | (14) least    | (15) leave   *\n");
	printf("\t\t\t\t\t\t\t*(16) left      | (17) leg       | (18) legal     | (19) ladder   | (20) long     *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-2,6,9,14   (2):-4,5,9,19\n");
	printf("\t\t\t\t\t\t\t(3):-6,7,11,15    (4):-7,13,15,17\n");
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
				if(s5==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s5!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch2);
			    if(ch2==2)
		        	{
				      z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch2==1||ch2==3||ch2==4)
		        	{
		             	z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
		int s6=1,ms6=0;
		int s7=1,ms7=0;
	int ch3;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t4.Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t************************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*sheep  | wait     | boy     | who       | zoo   | husband  | very  | those  | sit        | rob*\n");
	printf("\t\t\t\t\t\t\t\t*ball   | when     | basket  | object    | make  | which    | key   | lamp   | family     |bad    *\n");
	printf("\t\t\t\t\t\t\t\t********************************************************************************************** *\n\n\n");
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
				if(s6==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'B' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  believe   | (2)  ball      | (3)  best      | (4)  better   | (5)  between      *\n");
	printf("\t\t\t\t\t\t\t*(6)  beyond    | (7)  bad       | (8)  bill      | (9)  billion  | (10) basket     *\n");
	printf("\t\t\t\t\t\t\t*(11) black     | (12) blood     | (13) blue      | (14) board    | (15) body   *\n");
	printf("\t\t\t\t\t\t\t*(16) book      | (17) born      | (18) both      | (19) box      | (20) boy    *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-2,5,9,15   (2):-5,10,15,18\n");
	printf("\t\t\t\t\t\t\t(3):-2,7,10,20    (4):-6,12,13,17\n");
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
				if(s7==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s7!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch3);
			    if(ch3==3)
		        	{
				      	z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch3==1||ch3==2||ch3==4)
		        	{
		             	z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
		int s8=1,ms8=0;
		int s9=1,ms9=0;
	int ch4;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t5.Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t************************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*door   | everyone | gentleman  | dear      | lazy  | lead     | just       | knife  | hall       | minute*\n");
	printf("\t\t\t\t\t\t\t\t*hello  | dog      | pick       | mine      | rise  | do       | surprise   | this   | uncle      |yes    *\n");
	printf("\t\t\t\t\t\t\t\t********************************************************************************************** *\n\n\n");
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
				if(s8==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'D' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  dark      | (2) data       | (3)  daughter  | (4)  door     | (5)  dead      *\n");
	printf("\t\t\t\t\t\t\t*(6)  do        | (7)  dog       | (8)  debate    | (9)  decade   | (10) decide     *\n");
	printf("\t\t\t\t\t\t\t*(11) decision  | (12) deep      | (13) defence   | (14) dear     | (15) democrate   *\n");
	printf("\t\t\t\t\t\t\t*(16) democratic| (17) describe  | (18) design    | (19) despite  | (20) details    *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-1,5,7,13   (2):-4,6,7,14\n");
	printf("\t\t\t\t\t\t\t(3):-2,3,7,15    (4):-5,9,10,12\n");
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
				if(s9==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s9!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch4);
			    if(ch4==2)
		        	{
				      	z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch4==1||ch4==3||ch4==4)
		        	{
		             	z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
		int s10=1,ms10=0;
		int s11=1,ms11=0;
	int ch5;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t6.Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t************************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*young  | voice    | son    | when       | time  | which    | put    | inside   | now        | man*\n");
	printf("\t\t\t\t\t\t\t\t*king   | ice      | into   | interest   | job   | lot      | our    | important| bullet     |riffle    *\n");
	printf("\t\t\t\t\t\t\t\t********************************************************************************************** *\n\n\n");
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
				if(s10==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'I' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  image     | (2) imagine     | (3)  impact    | (4)  improtant   | (5)  improve     *\n");
	printf("\t\t\t\t\t\t\t*(6)  ice       | (7)  include    | (8)  including | (9)  increase    | (10) indeed     *\n");
	printf("\t\t\t\t\t\t\t*(11) important | (12) individual | (13) industry  | (14) information | (15) inside   *\n");
	printf("\t\t\t\t\t\t\t*(16) instead   | (17) institution| (14) interest  | (19) interestiing| (20) international    *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-3,5,8,12   (2):-1,5,10,16\n");
	printf("\t\t\t\t\t\t\t(3):-6,11,15,18    (4):-7,10,13,18\n");
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
				if(s11==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s11!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch5);
			    if(ch5==3)
		        	{
				      	z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(ch5==1||ch5==2||ch5==4)
		        	{
		             	z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
		int s12=1,ms12=0;
		int s13=1,ms13=0;
	int ch6;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t7.Observe the objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t************************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*australia  | canada    | dehradun  | egypt       | singapore | france   | delhi    | bombay     | bangkok    | leh*\n");
	printf("\t\t\t\t\t\t\t\t*ladakh     | kashmir   | punjab    | amritsar    | kolkata   | delhi    | thailand | north korea| south korea|switzerland    *\n");
	printf("\t\t\t\t\t\t\t\t********************************************************************************************* *\n\n\n");
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
				if(s12==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown cities name\n\t\t\t\t\t\t\t\thow many cities are in India\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-12   (2):-10\n");
	printf("\t\t\t\t\t\t\t(3):-8    (4):-13\n");
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
				if(s13==31)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s13!=31)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&ch6);
			    if(ch6==2)
		        	{
				      	z1=z1+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z1);
	                    printf("press enter to continue");
	                    fflush(stdin);
		             	getchar();
				     	system("cls");
		        	}
		     	else if(ch6==1||ch6==3||ch6==4)
		        	{
		             	z1=z1+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z1);
		             	printf("press enter to continue");
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
if(z1>=5)
{
	system("cls");
	printf(" Congratulation!\nYou have passed the basic round\nThis the Intermediate Round. There will be 10 questions and you have to answer 8 questions correctly to\nmove to succceeding round.\nThe time limit is 40 seconds.\nSo open you find and lets start the game.\n");
	getchar();
	system("cls");
}
else
{
	system("cls");
	int main();
	return main();
}

	int b[10],z2=0;
	srand(time(NULL));
	for(i=0;i<10;i++)
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
	for(i=0;i<10;i++)
{
	if(b[i]==0)
	{
		int s14=1,ms14=0;
		int s15=1,ms15=0;
	int a1;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*Aday   | art        | among   | night    | good    | morning | nest    | evening    | south   | north  *\n");
	printf("\t\t\t\t\t\t\t\t*east   | west       | up      | down     | near    | sky     | galaxy  | astronauts | rockets | scientist    *\n");
	printf("\t\t\t\t\t\t\t\t*fuels  | satellites | research| centre   | Statics *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s14==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'N' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  name   | (2)  nation    | (3)  national | (4)  natural | (5)  nature | (6)  night   *\n");
	printf("\t\t\t\t\t\t\t*(7)  nearly | (8)  necessary | (9)  nest     | (10) network | (11) never  | (12) new     *\n");
	printf("\t\t\t\t\t\t\t*(13) news   | (14) newspaper | (15) next     | (16) nice    | (17) night  | (18) no      *\n");
	printf("\t\t\t\t\t\t\t*(19) none   | (20) nor       |(21) north     | (22) not     | (23) near   | (24) nothing *\n");
	printf("\t\t\t\t\t\t\t*(25) notice                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-1,8,15,21   (2):-8,12,17,20\n");
	printf("\t\t\t\t\t\t\t(3):-6,9,21,23   (4):-9,12,15,22\n");
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
			    scanf(" %d",&a1);
			    if(a1==3)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a1==1||a1==2||a1==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s16=1,ms16=0;
		int s17=1,ms17=0;
	int a2;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*Add   | board   | boat    | condition  | monkey | dead  | anytime  | man     | is   | necessary  *\n");
	printf("\t\t\t\t\t\t\t\t*for   | all     | mind    | desk       | gold   | mix   | juice    | opposite| let  | others     *\n");
	printf("\t\t\t\t\t\t\t\t*island| hour    | minute  | second     | watch *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s16==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'M' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  magazine | (2)  main    | (3)  minute    | (4)  major   | (5)  majority | (6)  make   *\n");
	printf("\t\t\t\t\t\t\t*(7)  mind     | (8)  mix     | (9)  management| (10) manager | (11) man      | (12) market     *\n");
	printf("\t\t\t\t\t\t\t*(13) marriage | (14) material| (15) matter    | (16) may     | (17) monkey   | (18) me      *\n");
	printf("\t\t\t\t\t\t\t*(19) mean     | (20) measure | (21) media     | (22) medical | (23) meet     | (24) meeting *\n");
	printf("\t\t\t\t\t\t\t*(25) member                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-2,5,15,18,23   (2):-3,7,8,11,17\n");
	printf("\t\t\t\t\t\t\t(3):-5,9,12,15,25   (4):-6,9,12,18,23\n");
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
				if(s17==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s17!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a2);
			    if(a2==2)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a2==1||a2==3||a2==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s18=1,ms18=0;
		int s19=1,ms19=0;
	int a3;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*birth   | teenage  | young      | time   | die  | jump    | teeth    | slow   |steady   | win   *\n");
	printf("\t\t\t\t\t\t\t\t*toungue | moment   | money      | laugh  | cry  | kitchen | large    | stay   | happy   | live  *\n");
	printf("\t\t\t\t\t\t\t\t*true    | birthday | anniversary| tall   | push *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s18==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown english words, \n\t\t\t\t\t\t\t\thow many words start with T letter\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-5   (2):-8\n");
	printf("\t\t\t\t\t\t\t(3):-7   (4):-6\n");
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
				if(s19==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s19!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a3);
			    if(a3==4)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a3==1||a3==3||a3==2)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s20=1,ms20=0;
		int s21=1,ms21=0;
	int a4;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* title    | to   | abstract  | introduction | methodology | hint  | literature  | review  |house    | newspaper *\n");
	printf("\t\t\t\t\t\t\t\t* reference| home | life      | development  | cycle       | speed | fast        | health  |accident | hurt      *\n");
	printf("\t\t\t\t\t\t\t\t* kill     | leg  | fracture  | hospital     | serious *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s20==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'H' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  hand    | (2)  hang    | (3)  hurt      | (4)  happy   | (5)  hard     | (6) have     *\n");
	printf("\t\t\t\t\t\t\t*(7)  he      | (8)  head    | (9)  health    | (10) hear    | (11) heart    | (12) heat    *\n");
	printf("\t\t\t\t\t\t\t*(13) heavy   | (14) help    | (15) her       | (16) here    | (17) herself  | (18) hospital*\n");
	printf("\t\t\t\t\t\t\t*(19) him     | (20) himself | (21) hint      | (22) history | (23) hit      | (24) hold *\n");
	printf("\t\t\t\t\t\t\t*(25) home                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-2,8,12,17,24   (2):-5,9,12,19,21\n");
	printf("\t\t\t\t\t\t\t(3):-3,9,18,21,25   (4):-6,12,16,19,22\n");
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
				if(s21==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s21!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a4);
			    if(a4==3)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a4==1||a4==2||a4==3)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s22=1,ms22=0;
		int s23=1,ms23=0;
	int a5;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* crow   | peacock    | dove         | sparrow   | goose   | lemon     | pigeon  | turkey  | hawk  | bangladesh *\n");
	printf("\t\t\t\t\t\t\t\t* raven  | parrot     | england      | seagull   | swallow | blackbird | India   | robin   | swan  | owl        *\n");
	printf("\t\t\t\t\t\t\t\t* hello  | woodpecker | south africa | falcon    | condor *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s22==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown english words, \n\t\t\t\t\t\t\t\thow many words are country names \n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-5   (2):-6\n");
	printf("\t\t\t\t\t\t\t(3):-4   (4):-7\n");
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
				if(s23==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s23!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a5);
			    if(a5==2)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a5==1||a5==3||a5==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s24=1,ms24=0;
		int s25=1,ms25=0;
	int a6;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* dog     | cat     | cow    | sheep   | red      | duck   | hen   | rabbit    | pig   | turkey *\n");
	printf("\t\t\t\t\t\t\t\t* chicken | donkey  | goat   | ilama   | squirrel | snail  | role  | chameleon | dear  | raccon        *\n");
	printf("\t\t\t\t\t\t\t\t* RAM     | antelope| snake  | bat     | parrot *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s24==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'R' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  RAM      | (2) rather    | (3)  reach       | (4)  read     | (5)  ready    | (6) real     *\n");
	printf("\t\t\t\t\t\t\t*(7)  rabbit   | (8) realize   | (9)  really      | (10) reason   | (11) receive  | (12) recent  *\n");
	printf("\t\t\t\t\t\t\t*(13) recently | (14) recognize| (15) record      | (16) red      | (17) reduce   | (18) reflect *\n");
	printf("\t\t\t\t\t\t\t*(19) role     | (20) relate   | (21) relationship| (22) religious| (23) remain   | (24) remember *\n");
	printf("\t\t\t\t\t\t\t*(25) remove                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-1,7,16,19   (2):-1,5,12,21\n");
	printf("\t\t\t\t\t\t\t(3):-5,15,18,23   (4):-6,16,20,21\n");
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
				if(s25==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s25!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a6);
			    if(a6==1)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a6==2||a6==3||a6==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s26=1,ms26=0;
		int s27=1,ms27=0;
	int a7;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* tiger    | leopard | eagle    | egg          | turtle  | octopus  | frog   | whale     | crab    | fish  *\n");
	printf("\t\t\t\t\t\t\t\t* lobster  | shark   | seahorse | hippopotamus | squid   | dolphin  | swan   | starfish  | seagull | eel *\n");
	printf("\t\t\t\t\t\t\t\t* sea lion | buffalo | camel    | wild cat     | elephant *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s26==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'S' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  safe     | (2) same     | (3)  save     | (4)  shark    | (5)  scene   | (6) school     *\n");
	printf("\t\t\t\t\t\t\t*(7)  science  | (8) swan     | (9)  score    | (10) sea lion | (11) season  | (12) sea horse  *\n");
	printf("\t\t\t\t\t\t\t*(13) second   | (14) section | (15) security | (16) see      | (17) seek    | (18) star fish *\n");
	printf("\t\t\t\t\t\t\t*(19) sell     | (20) send    | (21) senior   | (22) sense    | (23) series  | (24) serious *\n");
	printf("\t\t\t\t\t\t\t*(25) squid                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-5,8,12,15,21,23   (2):-6,12,18,20,21,12,22\n");
	printf("\t\t\t\t\t\t\t(3):-4,8,10,12,18,25   (4):-3,5,10,14,19,21\n");
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
				if(s27==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s27!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a7);
			    if(a7==3)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a7==1||a7==2||a7==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s28=1,ms28=0;
		int s29=1,ms29=0;
	int a8;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t*****************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* attack   | base    | basket   | fish         | double  | single   | dust   | feather  | ever   | fold  *\n");
	printf("\t\t\t\t\t\t\t\t* fool     | smart   | hand     | intelligent  | head    | heaven   | fan    | earn     | key    | lock  *\n");
	printf("\t\t\t\t\t\t\t\t* ocena    | sea     | free     | pond         | waterfall *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
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
				if(s28==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'F' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  family   | (2) far      | (3)  fast     | (4)  father   | (5)  feather  | (6) federal *\n");
	printf("\t\t\t\t\t\t\t*(7)  feel     | (8) feeling  | (9)  fool     | (10) field    | (11) fight    | (12) figure *\n");
	printf("\t\t\t\t\t\t\t*(13) fold     | (14) film    | (15) final    | (16) finally  | (17) financial| (18) find   *\n");
	printf("\t\t\t\t\t\t\t*(19) fan      | (20) finger  | (21) finish   | (22) fire     | (23) firm     | (24) first  *\n");
	printf("\t\t\t\t\t\t\t*(25) fish                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-5,9,13,19,25   (2):-4,6,12,15,23\n");
	printf("\t\t\t\t\t\t\t(3):-3,8,12,15,21   (4):-6,8,11,13,19\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s29);
				ms29++;
				Sleep(10);
				if(ms29==60)
				{
					
					s29++;
					ms29=0;
				}
				if(s29==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s29!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a8);
			    if(a8==1)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a8==2||a8==3||a8==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s30=1,ms30=0;
		int s31=1,ms31=0;
	int a9;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t*****************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* pair   | read    | write    | concentration| prince  | study    | sell   | vegetable | venus  | tie   *\n");
	printf("\t\t\t\t\t\t\t\t* rule   | join    | devil    | king         | prime   | venus    | earth  | mars      | jupiter| saturn  *\n");
	printf("\t\t\t\t\t\t\t\t* neptune| pluto   | uranus   | planets      | solar  *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s30);
				ms30++;
				Sleep(10);
				if(ms30==60)
				{
					
					s30++;
					ms30=0;
				}
				if(s30==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tNow, find out the common words starting from 'P' from the current showing words\n\t\t\t\t\t\t\t\tand the previous shown words and choose the correct option\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\t*(1)  people  | (2) per      | (3)  perform  | (4)  performance | (5)  perhaps  | (6) period *\n");
	printf("\t\t\t\t\t\t\t*(7)  prince  | (8) personal | (9)  phone    | (10) planets     | (11) pick     | (12) picture *\n");
	printf("\t\t\t\t\t\t\t*(13) piece   | (14) place   | (15) plan     | (16) pair        | (17) play     | (18) player   *\n");
	printf("\t\t\t\t\t\t\t*(19) PM      | (20) prime   | (21) police   | (22) policy      | (23) politcal | (24) pluto  *\n");
	printf("\t\t\t\t\t\t\t*(25) poor                                                                              *\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-7,10,16,20,24   (2):-9,12,15,18,22\n");
	printf("\t\t\t\t\t\t\t(3):-8,11,17,22,25   (4):-3,6,12,15,19\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s31);
				ms31++;
				Sleep(10);
				if(ms31==60)
				{
					
					s31++;
					ms31=0;
				}
				if(s31==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s31!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a9);
			    if(a9==1)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a9==2||a9==3||a9==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
		int s32=1,ms32=0;
		int s33=1,ms33=0;
	int a10;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 25 words between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t*****************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t* job    | inside  | outside  | needle   | man     | jug    | knee    | movie   | series | kind    *\n");
	printf("\t\t\t\t\t\t\t\t* jung   | temple  | churchy  | road     | nursery | king   | hostel  | college | joker  | truck  *\n");
	printf("\t\t\t\t\t\t\t\t* cycle  | kite    | train    | know     | ship  *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s32);
				ms32++;
				Sleep(10);
				if(ms32==60)
				{
					
					s32++;
					ms32=0;
				}
				if(s32==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English words, \n\t\t\t\t\t\t\t\thow \n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-4  (2):-5\n");
	printf("\t\t\t\t\t\t\t(3):-6   (4):-3\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s33);
				ms33++;
				Sleep(10);
				if(ms33==60)
				{
					
					s33++;
					ms33=0;
				}
				if(s33==41)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s33!=41)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&a10);
			    if(a10==2)
		        	{
		        		z2=z2+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z2);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(a10==1||a10==3||a10==4)
		        	{
		        		z2=z2+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z2);
		             	printf("press enter to continue");
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
if(z2>=8)
{
	system("cls");
	printf(" Congratulation!\nYou have passed the intermediate round\nThis the final Round. There will be 12 questions and you have to answer 10 questions correctly to\nmove to succceeding round.\nThe time limit is 50 seconds.\nSo open you find and lets start the game.\n");
	getchar();
	system("cls");
}
else
{
	system("cls");
	int main();
	return main();
}
	int c[12],z3=0;
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
		if(c[i]==0)
	{
		int s34=1,ms34=0;
		int s35=1,ms35=0;
	int d1;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*lead       | activity | laboratry | chemistry | physics  | mathematics | english  | computer | science   | mechanical  *\n");
	printf("\t\t\t\t\t\t\t\t*electrical | Civil    | petrolium | hindi     | biology  | indian      | institute| of       | technology| national    *\n");
	printf("\t\t\t\t\t\t\t\t*blue       | green    | red       | white     | wood     | wine        | kite     | hut      | horse     | apple*\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s34);
				ms34++;
				Sleep(10);
				if(ms34==60)
				{
					
					s34++;
					ms34=0;
				}
				if(s34==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words start with W letter\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-3    (2):-4\n");
	printf("\t\t\t\t\t\t\t(3):-5   (4):-6\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s35);
				ms35++;
				Sleep(10);
				if(ms35==60)
				{
					
					s35++;
					ms35=0;
				}
				if(s35==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s35!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d1);
			    if(d1==1)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d1==2||d1==3||d1==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s36=1,ms36=0;
		int s37=1,ms37=0;
	int d2;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*assistant | teacher  | cloud   | mountain  | farm     | before   | after  | cloth   | pant    | shirt  *\n");
	printf("\t\t\t\t\t\t\t\t*coat      | shoes    | drink   | water     | milk     | juice    | mango  | carrot  | exact   | correct *\n");
	printf("\t\t\t\t\t\t\t\t*wrong     | marks    | dinner  | lunch     | breakfast| dear     | grapes | tomato  | potato  | happy   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s36);
				ms36++;
				Sleep(10);
				if(ms36==60)
				{
					
					s36++;
					ms36=0;
				}
				if(s36==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words start with C letter\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-3    (2):-4\n");
	printf("\t\t\t\t\t\t\t(3):-5   (4):-6\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s37);
				ms37++;
				Sleep(10);
				if(ms37==60)
				{
					
					s37++;
					ms37=0;
				}
				if(s37==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s37!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d2);
			    if(d2==3)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d2==1||d2==2||d2==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s38=1,ms38=0;
		int s39=1,ms39=0;
	int d3;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*andhra pradesh | arunachal pradesh | assam  | chhattigarh  | goa     | gujraat       | haryana     | himachal pradesh | judge   | karnataka  *\n");
	printf("\t\t\t\t\t\t\t\t*bihar          | madhya pradesh    | kerala | maharashtra  | manipur | tea           | mizoram     | nagaland         | odisha  | punjab *\n");
	printf("\t\t\t\t\t\t\t\t*rajasthan      | sikkim            | total  | telangana    | tripura | uttar pradesh | uttarakhand | west bengal      | america | india   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s38);
				ms38++;
				Sleep(10);
				if(ms38==60)
				{
					
					s38++;
					ms38=0;
				}
				if(s38==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words are state names\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-25    (2):-26\n");
	printf("\t\t\t\t\t\t\t(3):-24   (4):-27\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s39);
				ms39++;
				Sleep(10);
				if(ms39==60)
				{
					
					s39++;
					ms39=0;
				}
				if(s39==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s39!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d3);
			    if(d3==1)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d3==2||d3==3||d3==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s40=1,ms40=0;
		int s41=1,ms41=0;
	int d4;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*hyderabad | itanagar        | dispur  | patna     | rose     | panaji    | gandhinagar | cat     | shimla       | ranchi     *\n");
	printf("\t\t\t\t\t\t\t\t*bengaluru | triuvanatpuram  | bhopal  | mumbai    | imphal   | shilong   | aizawal     | kohima  | bhubanehswar | chandigarh *\n");
	printf("\t\t\t\t\t\t\t\t*jaipur    | gangtok         | chennai | hyderabad | agartala | lucknow   | dehradun    | kolkata | california   | new delhi   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s40);
				ms40++;
				Sleep(10);
				if(ms40==60)
				{
					
					s40++;
					ms40=0;
				}
				if(s40==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words are capiatl name of states\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-25    (2):-26\n");
	printf("\t\t\t\t\t\t\t(3):-27   (4):-28\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s41);
				ms41++;
				Sleep(10);
				if(ms41==60)
				{
					
					s41++;
					ms41=0;
				}
				if(s41==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s41!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d4);
			    if(d4==3)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d4==1||d4==2||d4==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s42=1,ms42=0;
		int s43=1,ms43=0;
	int d5;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*crow   | peacock  | dove    | sparrow  | goose   | ostrich  | literature   | review   | paper | newspaper     *\n");
	printf("\t\t\t\t\t\t\t\t*for    | all      | bowl    | desk     | gold    | mix      | juice        | opposite | let   | others *\n");
	printf("\t\t\t\t\t\t\t\t*island | hour     | swallow | blackbird| penguin | tripura  | uttar pradesh| kolkata  | India | America   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s42);
				ms42++;
				Sleep(10);
				if(ms42==60)
				{
					
					s42++;
					ms42=0;
				}
				if(s42==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words are birds name\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-12  (2):-15\n");
	printf("\t\t\t\t\t\t\t(3):-9   (4):-8\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s43);
				ms43++;
				Sleep(10);
				if(ms43==60)
				{
					
					s43++;
					ms43=0;
				}
				if(s43==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s43!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d5);
			    if(d5==3)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d5==1||d5==2||d5==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s44=1,ms44=0;
		int s45=1,ms45=0;
	int d6;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*attack | base    | basket      | card     | double | single | dust   | general | ever  | fold   *\n");
	printf("\t\t\t\t\t\t\t\t*fool   | smart   | intelligent | hand     | head   | pond   | kill   | earn    | key   | lock   *\n");
	printf("\t\t\t\t\t\t\t\t*ocean  | sea     | river       | waterfall| lakes  | hen    | horse  | apple   | wind  | wine   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s44);
				ms44++;
				Sleep(10);
				if(ms44==60)
				{
					
					s44++;
					ms44=0;
				}
				if(s44==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words are water sources\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-4  (2):-5\n");
	printf("\t\t\t\t\t\t\t(3):-6  (4):-8\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s45);
				ms45++;
				Sleep(10);
				if(ms45==60)
				{
					
					s45++;
					ms45=0;
				}
				if(s45==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s45!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d6);
			    if(d6==3)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d6==1||d6==2||d6==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s46=1,ms46=0;
		int s47=1,ms47=0;
	int d7;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*dog    | cat      | cow     | sheep   | rabbit   | duck   | turtle     | octopus    | frog   | whale   *\n");
	printf("\t\t\t\t\t\t\t\t*crab   | fish     | lobster | shark   | seahorse | snail  | mouse      | chameleon  | dear   | raccon   *\n");
	printf("\t\t\t\t\t\t\t\t*moose  | starfish | seagull | eel     | sealion  | stork  | woodpecker | whitestork | falcon | condor   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s46);
				ms46++;
				Sleep(10);
				if(ms46==60)
				{
					
					s46++;
					ms46=0;
				}
				if(s46==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words are water animal names\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-14  (2):-15\n");
	printf("\t\t\t\t\t\t\t(3):-16  (4):-18\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s47);
				ms47++;
				Sleep(10);
				if(ms47==60)
				{
					
					s47++;
					ms47=0;
				}
				if(s47==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s47!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d7);
			    if(d7==1)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d7==3||d7==2||d7==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s48=1,ms48=0;
		int s49=1,ms49=0;
	int d8;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*dog    | cat      | cow     | sheep   | rabbit   | duck   | turtle     | octopus    | frog   | whale   *\n");
	printf("\t\t\t\t\t\t\t\t*crab   | fish     | lobster | shark   | seahorse | snail  | mouse      | chameleon  | dear   | raccon   *\n");
	printf("\t\t\t\t\t\t\t\t*moose  | starfish | seagull | eel     | sealion  | stork  | woodpecker | whitestork | falcon | condor   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s48);
				ms48++;
				Sleep(10);
				if(ms48==60)
				{
					
					s48++;
					ms48=0;
				}
				if(s48==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown English Words,\n\t\t\t\t\t\t\t\thow many words are non-water animal names\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-10  (2):-11\n");
	printf("\t\t\t\t\t\t\t(3):-15  (4):-12\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s49);
				ms49++;
				Sleep(10);
				if(ms49==60)
				{
					
					s49++;
					ms49=0;
				}
				if(s49==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s49!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d8);
			    if(d8==2)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d8==3||d8==1||d8==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s50=1,ms50=0;
		int s51=1,ms51=0;
	int d9;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*delhi     | mumbai   | nainital | mussorie| gangtok  | hisar      | hariyana  | faridabad  | jaipur  | patna   *\n");
	printf("\t\t\t\t\t\t\t\t*ahmedabad | gujraat  | surat    | bhopal  | haridwar | roorkee    | jammu     | kashmir    | srinagar| kerala   *\n");
	printf("\t\t\t\t\t\t\t\t*talangana | kasol    | punjab   | patiala | amritsar | chandigarh | gurgoan   | indore     | meerut  | mathura   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s50);
				ms50++;
				Sleep(10);
				if(ms50==60)
				{
					
					s50++;
					ms50=0;
				}
				if(s50==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown cities name,\n\t\t\t\t\t\t\t\thow many cities are situated in uttarakhand\n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-3  (2):-4\n");
	printf("\t\t\t\t\t\t\t(3):-5  (4):-7\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s51);
				ms51++;
				Sleep(10);
				if(ms51==60)
				{
					
					s51++;
					ms51=0;
				}
				if(s51==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s51!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d9);
			    if(d9==3)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d9==1||d9==2||d9==4)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s52=1,ms52=0;
		int s53=1,ms53=0;
	int d10;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*delhi     | mumbai   | nainital | mussorie| gangtok  | hisar      | kufri     | faridabad  | jaipur  | patna   *\n");
	printf("\t\t\t\t\t\t\t\t*ahmedabad | gujraat  | surat    | bhopal  | haridwar | roorkee    | jammu     | kashmir    | srinagar| kerala   *\n");
	printf("\t\t\t\t\t\t\t\t*talangana | kasol    | punjab   | patiala | amritsar | chandigarh | gurgoan   | indore     | meerut  | mathura   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s52);
				ms52++;
				Sleep(10);
				if(ms52==60)
				{
					
					s52++;
					ms52=0;
				}
				if(s52==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown cities name,\n\t\t\t\t\t\t\t\thow many cities are hill station \n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-3  (2):-4\n");
	printf("\t\t\t\t\t\t\t(3):-5  (4):-7\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s53);
				ms53++;
				Sleep(10);
				if(ms53==60)
				{
					
					s53++;
					ms53=0;
				}
				if(s53==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s53!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d10);
			    if(d10==4)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d10==1||d10==2||d10==3)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s54=1,ms54=0;
		int s55=1,ms55=0;
	int d11;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*delhi     | mumbai   | nainital | mussorie   | gangtok  | hisar      | kufri     | faridabad  | jaipur  | patna   *\n");
	printf("\t\t\t\t\t\t\t\t*ahmedabad | gujraat  | surat    | bhopal     | haridwar | roorkee    | jammu     | kashmir    | srinagar| kerala   *\n");
	printf("\t\t\t\t\t\t\t\t*talangana | kasol    | punjab   |lakshadweep | amritsar | chandigarh | gurgoan   | indore     | meerut  | mathura   *\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s54);
				ms54++;
				Sleep(10);
				if(ms54==60)
				{
					
					s54++;
					ms54=0;
				}
				if(s54==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown cities name,\n\t\t\t\t\t\t\t\thow many cities are union territories \n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-4  (2):-5\n");
	printf("\t\t\t\t\t\t\t(3):-6  (4):-7\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s55);
				ms55++;
				Sleep(10);
				if(ms55==60)
				{
					
					s55++;
					ms55=0;
				}
				if(s55==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s55!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d11);
			    if(d11==4)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d11==1||d11==4||d11==3)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
		int s56=1,ms56=0;
		int s57=1,ms57=0;
	int d12;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t Observe the 30 objects name between 10 Seconds.\n\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n");
	printf("\t\t\t\t\t\t\t\t*Add   | board   | damage  | condition  | enough | dead  | anytime   | education | is   | duplicate  *\n");
	printf("\t\t\t\t\t\t\t\t*for   | all     | dog     | desk       | gold   | mix   | juice     | opposite  | let  | daggle     *\n");
	printf("\t\t\t\t\t\t\t\t*island| hour    | diamond | second     | watch  | fuels | satellites| research  | door | statics*\n");
	printf("\t\t\t\t\t\t\t\t******************************************************************************************\n\n\n");
	while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s56);
				ms56++;
				Sleep(10);
				if(ms56==60)
				{
					
					s56++;
					ms56=0;
				}
				if(s56==11)
				{
				system("cls");
				
				break;
				
				}
			}
			fflush(stdin);
			system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tIn the previous shown words,\n\t\t\t\t\t\t\t\thow many english words are start with D letter and ends with E letter \n\n");
	printf("\t\t\t\t\t\t\t***********************************************************************************\n");
	printf("\t\t\t\t\t\t\tOptions:-\n\n");
	printf("\t\t\t\t\t\t\t(1):-3  (2):-5\n");
	printf("\t\t\t\t\t\t\t(3):-15  (4):-4\n");
		while(!kbhit() && TRUE)
		
	{
		printf("     \r 00:00:%2d",s57);
				ms57++;
				Sleep(10);
				if(ms57==60)
				{
					
					s57++;
					ms57=0;
				}
				if(s57==51)
				{
					printf("\nYour time is up Press any key to switch\n");
					getchar();
				system("cls");
				break;
			    }
	}
            if(s57!=51)
              {
	            printf("\n Enter the choice:- ");
			    scanf(" %d",&d12);
			    if(d12==1)
		        	{
		        		z3=z3+1;
		        		printf("\nWOW, you answered it right. You have been awarded by 1 point\n");
	                    printf("The total point is %d",z3);
	                    printf("press enter to continue");
				     	fflush(stdin);
				     	getchar();
			        	system("cls");
		        	}
		     	else if(d12==2||d12==4||d12==3)
		        	{
		        		z3=z3+0;
		             	printf("Incorrect Answer!!!\n You have scored 0 points\nThe total point is %d",z3);
		             	printf("press enter to continue");
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
if(z3>=10)
{
	system("cls");
	printf(" Congratulation!\nYou have passed the all the Round successfully.\n");
	getchar();
	system("cls");
}
else
{
	system("cls");
	int main();
	return main();
}
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

