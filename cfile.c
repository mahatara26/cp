#include <stdio.h>
// Function decleartion

//function-1
int bus_details();
//function-2
int book_ticket1();
int book_ticket2();
int book_ticket3();
//function-3
int pass_details();
int select_destination();
int payment();
//function-4
int pay1();
int pay2();
int pay3();
int main() {

    printf("\t\t\t\t\t\t\t**PROJCET POWERED BY::GROUP-11**\n");
//use of switch case
    int choice;
    do {
        printf("\n--$$$ Bus Reservation System $$$--\n");
        printf("1. bus details\n");
        printf("2. book ticket\n");
        printf("3. passenger details access\n");
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
pass_details();
                break;
            case 4:
           
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
 
    return 0;
}


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
}
// Function to reserve a seat2
int book_ticket(){//bus-1
    //int price;
    int fail1;
    FILE *p;
    p=fopen("bus.txt","a");
    static setno=0;
struct passenger {                  //use of  concept of structure keyword
      char name[10];
  int contact_no;
};
struct passenger x[44];              //use of concept of array
static i=0;
 
      
 
printf("**ENTER YOUR PERSONAL DETAILS**\n");
printf("enter the name of passenger\n");      //use of formatted output function
scanf("%s",x[i].name);                              //use of formatted input function

   printf("enter the contact_no of passenger\n");
  scanf("%d",&x[i].contact_no);
  printf("\n");
 fail1=payment();
 if(fail1==1){
    printf("\t\t\t\t\t\t\t***TICKET HAS NOT BOOKED***\n");
    goto x1;//goto loop
 }
 else{
  printf("\t\t\t\t\t\tyour ticket is booked sucecessfully for kathmandu\n");
 setno=setno+1;

 printf("\n");
 printf("\t\t\t\t\t\t\t\tPASSENGER NAME:%s\n",x[i].name);
 printf("\t\t\t\t\t\t\t\tcontact_no:%d\n",x[i].contact_no);
 printf("\t\t\t\t\t\t\t\tSEATS NO:%d\n",setno);
   fprintf(p,"%s","name:");
  fprintf(p,"%s",x[i].name);
   fprintf(p,"%s","contact_no:");
   
  fprintf(p,"%d",x[i].contact_no);

  fprintf(p,"%s","seatno:");

  fprintf(p,"%d",setno);
  i++;
 }
  //payment process
  // price();

  x1://got variable
 fclose(p);
   return 0;
}
// Function to reserve a seat2
int book_ticket1(){//Bus- 2
    //int price;
    int fail2;
    FILE *p1;
    p1=fopen("bus1.txt","a");
    static setno1=0;
 struct passenger {          //use of concept of structure
      char name[10];
  int contact_no;
};
struct passenger x1[44];  //use of concept of array
static i=0;
 
printf("**ENTER YOUR PERSONAL DETAILS**\n");
printf("enter the name of passenger\n");
scanf("%s",x1[i].name);

   printf("enter the contact_no of passenger\n");
  scanf("%d",&x1[i].contact_no);
  printf("\n");
  fail2=payment();
  //payment process
  // price();
   if(fail2==1){
    printf("\t\t\t\t\t\t\t***TICKET HAS NOT BOOKED***\n");
    goto x2;//goto loop
 }
 else{

  printf("\t\t\t\t\tyour ticket is booked sucecessfully for chitwan\n");
  
 setno1=setno1+1;

 printf("\n");
 printf("\t\t\t\t\t\t\tPASSENGER NAME:%s\n",x1[i].name);
 printf("\t\t\t\t\t\t\tCITIZEN NO:%d\n",x1[i].contact_no);
 printf("\t\t\t\t\t\t\tSEATS NO:%d\n",setno1);
  fprintf(p1,"%s","name:");
  fprintf(p1,"%s",x1[i].name);
   fprintf(p1,"%s","contact_no:");
  fprintf(p1,"%d",x1[i].contact_no);
 
  fprintf(p1,"%s","seatno:");

  fprintf(p1,"%d",setno1);
  i++;
 // printf("%d",i);
 }
  x2:
 fclose(p1);
   return 0;
}
// Function to reserve a seat2
int book_ticket2(){//bus-3
    //int price;
    int fail3;
    FILE *p2;
    p2=fopen("bus2.txt","a");
    static setno2=0;
struct passenger {           //use of concept of structure
      char name[10];
  int contact_no;
};
struct passenger x2[44];    ////use of concept of array
static i=0;
 

printf("**ENTER YOUR PERSONAL DETAILS**\n");
printf("\n");
printf("enter the name of passenger\n");
scanf("%s",x2[i].name);

   printf("enter the contact_no of passenger\n");
  scanf("%d",&x2[i].contact_no);
  printf("\n");
  fail3=payment();
  //payment process
  // price();
    if(fail3==1){
    printf("\t\t\t\t\t\t\t***TICKET HAS NOT BOOKED***\n");
    goto x3;//goto loop
 }
 else{
 printf("\t\t\t\t\tyour ticket is booked sucecessfully for janakpur\n");
 setno2=setno2+1;

 printf("\n");
 printf("\t\t\t\t\t\t\tPASSENGER NAME:%s\n",x2[i].name);
 printf("\t\t\t\t\t\t\tcontact_no:%d\n",x2[i].contact_no);
 printf("\t\t\t\t\t\t\tSEATS NO:%d\n",setno2);
  fprintf(p2,"%s","name:");
  fprintf(p2,"%s",x2[i].name);
   fprintf(p2,"%s","contact_no:");
  fprintf(p2,"%d",x2[i].contact_no);
 
  fprintf(p2,"%s","seatno:");

  fprintf(p2,"%d",setno2);
  // printf("%d",i);   testing i ;
  i++;
 }
 
  x3:
 fclose(p2);
   return 0;
}

