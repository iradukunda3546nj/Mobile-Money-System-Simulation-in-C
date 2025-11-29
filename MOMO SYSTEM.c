#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>

void displayMenu();
void sendMoney();
void buy();
void payBill();
void bankServices();
void loansandSavings();
void myMomoaccount();
void pendingApprovals();
void momoPay();
void myMomosecurity();
void insurance();
void momoTermsandconditions();
void macyeMacye();
void babylhealth();
void help();
	// Function to display the main menu
    
	void displayMenu() {
		system("cls||clear");
    printf("1. send money\n");
    printf("2. buy\n");
    printf("3. pay bill\n");
    printf("4. bank services\n");
    printf("5. loan and savings\n");
    printf("6. my momo account\n");
     printf("7. pending approvals\n");
      printf("8. momo pay\n");
       printf("9. my momo security\n");
        printf("10. insurance\n");
        printf("11. momo terms and conditions\n");
        printf("12. macye macye\n");
        printf("13. babyl health\n");
        printf("14. help\n");
}
void sendMoney(){
	      	system("cls||clear"); //clear the display menu window
	      printf("1.MoMo user\n");
	       printf("2. send to ekash\n");
	        printf("3. Across the region\n");
	         printf("4.cancel voucher \n");
	          printf("5.display voucher\n");
	           printf("6.list active voucher\n");
	            printf("7.international transfer\n");
	             printf("8.exchange rate\n");
	              printf("9.exit\n");
	              printf("0.back\n");
	                 
					 int option1;
	                 printf("Enter option: ");
                     scanf("%d", &option1);
 

    switch (option1) {
        case 1:
            // Handle MoMo user transaction
            	system("cls||clear");  //clears the window
  printf("Enter phone number (format 07xxxxxxxx): ");
    char phoneNumber[20];
    scanf("%s", phoneNumber);
      //strlen means length of string so here we will give a limit on length of phone number.
    if (strlen(phoneNumber) != 10) {
    printf("Transaction has failed. Number provided is incorrect. Please check the number and try again.\n");}
else if(strlen(phoneNumber) ==10)
{
    printf("Enter amount to send : ");
    double amount;
    scanf("%lf", &amount);
    	system("cls||clear");
   // printf("Amountof rwf%.2lf sent to %s successfully!\n", amount, phoneNumber);
         int password;
         printf("enter pin:\n");
         scanf("%d",&password);
		 if(password==12345)
		 {
		 	 printf("Amountof rwf%.2lf sent to %s successfully!\n", amount, phoneNumber);
		 	
			}   else
			{
				printf("invalid pin\n");
			}
		}
			break;
        case 2:
            // Handle Send to eKash transaction
            	system("cls||clear");
            int ID_Number[10];
		   printf("Enter Destination number or eKash ID...\n");
            scanf("%d",&ID_Number[10]);
             
            break;
        case 3:
            // Handle Across the region transaction
            	system("cls||clear");
         printf("1.kenya\n");
	       printf("2.Uganda\n");
	        printf("3.Zambia\n");
	         printf("4.Tanzania \n");
	          printf("5.DR Congo\n");
	           printf("6.Cameroon\n");
	            printf("7.Cote d'Ivoire\n");
	             printf("8.Gambia\n");
	              printf("9.Ghana\n");
	              printf("10.Guinea Bissau\n");
	              printf("11.Guinea Conakry\n");
	                 printf("12.Morocco\n");
	                 printf("13.Mozambique\n");
	                 printf("14.Niger\n");
	                 printf("15.Senegal\n");
	                 printf("16.Sierra leone\n");
	                 printf("17.Nigeria\n");
					 int option2;
	                 printf("Enter option: ");
                     scanf("%d", &option2);
 

    switch (option2) {
	     
	     case 1:	system("cls||clear");
	     	int  suboption2;
	     	printf("1.Mpesa\n");
	     	 printf("Enter suboption2: ");
                     scanf("%d", &suboption2);
                     switch(suboption2)
                     case 1:
                     		system("cls||clear");
                     	printf("Enter the recepient mobile number including the country code:");
                     	char phoneNumber[20];
    scanf("%19s", phoneNumber);
      //strlen means length of string so here we will give a limit on length of phone number.
    if (strlen(phoneNumber) != 9) {
    printf("Transaction has failed. Number provided is incorrect. Please check the number and try again.\n");}
else if(strlen(phoneNumber) ==9)
{
    printf("Enter the transfer amount.(RWF): ");
    double amount;
    scanf("%lf", &amount);
    system("cls||clear");
	printf("Transfer preview\n Recipient:%19s\n Send amt:%lf\n Fee:120.0RWF\n ",phoneNumber,amount);
	int suboption3;
	printf("1.Yes\n 2.No\n");
	scanf("%d",&suboption3);
	switch(suboption3){
		case 1: 
		printf("To finalize your transfer please close this menu and dial *182# then select Pending Approvals to Accept this transaction\n"); 
			break;
			case 2:
				printf("Thank you for using this service");
				break;
}
               	}
}
            break;
        case 4:
            // Handle Cancel voucher
            printf("Processing Cancel voucher...\n");
            break;
        case 5:
            // Handle Display voucher
            printf("Processing Display voucher...\n");
            break;
        case 6:
            // Handle List active voucher
            printf("Processing List active voucher...\n");
            break;
        case 7:
            // Handle International transfer
            printf("Processing International transfer...\n");
            break;
        case 8:
            // Handle Exchange rate
            printf("Processing Exchange rate...\n");
            break;
        case 9:
            printf("Exiting the Send Money menu. Goodbye!\n");
            exit(0);
        case 0:
            printf("Going back to the main menu.\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }

  }
void buy()
{
	system("cls||clear");
	   printf("1.Buy Airtime,Voice Pack and Data bundle\n");
	     printf("2. Electricity\n");
	       printf("3. Pay services\n");
	         printf("4. solar\n");
	           printf("5. Pay Transport Fare\n");
	             printf("6.Online Shopping Card\n");
	               printf("0.back\n");
}
void payBill()
{
	system("cls||clear");
	int bill;
	int menu;
   menu:	printf("1)ifatabuguzi rya Tv\n");
	printf("2)PostPaid bill\n");
	printf("3)ishyura PSF\n");
	printf("4)Pay Yego\n");
	printf("5)amazi\n");
	printf("6)Rwanda Revenue\n");
	printf("7)Service z'irembo\n");
	printf("8)Airport Parking\n");
	printf("9)Businesses\n");
	printf("10) amafaranga y'ishuri\n");
	printf("11)security n hygiene\n");
	printf("12)sohokamo\n");
	printf("0)gusubira inyuma\n");
	printf("reply:");
	scanf("%d",&bill);
	system("clear||cls");
	switch(bill)
	{
		case 1: //handling kugura ifatabuguzi
		    
		   	printf("1)Startimes\n");
	        printf("2) DSTV\n");
          	printf("3) AZAMTV\n");
        	printf("4)Canal+\n");
        	printf("5) Sohokamo\n");
        	printf("0) Gusubira inyuma\n");
        	
        	int option4;
        	printf("enter option:\n");
        	scanf("%d",&option4);
    
    switch(option4){
    	
    	case 1 : //enter in startimes 
    	system("clear||cls");
    	char numero_ikarita[15];
    	printf("shyiramo nimero y'ikarita yawe:\n");
    	scanf("%s",numero_ikarita);
    	if(strlen(numero_ikarita)!= 11){
    		printf("UNKNOWN APPLICATION");
		} 
		 else if(strlen(numero_ikarita)== 11){
			 printf(" Startimes Smartcard:%s,\nCustomer Name:name\n Package Name:DTT_Nova\n 1)confirm\n2)change package\n 0)Gusubira inyuma\n ",numero_ikarita);
			 int yourOption;
	    	printf(" Enter your option:\n");
          	scanf("%d",&yourOption);
          	switch(yourOption)
          	{
          		case 1:
          			system("clear||cls");
                    printf("1) 12,000RWF (90 days)\n");
                    printf("2) 8,000RWF (60 days)\n");
                    printf("3) 4,000RWF (30 days)\n");
                    printf("4) 1,350RWF (7 days)\n");
                    printf("5) 500RWF (1 day)\n");
                    printf("0) Gusubira inyuma\n");
                    	
				    int yourOption2;
	    	         printf(" Enter your option:\n");
          	         scanf("%d",&yourOption2);
          	          switch(yourOption2)
          	             {
          	        	case 1: //handle for option 1 
                      system("clear||cls");
          	           	int pin;
                        printf("Please enter your PIN:\n");
                        scanf("%d",&pin);
                        if(pin == 12345){
                        	printf("payment completed successful\n");
						}
                        else
                        {
                        		printf("Invalid pin\n");
						}
          	             break;	
          	             	case 2: //handle for option 2
                      system("clear||cls");
          	           	int pin1;
                        printf("Please enter your PIN:\n");
                        scanf("%d",&pin1);
                        if(pin1 == 12345){
                        	printf("payment completed successful\n");
						}
                        else
                        {
                        		printf("Invalid pin\n");
						}
          	             break;	
          	             	case 3: //handle for option 3
                      system("clear||cls");
                        int pin2;
                        printf("Please enter your PIN:\n");
                        scanf("%d",&pin2);
                        if(pin2 == 12345){
                        	printf("payment completed successful\n");
						}
                        else
                        {
                        		printf("Invalid pin\n");
						}
          	             break;	
          	             	case 4: //handle for option 4
                      system("clear||cls");
          	           	int pin3;
                        printf("Please enter your PIN:\n");
                        scanf("%d",&pin3);
                        if(pin3 == 12345){
                        	
                        	printf("payment completed successful\n");
						}
                        else
                        {
                        		printf("Invalid pin\n");
						}
          	             break;	
          	             	case 5: //handle for option 5 
                      system("clear||cls");
                       int pin4;
                        printf("Please enter your PIN:\n");
                        scanf("%d",&pin4);
                        if(pin4 == 12345){
                        	printf("payment completed successful\n");
						}
                        else
                        {
                        		printf("Invalid pin\n");
						}
          	             break;
						  	case 0: //handle for option 0
                      system("clear||cls");
          	          		displayMenu();		
								break;		 	
						   }
                        break;
                        case 2://change package
                        system("clear||cls");
                        int interval;
                   start: printf("Select the product\n");
                    printf("1) DTT_BASIC\n");
                    printf("2)DTT_CLASSIC\n");
                    printf("3)DTT_UNIQUE\n");
                    printf("0) Gusubira inyuma\n");
                    printf("enter option:\n");
                    scanf("%d",&interval);
                    switch(interval)
                    {
                    	case 1: //select DDT_BASIC
                    	 system("clear||cls");
                    	 printf("1) 6500RWF(30 days)\n");
                         printf("2)2200RWF(7 days)\n");
                         printf("3)700RWF(1 day)\n");
                         printf("0)Gusubira inyuma\n");
                         
                         int interval1;
                         printf("enter option:\n");
                         scanf("%d",&interval1);
                         switch(interval1)
						 {
						 	case 1:
						 		int pin5;
						 		printf("enter pin:\n");
						 		scanf("%d",&pin5);
						 		if(pin5==12345){
						 			printf("transaction completed successfully\n");
								 }else{
								 		printf("incorrect PIN\n");
								 }
						        break;
						    case 2:
						 		int pin6;
						 		printf("enter pin:\n");
						 		scanf("%d",&pin6);
						 		if(pin6==12345){
						 			printf("transaction completed successfully\n");
								 }else{
								 		printf("incorrect PIN\n");
								 }
						        break;
						    case 3:
						 		int pin7;
						 		printf("enter pin:\n");
						 		scanf("%d",&pin7);
						 		if(pin7==12345){
						 			printf("transaction completed successfully\n");
								 }else{
								 		printf("incorrect PIN\n");
								 }
						        break;
						    case 0:
						    	goto start;
                                
						        break;
						        
												  }   break;                      
                         
                        case 2://DDT_CLASSIC 
                         system("clear||cls");
                    	 printf("1) 8500RWF(30 days)\n");
                         printf("2)2900RWF(7 days)\n");
                         printf("0)Gusubira inyuma\n");
                         
                         int interval2;
                         printf("enter option:\n");
                         scanf("%d",&interval2);
                         switch(interval2)
						 {
						 	case 1:
						 		int myPin;
						 		printf("enter pin:\n");
						 		scanf("%d",&myPin);
						 		switch(myPin)
						 		{
						 			case 12345:
						 				printf("transaction completed successfully\n");
						 				break;
						 			default:
                                         printf("Invalid pin\n");
								 }
			                    
						        break;
						    case 2:
						 		int myPin1;
						 		printf("enter pin:\n");
						 		scanf("%d",&myPin1);
						 		if(myPin1==12345){
						 			printf("transaction completed successfully\n");
								 }else{
								 		printf("incorrect PIN\n");
								 }
						        break;
						        case 0://gusubira inyuma
						        goto start;
                        		break;
					}break;
                        	case 3: //DDT_UNIQUE
                        	system("clear||cls");
                    	 printf("1) 10000RWF(30 days)\n");
                         printf("2)3500RWF(7 days)\n");
                         printf("0)Gusubira inyuma\n");
                         
                         int interval3;
                         printf("enter option:\n");
                         scanf("%d",&interval3);
                         switch(interval3)
						 {
						 	case 1:
						 		int myPin3;
						 		printf("enter pin:\n");
						 		scanf("%d",&myPin3);
						 		switch(myPin3)
						 		{
						 			case 12345:
						 				printf("transaction completed successfully\n");
						 				break;
						 			default:
                                         printf("Invalid pin\n");
								 }
			                    
						        break;
						    case 2:
						 		int myPin2;
						 		printf("enter pin:\n");
						 		scanf("%d",&myPin2);
						 		if(myPin2==12345){
						 			printf("transaction completed successfully\n");
								 }else{
								 		printf("incorrect PIN\n");
								 }
						        break;
						        case 0://gusubira inyuma
						        goto start;
                        		break;
					}
                        	break;
            
            }
        }
        
            break;
            
			case 2: //DSTV
			   	system("clear||cls");
			    printf("Select bouquet\n");
             	printf("1)Isange(access)-5000.00RWF\n");
            	printf("2)Iwacu(Family)-10000.00 RWF\n");
             	printf("3)Inganji(compact)-20000RWF\n");
              	printf("4)Ishema(compact+)-30000RWF\n");
            	printf("5)Premium EA-100000.00 RWF\n");
            	printf("6)Addon French Plus- 37000.00 RWF\n");
            	printf("7)premium EA+Asia-126000.00RWF\n");
	            printf("8)Asia-45900.00 RWF\n");
	            printf("9)Francais Anglais-139000.00 RWF\n");
	            printf("0) Gusubira inyuma\n");
	            
	            int bouquet;
	            printf("enter your bouquet option:\n");
	            scanf("%d",&bouquet);
	            
	            switch(bouquet)
	            {
	            	case 1:
	            			 system("clear||cls");
    	                     char numero_ikarita1[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita1);
    	                     if(strlen(numero_ikarita1)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita1)== 10){
		                     	int dstvPin;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin);
		                     	if(dstvPin==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita1);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            		break;  //break for case1 when we enter isange
	            		case 2:
	            			 system("clear||cls");
    	                     char numero_ikarita2[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita2);
    	                     if(strlen(numero_ikarita2)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita2)== 10){
		                     	int dstvPin1;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin1);
		                     	if(dstvPin1==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita2);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            		case 3:
	            			 system("clear||cls");
    	                     char numero_ikarita3[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita3);
    	                     if(strlen(numero_ikarita3)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita3)== 10){
		                     	int dstvPin2;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin2);
		                     	if(dstvPin2==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita3);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            	case 4:
	            			 system("clear||cls");
    	                     char numero_ikarita4[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita4);
    	                     if(strlen(numero_ikarita4)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita4)== 10){
		                     	int dstvPin3;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin3);
		                     	if(dstvPin3==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita4);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            	case 5:
	            			 system("clear||cls");
    	                     char numero_ikarita5[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita5);
    	                     if(strlen(numero_ikarita5)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita5)== 10){
		                     	int dstvPin4;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin4);
		                     	if(dstvPin4==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita5);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            		break;
	            		case 6:
	            				 system("clear||cls");
    	                     char numero_ikarita6[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita6);
    	                     if(strlen(numero_ikarita6)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita6)== 10){
		                     	int dstvPin5;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin5);
		                     	if(dstvPin5==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita6);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            		case 7:
	            				 system("clear||cls");
    	                     char numero_ikarita7[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita7);
    	                     if(strlen(numero_ikarita7)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita7)== 10){
		                     	int dstvPin6;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin6);
		                     	if(dstvPin6==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita7);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            		case 8:
	            				 system("clear||cls");
    	                     char numero_ikarita8[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita8);
    	                     if(strlen(numero_ikarita8)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita8)== 10){
		                     	int dstvPin7;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin7);
		                     	if(dstvPin7==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita8);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            		case 9:
	            				 system("clear||cls");
    	                     char numero_ikarita9[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita9);
    	                     if(strlen(numero_ikarita9)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita9)== 10){
		                     	int dstvPin8;
		                     	printf("enter the pin:\n");
		                     	scanf("%d",&dstvPin8);
		                     	if(dstvPin8==12345){
		                     		printf("payment to %s completed successfully!\n",numero_ikarita9);
								 }
								 else
								 {
								 	printf("Invalid Pin\n");
								 }
		                     	
		                }
	            			break;
	            		case 0:
	            			goto menu;
	            			break;
				} break; //break for case 2 dtsv
            case 3: //AZAM
            printf("Could not perform the transaction.Please call customer care for assistance\n");//azam option no longer works haha
			break; //break for case 3 azam 
			case 4: //canal+
			break;
			case 5: //sohokamo
			goto menu;
			break;
			case 0: //gusubira inyuma 
			break;
            
			  }

		}// this bracket is for paybill
	
	break;	}//this for void paybill()
    	
}
        	


