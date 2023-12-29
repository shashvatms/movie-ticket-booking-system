#include <stdio.h>
int choice1(void);
int movieavail(void);
void reservation(void);
struct user{
	char name[25];
	int phone[15];
	char password[20];	
	int age;
};
struct moviedetails{
	int seat;
	int id;
};
int id2=1000;
int price = 500;
int count=0;
struct user newuser[300];
struct moviedetails person[300];
int main(){
		
	 
	 printf("******************************************** Registration ************************************************\n");
	 printf("enter your name: ");
	 scanf(" %19[^\n]%*[^\n]",&newuser[count].name);
	 printf("enter phone no :");
	 scanf("%d",&newuser[count].phone);
	 printf("enter age :");
	 scanf("%d",&newuser[count].age);
	 printf("enter your password :");
	 scanf("%s",&newuser[count].password);
	 system("cls");
	 printf("\nRegistration successful!\n");
    printf(" %s !! you are successfully registered\n", newuser[count].name);
	int x=1;
	while(x>0){
	
	int choice=choice1();
	
	switch(choice){
		case 1:
			movieavail();
			break;
		case 2:
			reservation();
			payment();
			break;
		case 3:
			cancelticket();
			break;
		case 4:
			exit(0);		
	}

	}
}

int choice1(void)

