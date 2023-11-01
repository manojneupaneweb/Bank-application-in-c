

#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

struct axisbank {
    char name[20], gender[5], add[20], Fname[30], mname[30],dob[20],phone[15], citinum[10];
    int cnum;
    float balance;
}a,d,w,e;

void login();
void mainmenu();
void create_account() {
	printf("___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
    FILE *file;
    file = fopen("bankdata.txt", "a+");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\n||====================================================||");
    printf("\n||                                            ||");
    printf("\n||          You are Creating Account          ||");
    printf("\n||       Please Enter the Following Inputs    ||");
    printf("\n||============================================||");
    printf("\n|| 1. Citizenship No                          ||");
    printf("\n|| 2. Full Name                               ||");
    printf("\n|| 3. Address                                 ||");
    printf("\n|| 4. Date of Birth                           ||");
    printf("\n|| 6. Gender                                  ||");
    printf("\n|| 7. Phone                                   ||");
    printf("\n|| 8. Father Name                             ||");
    printf("\n|| 9. Mother Name                             ||");
    printf("\n||============================================||");
    
	printf("\n Enter Citizenship No : ");
    scanf("%s", a.citinum);
    //fprintf(file, "Citizenship No : %s\t", a.citinum);
    
    printf("\n Enter Full Name: ");
    scanf("%s", a.name);
    //fprintf(file, "Full Name: %s\t", a.name);

    printf("\n Enter Address: ");
    scanf("%s", a.add);
    //fprintf(file, "Address: %s \t", a.add);

    printf("\n Enter Date of Birth: ");
    scanf("%s", a.dob);
    //fprintf(file, "Date of Birth: %s\t", a.dob);
    printf("\n Enter Gender: ");
    scanf("%s", a.gender);
    //fprintf(file, "Gender: %s\t", a.gender);

    printf("\n Enter Phone: ");
    scanf("%s", a.phone);
    //fprintf(file, "Phone: %s\t", a.phone);

    printf("\n Enter Father's Name: ");
    scanf("%s", a.Fname);
    //fprintf(file, "Father's Name: %s\t", a.Fname);

    printf("\n Enter Mother's Name: ");
    scanf("%s", a.mname);
    //fprintf(file, "Mother's Name: %s\n", a.mname);
	printf("\nEnter opening balance:");
	scanf("%f",&a.balance);
		printf("\nEnter Account Number:");
	scanf("%d",&a.cnum);
    fprintf(file,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,a.balance);

    fclose(file);
    system("cls");
    printf("\n||=======================================================================||");
    printf("\n||                   Account created successfully!                       ||");
    printf("\n||=======================================================================||\n");
    printf("\n\n Press Any Key To Continue");
    getch();
    system("cls");
    mainmenu();
    
}
void deposit_amount() {
	printf("___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
    int choice;
    FILE *old,*newrec;
    old=fopen("bankdata.txt","r");
    newrec=fopen("new.dat","w");

        printf("Enter the account no. of the customer:");
    scanf("%d",&d.cnum);
    while (fscanf(old,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",&a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,&a.balance)!=EOF)
   {

            if(a.cnum==d.cnum)
            { 
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f",&d.balance);
                    a.balance+=d.balance;
                    fprintf(newrec,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,a.balance);
                    printf("\n\nDeposited successfully!");
                }
              
            else
            {
               fprintf(newrec,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,a.balance);
            }
   }
   fclose(old);
   fclose(newrec);
   remove("bankdata.txt");
   rename("new.dat","bankdata.txt");
	getch();
	system("cls");
	mainmenu();
}
void withdraw_amount(){
		printf("___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
    int choice;
    FILE *old,*newrec;
    old=fopen("bankdata.txt","r");
    newrec=fopen("new.dat","w");

        printf("Enter the account no. of the customer:");
    scanf("%d",&d.cnum);
    while (fscanf(old,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",&a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,&a.balance)!=EOF)
   {

            if(a.cnum==d.cnum)
            { 
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f",&d.balance);
                    a.balance-=d.balance;
                    fprintf(newrec,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,a.balance);
                    printf("\n\nWithdraw successfully!");
                }
              
            else
            {
               fprintf(newrec,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,a.balance);
            }
   }
   fclose(old);
   fclose(newrec);
   remove("bankdata.txt");
   rename("new.dat","bankdata.txt");
	getch();
	system("cls");
	mainmenu();
}
void balance_enquiry();
void account_holder_details();
void all_account_holder_details();
void exitProgram();

int main(void) {
    login();
    return 0;
}
void login() {
	printf(" \n\n");
printf("    ___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
//	char pass[20] = "axisbank62560";
    char pass[20] = "@xisbank1101";
    char password[20];
    printf("\n");

	printf("\t\t\t\t\t\t ||=================================================================|| \n");
    printf("\t\t\t\t\t\t ||//$\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\//$\\/|| \n");
    printf("\t\t\t\t\t\t ||(1000)================| NEPAL RASTRA BANK |================(1000)|| \n");
    printf("\t\t\t\t\t\t ||\\$//        ~         '------========--------'               \\$//|| \n");
    printf("\t\t\t\t\t\t ||<< /        /$\\              // ____ \\\\                      \\ >>|| \n");
    printf("\t\t\t\t\t\t ||>>|        //L\\\\            // ///..) \\\\              XXXX    |<<|| \n");
    printf("\t\t\t\t\t\t ||<<|        \\ //           || <||  >\\  ||                      |>>|| \n");
    printf("\t\t\t\t\t\t ||>>|         \\$/            ||  $$ --/  ||        XXXXXXXXX    |<<|| \n");
    printf("\t\t\t\t\t\t ||<<|                        *\\\\  |\\_/  //*                     |>>|| \n");
    printf("\t\t\t\t\t\t ||>>|                         *\\\\/___\\_//*                      |<<|| \n");
    printf("\t\t\t\t\t\t ||<<\\                  _____// LUMBINI  \\________   XX XXXXX    />>|| \n");
    printf("\t\t\t\t\t\t ||//$\\          ~|    THE BIRTH PLACE OF LORD BUDDHA   |~       /$\\|| \n");
    printf("\t\t\t\t\t\t ||(1000)================   ONE THOUSAND RUPEES  =============(1000)|| \n");
    printf("\t\t\t\t\t\t ||\\$\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/$|| \n");
    printf("\t\t\t\t\t\t ||=================================================================|| \n\n\n\n");

    
	printf("\t\t\t\t\t\t ||=================================================================|| \n");
    printf("\t\t\t\t\t\t ||============                                       ==============|| \n");
    printf("\t\t\t\t\t\t          *************** Please Enter Authorized Key : **********      \n");
    printf("\t\t\t\t\t\t ||============                                        =============|| \n");
    printf("\t\t\t\t\t\t ||=================================================================|| \n");
    printf("\t\t\t\t\t\t");
    scanf(" %s", password);

    if (strcmp(password, pass) == 0) {
        printf("Login successful\n");
        system("cls");
        mainmenu();
    } else {
        printf("\nWrong Password\n");
         system("cls");
        login();
    }
}

void mainmenu() {
    int choice;
printf("    ___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");

    printf("\n\n||=======================================================================||");
    printf("\n||                                                                       ||");
    printf("\n||                         WELCOME TO Axis Bank                          ||");
    printf("\n||                                                                       ||");
    printf("\n||=======================================================================||");
    printf("\n|| 1. Create new account                                                 ||");
    printf("\n|| 2. Deposit Amount                                                     ||");
    printf("\n|| 3. Withdraw Amount                                                    ||");
    printf("\n|| 4. Balance Enquiry                                                    ||");
    printf("\n|| 5. Account Holder Details                                             ||");
    printf("\n|| 6. All Account Holder Details                                        ||");
    printf("\n|| 7. Exit                                                               ||");
    printf("\n||-----------------------------------------------------------------------||");
    printf("\n|| Enter your choice:                                                    ||");
    printf("\n||=======================================================================||\n");

    scanf("%d", &choice);

    system("cls");
    switch (choice) {
        case 1:
            create_account();
            break;
        case 2:
            deposit_amount();
            break;
        case 3:
            withdraw_amount();
            break;
        case 4:
            balance_enquiry();
            break;
        case 5:
            account_holder_details();
            break;
        case 6:
            all_account_holder_details();
            break;    
        case 7:
            exitProgram();
            break;
        default:
            printf("\n Sorry, You Input Wrong choice!!!\n Please Try Again!!!\n");
            mainmenu();
            break;
    }
}


void balance_enquiry()
{
	printf("    ___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
    printf("\n||=======================================================================||");
    printf("\n||                                                                       ||");
    printf("\n||                          Balance Enquiry                              ||");
    printf("\n||                                                                       ||");
    printf("\n||=======================================================================||");
    printf("\n||                    Enter the account number:                          ||");
    printf("\n||=======================================================================||\n");
     scanf("%d",&e.cnum);

    FILE *file = fopen("bankdata.txt", "r");
while(fscanf(file,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",&a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,&a.balance)!=EOF)
{
if (a.cnum == e.cnum)
{
            printf("\n||=======================================================================||");
            printf("\n||                  %f Rupees in This Account                            ||",a.balance);
    		printf("\n||=======================================================================||\n");
    		getch();
			}
   else
   {
    	printf("\n||=======================================================================||");
        printf("\n||                 Account Number Doesn't Exist\n                        ||");
    	printf("\n||=======================================================================||");
    }
}
        fclose(file);
    

system("cls");
    mainmenu();
   
}


void account_holder_details() {
	printf("    ___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
	 int acc_no;
   printf("\n||=======================================================================||");
    printf("\n||                                                                       ||");
    printf("\n||                         Account Holder Details                        ||");
    printf("\n||                                                                       ||");
    printf("\n||=======================================================================||");
    printf("\n||                    Enter the account number:                          ||");
    printf("\n||=======================================================================||\n");
    scanf("%d", &acc_no);
	system("cls");
    FILE *file = fopen("bankdata.txt", "r");
while(fscanf(file,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%f\n",&a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname,&a.balance)!=EOF)
{
if (a.cnum == acc_no)
    {
    printf("\n||=======================================================================||");
    printf("\n||                                                                       ||");
    printf("\n||                 %d Account Number Account Holder Details              ||",& acc_no);
    printf("\n||                                                                       ||");
    printf("\n||=======================================================================||");
    printf("\n||===============================================||");
    printf("\n|| 1. Citizenship No:%s                          ||",a.citinum);
    printf("\n|| 2. Full Name:%s                               ||",a.name);
    printf("\n|| 3. Address:%s                                 ||",a.add);
    printf("\n|| 4. Date of Birth:%s                           ||",a.dob);
    printf("\n|| 6. Gender:%s                                  ||",a.gender);
    printf("\n|| 7. Phone:%s                                   ||",a.phone);
    printf("\n|| 8. Father's Name:%s                           ||",a.Fname);
    printf("\n|| 9. Mother's Name:%s                                  ||",a.mname);
    printf("\n|| 10. Amount:%f                                  ||",a.balance);
    printf("\n||===============================================||");
    getch();
        fclose(file);
        
    }
//   else(a.cnum != acc_no){
//    	printf("\n||=======================================================================||");
//        printf("\n||                 Account Number Doesn't Exist\n                        ||");
//    	printf("\n||=======================================================================||");
//        fclose(file);
//    }

}
system("cls");
    mainmenu();
   
}


void all_account_holder_details(){
	printf("    ___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
    FILE *file;
    file = fopen("bankdata.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
system("cls");
    struct axisbank temp;
   printf("\n\n||=======================================================================||");
    printf("\n||                                                                       ||");
    printf("\n||                       Axis Bank  All Account Holder Details           ||");
    printf("\n||                                                                       ||");
    printf("\n||=======================================================================||");
    printf("\n\n");
    printf("Citizenship No\t Full Name\t Address\t Date of Birth\t Phone\t Father Name \t Mother Name");      
	printf("\n||-----------------------------------------------------------------------||\n");
    printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",a.cnum,a.citinum,a.name,a.add,a.dob,a.gender,a.phone,a.Fname,a.mname);
    getch();
  fclose(file);
system("cls");
    mainmenu();
}
void exitProgram()
{
	printf("    ___         _         ____              __  \n");
printf("   /   |  _  __(_)____   / __ )____ _____  / /__\n");
printf("  / /| | | |/_/ / ___/  / __  / __ `/ __ \/ //_/\n");
printf(" / ___ |_>  </ (__  )  / /_/ / /_/ / / / / ,<   \n");
printf("/_/  |_/_/|_/_/____/  /_____/\__,_/_/ /_/_/|_|  \n");
	exit;
}




 
 