void bankServices()
{
	system("cls||clear");
    printf("1.ATM\n");
      printf("2.send MoMo to Bank\n");
        printf("3.Get Money from Bank Account\n");
          printf("4.Check Account Balance\n");
            printf("5.Decline Bank Account\n");
              printf("0.Back\n");
}
void loansandSavings()
{
	system("cls||clear");
	  printf("1.Mokash\n");
	    printf("2.Staff\n");
	      printf("3.KCB\n");
	        printf("0.back\n");
}
void myMomoaccount()
{
	system("cls||clear");
	       printf("1.check balance\n");
	        printf("2.mini statement\n");
	        printf("3.get latest electricity token");
	        printf("4.preapprove transactions");
            printf("5.change language\n");
	        printf("6.my offers\n");
	        printf("7.exit\n");
	        printf("0.back\n");}
	        
void pendingApprovals()
  {
  	system("cls||clear");
	printf("1.cashout approval\n");
	        printf("2.allow cash out\n");
	        printf("3.request a reversal");
	        printf("3.Register as merchant\n");
	        printf("4.approve or decline a reversal \n");
	        printf("0.back");
}
void momoPay()
{
	system("cls||clear");
	  printf("1.enter MoMo code\n");
	    printf("2. Pay with a reason\n");
	      printf("3.Register as merchant\n");
}
void myMomosecurity()
{ 
system("cls||clear");
	printf("1.reset pin\n");
	        printf("2.change pin\n");
	        printf("3.self pin reset\n");
	         printf("4.exit\n");
	          printf("5.back\n");
	        
}
void insurance()
{
	system("cls||clear");
	 printf("1.radiant yacu\n");
	  printf("2.prime insurance\n");
	   printf("3.ineza\n");
	    printf("4.uap\n");
	     printf("5.sanlam\n");
	      printf("0.back\n");
	      }
