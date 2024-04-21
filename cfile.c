//improved final
#include <stdio.h>

// Function decleartion

//function-1
int bus_details();
//function-2
int book_ticket1(int);
int book_ticket2(int);
int book_ticket3(int);
//function-3
int pass_details();
int select_destination();
int payment(int);

//function-4
int data_access();
int view_passenger();
int view_passenger2();
int view_passenger3();
//section-1
int main() {

    printf("\t\t\t\t\t\t\t**PROJCET POWERED BY::GROUP-11**\n");
//use of main switch case
    int choice;
    do {
        printf("\n--$$$ Bus Reservation System $$$--\n");
        printf("1. Bus details\n");
        printf("2. Book ticket\n");
        printf("3. Passenger details access\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bus_details();
                break;
            case 2:
            select_destination();
               
                break;
            case 3:
           data_access();
                break;
            case 4:
           
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
 
    return 0;
}//section-1

//main switch case-1
int bus_details(){
    printf(" \t\t\t\t\t###\tWELCOME TO THE AIR SUSPENSION EXPRESS\t###\n");
    printf("\t\t\t\t \t*We have 44 SEATS for GENERAL and 4 for RESERVE\n");
    printf("\t\t\t\t\tBUS NUMBER:\n");
 printf("\t\t\t\t\tbus1:A123\n");
 printf("\t\t\t\t\tbus2:B123\n");
 printf("\t\t\t\t\tbus3:C123\n");

        printf(" \t\t\t\t\t*for cancellation must infrom before 1 hrs of bus start time\n");
        printf(" \t\t\t\t\t*Have 5lakhs insurance for each passenger\n");


    
    return 0;
}//main switch case-1

//main switch case-2

int select_destination(){ 
int choice1;
    do {
        printf("\n--- select your destination---\n");
        printf("1. Pokhara to Kathmandu\n");
        printf("2. Pokhara to Chitwan\n");
        printf("3. Pokhara to Janakpur\n");
        printf("4. Exit\n");
        printf("Enter your destination: ");
        scanf("%d", &choice1);

        switch (choice1) {
            case 1:
          // int a=1;
            book_ticket1(1);
                break;
            case 2:
             book_ticket2(2);
                break;
            case 3:
         book_ticket3(3);
                break;
            case 4:
                                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
         }
    } while (choice1 != 4);

}//main switch case-2


//main switch case-3 begin
int data_access(){
    int choice;
    do {
        printf("\n--$$$ data of passenger $$$--\n");
        printf("1. Bus-1 (Kathmandu)\n");
        printf("2. Bus-2 (Chitwan)\n");
        printf("3. Bus -3 (Janakpur)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
              view_passenger();
                break;
            case 2:
            view_passenger2();
               
                break;
            case 3:
            view_passenger3();
                break;
            case 4:
           
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
 
    return 0;
}//main switch case-3 end


//switch-2 destination case-1 begin
int book_ticket1(int s1){//bus-1
    //int price;
    int fail1;
    FILE *p;
    p=fopen("bus.txt","a");
    static int setno=0;
struct passenger {                  //use of  concept of structure keyword
      char name[10];
  int contact_no;
};
struct passenger x[44];              //use of concept of array
static int i=0;
 
      
 
printf("**ENTER YOUR PERSONAL DETAILS**\n");
printf("Enter the name of passenger\n");      //use of formatted output function
scanf("%s",x[i].name);                              //use of formatted input function

   printf("Enter the contact_no of passenger\n");
  scanf("%d",&x[i].contact_no);
  printf("\n");
 fail1=payment(s1);
 if(fail1==1){
    printf("\t\t\t\t\t\t\t***TICKET WAS NOT BOOKED***\n");
    goto x1;//goto loop
 }
 else{
  printf("\t\t\t\t\t\tYour ticket is booked sucecessfully for Kathmandu\n");
 setno=setno+1;

 printf("\n");
 printf("\t\t\t\t\t\t\t\tPASSENGER NAME:%s\n",x[i].name);
 printf("\t\t\t\t\t\t\t\tContact_no:%d\n",x[i].contact_no);
 printf("\t\t\t\t\t\t\t\tSEATS NO:%d\n",setno);
   fprintf(p,"%s","Name:");
  fprintf(p,"%s",x[i].name);
   fprintf(p,"%s","Contact_no:");
   
  fprintf(p,"%d",x[i].contact_no);

  fprintf(p,"%s","Seat_no:");

  fprintf(p,"%d",setno);
  i++;
 }
  //payment process
  // price();

  x1://goto variable
 fclose(p);
   return 0;
}//switch-2 destination case-1 end

//switch-2 destination case-2 begin
int book_ticket2(int s2){//Bus- 2
    //int price;
    int fail2;
    FILE *p1;
    p1=fopen("bus1.txt","a");
    static int setno1=0;
 struct passenger {          //use of concept of structure
      char name[10];
  int contact_no;
};
struct passenger x1[44];  //use of concept of array
static int i=0;
 
printf("**ENTER YOUR PERSONAL DETAILS**\n");
printf("Enter the name of passenger\n");
scanf("%s",x1[i].name);

   printf("Enter the contact_no of passenger\n");
  scanf("%d",&x1[i].contact_no);
  printf("\n");
  fail2=payment(s2);
  //payment process
  // price();
   if(fail2==1){
    printf("\t\t\t\t\t\t\t***TICKET WAS NOT BOOKED***\n");
    goto x2;//goto loop
 }
 else{

  printf("\t\t\t\t\tYour ticket is booked sucecessfully for Chitwan\n");
  
 setno1=setno1+1;

 printf("\n");
 printf("\t\t\t\t\t\t\tPASSENGER NAME:%s\n",x1[i].name);
 printf("\t\t\t\t\t\t\tcontact_no:%d\n",x1[i].contact_no);
 printf("\t\t\t\t\t\t\tSEATS NO:%d\n",setno1);
  fprintf(p1,"%s","Name:");
  fprintf(p1,"%s",x1[i].name);
   fprintf(p1,"%s","Contact_no:");
  fprintf(p1,"%d",x1[i].contact_no);
 
  fprintf(p1,"%s","Seat_no:");

  fprintf(p1,"%d",setno1);
  i++;
 // printf("%d",i);
 }
  x2:
 fclose(p1);
   return 0;
}//switch-2 destination case-2 end

//switch-2 destination case-3 begin
int book_ticket3(int s3){//bus-3
    //int price;
    int fail3;
    FILE *p2;
    p2=fopen("bus2.txt","a");
    static int setno2=0;
struct passenger {           //use of concept of structure
      char name[10];
  int contact_no;
};
struct passenger x2[44];    ////use of concept of array
static int i=0;
 

printf("**ENTER YOUR PERSONAL DETAILS**\n");
printf("\n");
printf("Enter the name of passenger\n");
scanf("%s",x2[i].name);

   printf("Enter the contact_no of passenger\n");
  scanf("%d",&x2[i].contact_no);
  printf("\n");
  fail3=payment(s3);
  //payment process
  // price();
    if(fail3==1){
    printf("\t\t\t\t\t\t\t***TICKET WAS NOT BOOKED***\n");
    goto x3;//goto loop
 }
 else{
 printf("\t\t\t\t\tYour ticket is booked sucecessfully for Janakpur\n");
 setno2=setno2+1;

 printf("\n");
 printf("\t\t\t\t\t\t\tPASSENGER NAME:%s\n",x2[i].name);
 printf("\t\t\t\t\t\t\tcontact_no:%d\n",x2[i].contact_no);
 printf("\t\t\t\t\t\t\tSEATS NO:%d\n",setno2);
  fprintf(p2,"%s","Name:");
  fprintf(p2,"%s",x2[i].name);
   fprintf(p2,"%s","Contact_no:");
  fprintf(p2,"%d",x2[i].contact_no);
 
  fprintf(p2,"%s","Seat_no:");

  fprintf(p2,"%d",setno2);
  // printf("%d",i);   testing i ;
  i++;
 }
 
  x3:
 fclose(p2);
   return 0;
}//switch-2 destination case-3 end


//switch-3 inside destination payment() start

//payment section ESEWA start
int payment(int a){
 printf("***PAYMENT VIA E-SEWA***\n");
    int choice2;
  
    do {
        printf("\n--- Select your payment section---\n");
        printf("1. Pokhara to Kathmandu(1000)\n");
        printf("2. Pokhara to Chitwan(500)\n");
        printf("3. Pokhara to Janakpur(1000)\n");
        printf("4. Exit\n");
           printf("Enter your payment section: \n");
        scanf("%d", &choice2);

        switch (choice2) {
            case 1:
            {
    int price;
    int fail=0;
   
if(a==2 || a==3){
    printf("\t\t\t\t\t\t\t\t\t\t***invalid***");
}
else{
     printf("Enter the ticket price\n");
scanf("%d",&price);
if(price<1000){
    printf("\t\t\t\t\t\t\t-$$$money is not sufficent$$$-\n");
    fail=fail+1;


  
    
}
else if(price==1000){
    printf("\t\t\t\t\t\t\t\t****Transaction successful****\n");

}
else{
    printf("**Transaction successful**\n");
    printf("Note::You will get return of:: %d\n",price-1000);
}
//for  unsufficent money
  if (fail==1){
   return 1;
  }
  else{
return 0;
  }

}
}
        
        
          
                break;
            case 2:
          {
    int price1;
     int fail1=0;
  
if(a==1 || a==3){
     printf("\t\t\t\t\t\t\t\t\t\t***invalid***");
    
}
else{
  printf("Enter the ticket price\n");
scanf("%d",&price1);
if(price1<500){
    printf("\t\t\t\t\t\t\t-$$$money is not sufficent$$$-\n");
    
    fail1=fail1+1;
    
}
else if(price1==500){
    printf("\t\t\t\t\t\t\t\t****Transaction successful****\n");

}
else{
    printf("**Transaction successful**\n");
    printf("Note::You will get return of:: %d\n",price1-500);
}
//for  unsufficent money
  if (fail1==1){
    return 1;
  }
  else{
    return 0;
  }
}
   
}
                break;
            case 3:
       {
      int fail2=0;
    int price2;
 
if(a==1 || a==2){
   printf("\t\t\t\t\t\t\t\t\t\t***invalid***");
}else{
       printf("Enter the ticket price\n");
scanf("%d",&price2);
if(price2<1000){
    printf("\t\t\t\t\t\t\t-$$$money is not sufficent$$$-\n");
     fail2=fail2+1;
    
    
}
else if(price2==1000){
    printf("\t\t\t\t\t\t\t\t****Transaction successful****\n");

}
else{
    printf("**Transaction successful**\n");
    printf("Note::You will get return of ::%d\n",price2-1000);
}

//for  unsufficent money
  if (fail2==1){
    return 1;
  }
  else{
    return 0;
  }

}
   
   
}

                break;
            case 4:
                                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
         }
    } while (choice2 != 4);

}//switch-3 inside destination payment() end


//file handling
int view_passenger(){
    FILE *p;
    char c;
   p=fopen("bus.txt","r");
   if(p==NULL){
       printf("Error");
       
   }
   while((c=fgetc(p))!=EOF){
      
       printf("%c",c);
   }
   fclose(p);
   return 0;
}//switch-4 data access case-1 end
//switch-4 data access case-2 start
int view_passenger2(){
    FILE *p1;
    char c;
   p1=fopen("bus1.txt","r");
   if(p1==NULL){
       printf("Error");
       
   }
   while((c=fgetc(p1))!=EOF){
       printf("%c",c);
   }
   fclose(p1);
   return 0;
}
int view_passenger3(){
    FILE *p2;
    char c;
   p2=fopen("bus2.txt","r");
   if(p2==NULL){
       printf("Error");
       
   }
   while((c=fgetc(p2))!=EOF){
       printf("%c",c);
   }
   fclose(p2);
   return 0;
}






//ESEWA end
//process
/*date 2081-01-07
-use of goto loop for money Transaction,use of return value from one function to another
-line formating
-addition of file feature for more 2 buses
*/

//requirement in the project
/*
1.use of file pointer//
2.use of structure//
3.use of array//
4.use of value and argument pass
5.documentation//
6.formatted function//

*/
//date:2081-01-08
/*LEARNING IN GROUP
1.power of team work(beginning of code from 93 line to more than 400 line of code).
2.shearing prototype of project.
3.listening skill is important to understand gropmate idea.
4.team work grow anything exponentially.
5.shearing new ideas,have fun etc;
6.NEVER EVER GIVE UP INSTEAD TRY AND FOLLOW YOUR "KARMA".
*/
/*LEARNING WHILE COADING
1.minor mistake of error in structure syntax.
2.use of proper documentation of any programming langauge while coading.
3.to correct the error and achieve result.
4.use of testing of block of code before writing complete code.like printf("%d",i);
5.evolving of new idea of code each and every moment.
6.questioning is very important for each task.
7.respect the openion of your mate and analyse it ,process it then respond accordingly.bcz good openion brings good out the bad circumstances.



*/
/* learning at 1:00 am 2080-01-09
1.solving of problem of warning form the chat gpt.
*/