// Function to cancel reservation
int pass_details(){

    
return 0;
}
int select_destination(){ //2
int choice1;
    do {
        printf("\n--- select your destination---\n");
        printf("1. pokhara to kathmandu\n");
        printf("2. pokhara to chitwan\n");
        printf("3. pokhara to janakpur\n");
        printf("4. Exit\n");
        printf("Enter your destination: ");
        scanf("%d", &choice1);

        switch (choice1) {
            case 1:
           
            book_ticket();
                break;
            case 2:
             book_ticket1();
                break;
            case 3:
         book_ticket2();
                break;
            case 4:
                                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
         }
    } while (choice1 != 4);

}
//payment section ESEWA start
int payment(){
 printf("***PAYMENT VIA ESEWA***\n");
    int choice2;
  
    do {
        printf("\n--- select your payment section---\n");
        printf("1. pokhara to kathmandu(1000)\n");
        printf("2. pokhara to chitwan(500)\n");
        printf("3. pokhara to janakpur(1000)\n");
        printf("4. Exit\n");
           printf("enter your payment section: \n");
        scanf("%d", &choice2);

        switch (choice2) {
            case 1:
           
          return pay1();
        
          
                break;
            case 2:
          return pay2();
                break;
            case 3:
        return pay3();
                break;
            case 4:
                                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
         }
    } while (choice2 != 4);

}
int pay1(){
    int price;
    int fail=0;
    printf("enter the ticket price\n");
scanf("%d",&price);
if(price<1000){
    printf("\t\t\t\t\t\t\t-$$$money is not sufficent$$$-\n");
    fail=fail+1;


  
    
}
else if(price==1000){
    printf("\t\t\t\t\t\t\t\t****transition success****\n");

}
else{
    printf("transition suceess\n");
    printf("you will get return of:: %d\n",price-1000);
}
//for  unsufficent money
  if (fail==1){
    return 1;
  }
  else{
    return 0;
  }
}
int pay2(){
    int price1;
     int fail1=0;
    printf("enter the ticket price\n");
scanf("%d",&price1);
if(price1<500){
    printf("\t\t\t\t\t\t\t-$$$money is not sufficent$$$-\n");
    
    fail1=fail1+1;
    
}
else if(price1==500){
    printf("\t\t\t\t\t\t\t\t****transition success****\n");

}
else{
    printf("transition suceess/n");
    printf("you will get return of:: %d\n",price1-500);
}
//for  unsufficent money
  if (fail1==1){
    return 1;
  }
  else{
    return 0;
  }
   
}
int pay3(){
      int fail2=0;
    int price2;
    printf("enter the ticket price\n");
scanf("%d",&price2);
if(price2<1000){
    printf("\t\t\t\t\t\t\t-$$$money is not sufficent$$$-\n");
     fail2=fail2+1;
    
    
}
else if(price2==1000){
    printf("\t\t\t\t\t\t\t\t****transition sucess****\n");

}
else{
    printf("transition suceess/n");
    printf("you will get return of ::%d\n",price2-1000);
}
//for  unsufficent money
  if (fail2==1){
    return 1;
  }
  else{
    return 0;
  }
   
   
}
//ESEWA end
//process
/*date 2081-01-07
-use of goto loop for money transition,use of return value from one function to another
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
6.formatted funcstion//

*/
//date:2081-01-08
/*LEARNING IN GROUP
1.power of team work(beginning of code from 93 line to more than 400 line of code).
2.shearing prototype of project.
3.listening skill is important to understand gropmate idea.
4.team work grow anything exponentially.
5.shearing new ideas,have fun etc;
*/
/*LEARNING WHILE COADING
1.minor mistake of error in structure syntax.
2.use of proper documentation of any programming langauge while coading.
3.to correct the error and achieve result.
4.use of testing of block of code before writing complete code.like printf("%d",i);
5.evolving of new idea of code each time.
*/