{

	
	int choice;
	printf("                 Simple Movie Ticket Booking System\n");
	printf("||================================================================||\n");
	printf("||             1- TO DISPLAY THE CURRENT MOVIE AVAILABLE:         ||\n");
	printf("||             2- TO PURCHASE TICKET :                            ||\n");
	printf("||             3- TO CANCEL THE TICKET:                           ||\n");
	printf("||             4- EXIT				                              ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}
int movieavail(void){
	system("cls");
	printf("================================================================\n");
	printf("||            movies available are----->:                      ||\n");
	printf("||            Ant-Man And The Wasp: Quantumania                ||\n");
	printf("||            Avatar : Age of Water                            ||\n");
	printf("||            Gadar 2: The Katha Continues                     ||\n");
	printf("||            Dil Wale Dulhaniya Le Jayenge                    ||\n");
	printf("||            Tu Jhuthhi Mai Makkar                            ||\n");
	printf("================================================================\n");
}
void reservation(void)
{
	int sel;
	


	printf("//          WHICH MOVIE YOU WANT TO SEE           //\n");
	printf("----------------------------------------------------------------\n");
	printf("//          press 1 for ANT-MAN AND THE WASP: QUANTUMANIA        \n");
	printf("//          press 2 for Avatar: Age of Water                     \n");
	printf("//          press 3 for gadar2: The katha continues              \n");
	printf("//          press 4 for Dil Wale Dulhaniya Le Jayenge            \n");
	printf("//          press 5 for tu Jhuthhi mai makkar                    \n");
	printf("enter your choice :");
	scanf("%d",&sel);
	system("cls");
	int i,j,*array;
	printf("\n                                SCREEN\n\n\n");
		for (i=1;i<=100;i++)
		{
			if (array[i]==0)
				printf("%d\t",i);
			else 
				printf("%d\t",i);	
			if(i%10==0)
				printf("\n\n");
		}
		printf("welcome !! %s .. we are blessed with your visit   \n",newuser[count].name);
		printf("enter the seat number you want : ");
		scanf("%d",&person[count].seat);
		switch(sel)
		{
			case 1:
			printf("***-----------------***\n");
			printf("       ANT-MAN AND THE WASP: QUANTUMANIA \n");
			printf("       (1) 11Am - 1Pm\n");
			printf("       (2) 4Pm  - 6Pm\n");
			int d;
			printf("***-----------------------***\n");
			printf(" Choose Movie Slot Number:  ");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					printf("***-----------------***\n");
					printf(" ANT-MAN AND THE WASP: QUANTUMANIA :  11Am - 1Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\n\n");
       				 printf("\t-----------------MOVIE BOOKING TICKET----------------\n");
       				 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tANT-MAN AND THE WASP: QUANTUMANIA\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 11:00 Am\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					break;
				case 2:
					printf("***-----------------***\n");
					printf("  ANT-MAN AND THE WASP: QUANTUMANIA:   4Pm  - 6Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\t-----------------THEATER BOOKING TICKET----------------\n");
       				
       				 printf("\t Booking ID : %d \t\t\tANT-MAN AND THE WASP: QUANTUMANIA\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 4:00 Pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					
					break;
			}
			

        return;
			break;
			case 2:
				printf("***-------------------------***\n");
				printf(" Avatar: Age of Water:  \n");
				printf("              (1) 1Pm - 4Pm\n");
				printf("              (2) 8Pm - 10Pm\n");
				int e;
				printf("***-----------------------***\n");
				printf(" Choose Movie Slot Number:  ");
				scanf("%d",&e);
				switch(e){
					case 1:
						printf("***-----------------***\n");
						printf(" Avatar: Age of Water:  1pm - 4Pm\n");
						printf("=================================================================\n");
						system("cls");
					 printf("\t-----------------THEATER BOOKING TICKET----------------\n");
       				 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tAvatar: Age of Water\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 1:00 pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
						break;
					case 2:
						printf("***-----------------***\n");
						printf("  Avatar: Age of Water:   8Pm  - 10Pm\n");
						printf("=================================================================\n");
						system("cls");
						printf("\t-----------------THEATER BOOKING TICKET----------------\n");
       				 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tAvatar: Age of Water\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 8:00 pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					}
				break;		
			
			case 3:
			printf("***-------------------------***\n");
			printf(" gadar2: The katha continues :  \n");
			printf("              (1) 1Pm - 4Pm\n");
			printf("               (2) 8Pm - 10Pm\n");
			int f;
			printf("***-----------------------***\n");
			printf(" Choose Movie Slot Number:  ");
			scanf("%d",&f);
			switch(f){
				case 1:
					printf("***-----------------***\n");
					printf(" gadar2: The katha continues :  1pm - 4Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\t-----------------THEATER BOOKING TICKET----------------\n");
       				 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tgadar2: The katha continues\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 1:00 pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					break;
				case 2:
					printf("***-----------------***\n");
					printf("  gadar2: The katha continues :   4Pm  - 6Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\t-----------------THEATER BOOKING TICKET----------------\n");
       				 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tgadar2: The katha continues\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 4:00 pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					
				}
			break;
			case 4:
			printf("***-------------------------***\n");
			printf("  Dil Wale Dulhaniya Le Jayenge  :  \n");
			printf("              (1) 1Pm - 4Pm\n");
			printf("               (2) 8Pm - 10Pm\n");
			int g;
			printf("***-----------------------***\n");
			printf(" Choose Movie Slot Number:  ");
			scanf("%d",&g);
			switch(f){
				case 1:
					printf("***-----------------***\n");
					printf("  Dil Wale Dulhaniya Le Jayenge  :  11Am - 1Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\t-----------------THEATER BOOKING TICKET----------------\n");
       				 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tDil Wale Dulhaniya Le Jayenge\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 1:00 pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					break;
				case 2:
					printf("***-----------------***\n");
					printf("   Dil Wale Dulhaniya Le Jayenge  :   4Pm  - 6Pm\n");
					printf("=================================================================\n");
					system("cls");
						printf("\t-----------------THEATER BOOKING TICKET----------------\n");
					 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\tDil Wale Dulhaniya Le Jayenge\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 4:00 pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
				}
			break;
			case 5:
			printf("***-------------------------***\n");
			printf("  tu Jhuthhi mai makkar  :  \n");
			printf("              (1) 1Pm - 4Pm\n");
			printf("               (2) 8Pm - 10Pm\n");
			int h;
			printf("***-----------------------***\n");
			printf(" Choose Movie Slot Number:  ");
			scanf("%d",&h);
			switch(f){
				case 1:
					printf("***-----------------***\n");
					printf("  tu Jhuthhi mai makkar   :  11Am - 1Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\t-----------------THEATER BOOKING TICKET----------------\n");
					 printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\ttu Jhuthhi mai makkar\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 11:00 Am\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
					break;
				case 2:
					printf("***-----------------***\n");
					printf("   tu Jhuthhi mai makkar   :   4Pm  - 6Pm\n");
					printf("=================================================================\n");
					system("cls");
					printf("\t-----------------THEATER BOOKING TICKET----------------\n");
					printf("\t============================================================\n");
       				 printf("\t Booking ID : %d \t\t\ttu Jhuthhi mai makkar\n",id2);
       				 printf("\t Customer  : %s\n",newuser[count].name);
       				 printf("\t\t\t                              Date      : 20-04-2023\n");
       				 printf("\t                                              Time      : 4:00pm\n");
        			printf("\t                                              Hall      : 02\n");
       				printf("\t                                              seats No. : %d  \n",person[count].seat);
       				printf("\t                                              price . : %d  \n\n",price);
        			printf("\t============================================================\n");
	
				}
			break;
			default:
				printf("please enter a valid choice\n");
				printf("=================================================================\n");
		}
		
}
				

int cancelticket()
{
	char pass[20];
	printf("===========================================================================\n");
	printf("||         CANCEL YOUR TICKET            ||\n");
	printf("enter your password : ");
	scanf("%s",&pass);
	if(strcmp(pass,newuser[count].password)==0)
	{
		printf("%s your ticket has been cancelled \n",newuser[count].name);
		printf("bad to see you going\n");
	}
	else
	{
		printf("|| ===================== ||\n");
		printf("please enter the correct password \n");
	}
		
}
int payment(void){
	char card_num[20], expiration_date[10];
	int cvv, otp;
	printf("==============================   PAYMENT GATEWAY   ==============================\n");
	printf("Please make payment of %d amount for reserving your seat \n",price);
    	printf("        Enter Card Details         \n");
   		printf("===================================\n");
   		printf("Card Number : ");
    	scanf("%s", &card_num);
    	printf("Expiration Date(MM/YY) : ");
    	scanf("%s", &expiration_date);
    	printf("CVV : ");
    	scanf("%d", &cvv);
    	printf("===================================\n");
    	printf("Generating OTP.....................\n");
    	printf("OTP : ");
    	scanf("%d", &otp);
    	printf("Payment Done Successfully..........\n");
    	printf("=====CONGRATULATION YOUR SEAT HAS BEEN RESERVED ========\n");
    	printf("=============================================================================\n");
	choice1();
}

