#include <stdio.h>
#include <stdbool.h>


// Function decleartion
int bus_details();
int book_ticket();
int pass_details();
// int price();
int select_destination();
int main() {
    // Initialize all seats as unreserved

    int choice;
    do {
        printf("\n--- Bus Reservation System ---\n");
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

// Function to display available seats
int bus_details(){
    printf(" (1)WELCOME TO THE AIR SUSPENSION EXPRESS\n");
    printf(" (2)We have 20 SEATS for GENERAL and 4 for RESERVE\n");

        printf(" (3)for cancellation must infrom before 1 hrs of bus start time\n");
        printf(" (4)Have 5lakhs insurance for each passenger\n");


    
    return 0;
}
// Function to reserve a seat2
int book_ticket(){//3
    //int price;
    FILE *p;
    p=fopen("bus.txt","a");
    static setno=0;
  char name[10];
  int citizen;
printf("enter your personal details\n");
printf("enter the name of passenger\n");
scanf("%s",name);

   printf("enter the citizen of passenger\n");
  scanf("%d",&citizen);
  //payment process
  // price();
  
 setno=setno+1;

 printf("\n");
 printf("PASSENGER NAME:%s\n",name);
 printf("CITIZEN NO:%d\n",citizen);
 printf("SEATS NO:%d\n",setno);
   
  fprintf(p,"%d",citizen);
  fprintf(p,"%s",name);

  fprintf(p,"%d",setno);
 fclose(p);
   return 0;
}

// Function to cancel reservation
int pass_details(){

//read form the file

    
return 0;
}
int select_destination(){ //2
int choice1;
    do {
        printf("\n--- select your destionation\n");
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
             book_ticket();
                break;
            case 3:
         book_ticket();
                break;
            case 4:
                                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
         }
    } while (choice1 != 4);

}
/*
int price(){

        printf("\n--- select your suitable price------\n");
        printf("1. pokhara to kathmandu(1000)\n");
        printf("2. pokhara to chitwan(400)\n");
        printf("3. pokhara to janakpur(800)\n");
        printf("4. Exit\n");
        printf("Enter your destination: ");
        scanf("%d", &choice2);

        switch (choice2) {
int price;
            case 1:
           
            printf("payment through esewa\n");
            printf("pay your price\n");
            scanf("%d",&price);
                break;
            case 2:
             
              
            printf("payment through esewa\n");
            printf("pay your price\n");
            scanf("%d",&price);
                break;
            case 3:
         
            printf("payment through esewa\n");
            printf("pay your price\n");
            scanf("%d",&price);
                break;
            case 4:
                   printf("Exiting...\n");
                break;
                 default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice2 != 4);


}*/