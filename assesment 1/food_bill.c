#include<stdio.h>
void main(){

    int totalbill=0;
    int a,quntity;
    int one=180;
    int two=100;
    int three=120;
    int four=50;
    char ch;
    int bill_1;
    int bill_2;
    int bill_3;
    int bill_4;

    printf("******Welcome to restaurant*****\n");
    printf("\n");

  do
   {
        printf("--------------menu--------------\n");
        printf("1.Pizza       price = 180 rs/pcs\n2.Burger      price = 100 rs/pcs\n3.Dosa        price = 120 rs/pcs\n4.Idli        price = 50 rs/pcs\n");
        printf("Please enter your choice : ");
        scanf("%d",&a);

        if (a==1)
        {
            printf("you have selected Pizza\n");
            printf("Enter the quntity : ");
            scanf("%d",&quntity);
            bill_1=(one*quntity);
            totalbill=bill_1+totalbill;
            printf("Amount : %d\n",bill_1);
            printf("Total amount is : %d\n",totalbill);        
        }
        else if (a==2)
        {
            printf("you have selected Burger\n");
            printf("Enter the quntity : ");
            scanf("%d",&quntity);
            bill_2=(two*quntity);
            totalbill=bill_2+totalbill;
            printf("Amount : %d\n",bill_2);
            printf("Total amount is : %d\n",totalbill);        
        }
        else if (a==3)
        {
            printf("you have selected Dosa\n");
            printf("Enter the quntity : ");
            scanf("%d",&quntity);
            bill_3=(three*quntity);
            totalbill=bill_3+totalbill;
            printf("Amount : %d\n",bill_2);
            printf("Total amount is : %d\n",totalbill);
        }
        else if (a==4)
        {
            printf("you have selected Idli\n");
            printf("Enter the quntity : ");
            scanf("%d",&quntity);
            bill_4=(four*quntity);
            totalbill=bill_4+totalbill;
            printf("Amount : %d\n",bill_4);
            printf("Total amount is : %d\n",totalbill);
        }
        else
        {
            printf("Invalid input\n");
        }
        printf("do you want to place more order? y & n : ");
        scanf("\n%c",&ch);
    }
    while(ch=='y');
    printf("\n");
    printf("---------------------------------------\n");
    printf("Final amount of the bill : %d\n",totalbill);
    printf("\n");
    printf("=======/Thank you/=======\n");
    printf("=======/visit again/=======\n");
}