void momoTermsandconditions()
{
	system("cls||clear");
	 printf("urakoze gukoresha ino servisi, wamaze kwemeza amategeko n'amabwiriza\n");
}
void macyeMacye()
{
	system("cls||clear");
	 printf("Welcome to MTN Macye Macye,select an option to continue\n");
	  printf("1.registration\n");
	   printf("2.info\n");
	   }
void babylhealth()
{
	system("cls||clear");
	printf("welcome to babyl\n");
	 printf("please enter your ID number\n");
	  printf("\n");
}
void help()
{
	system("cls||clear");
	 printf("1.dial call center\n");
	  printf("2.what is mobile money?\n");
	   printf("3.Getting Mobile Money\n");
	    printf("4.charges\n");
	     printf("5.roaming\n");
	      printf("6.transfer to a non mobile user\n");
	       printf("7.buying mobilemoney\n");
	        printf("8.wrong transfer\n");
	         printf("0.back\n");
	         
}
//main function

int main()
{ 
int menu;
int choice;
  char dialPadCode[10];

    // Prompt user to enter a code in the dial pad
    printf("Enter code in the dial pad: ");
    scanf("%9s", dialPadCode);

    // Check if the entered code is *182#
    if (strcmp(dialPadCode, "*182#") == 0) {
         for (int choice; ; ) {
        // Display the mtn momo menu
        
	displayMenu();
        
      printf("Enter your choice: ");
        scanf("%d", &choice);
        
		 if (choice == 1) {
            sendMoney();
        } else if (choice == 2) {
            buy();
        } else if (choice == 3) {
           payBill();
        } else if ( choice == 4) {
          bankServices();
        } else if (choice == 5) {
             loansandSavings();}
             else if (choice == 6) {
			    myMomoaccount();
			 } else if (choice == 7) {
             	pendingApprovals();
			 }
             else if (choice == 8) {
             momoPay();}
             else if (choice == 9) {
             myMomosecurity();}
             else if (choice == 10) {
             insurance();}
             else if (choice == 11) {
             momoTermsandconditions();}
             else if (choice == 12) {
            macyeMacye();}
            else if (choice == 13) {
            babylhealth();}
            else if (choice == 14) {
             help();}
             
            break; // Exit the loop when option is 15
		
        }
       
    
    } else {
        printf("Unknown application.\n");
    }
    	return 0;

	
	}
