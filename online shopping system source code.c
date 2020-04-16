/*username="SHAGOR" or"HAQUE"
password="123456" or "654321"
Happy codeing */

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
struct login
{

    char name[20];
    char password[20];
};
struct password
{
char name[30],pass[30];
}w[99];
int ch;
void old_member_payment(int used_money);
void new_member_payment(int used_money1);
 static int totalCost;
int fun_total(int x);
int login_reg();
int login();
int login(int g);
int reg(int x);
int main()
{

    static int totalCost;

    int i,j,choice,c=1,a[35],cost[35],ch;
    system("color 1F");
    for(i=0; i<35; i++)
    {
        // printf("Please Enter Your Name\n");
        a[i]=0;
    }


    char str[100];
    char items[35][100]= {"kids cloths",
                         "kids dypar",
                          "kids toy",
                          "Memory 16 GB",
                          "Mouse",
                          "Pendrve 16 GB",
                          "Apex",
                          "Bata",
                          "Bay",
                          "Redmi ",
                          "Nokia 3",
                          "Samsung",
                          "Make up",
                          "Hair care",
                          "Skin care",
                          "Women cloths",
                          "Men cloths",
                          "Men hair and skin",
                          "Men Perfume",
                          "Women Perfume",
                           "Frozen food",
                          "Ice cream",
                          "Tvs",
                          "Walton",
                          "Yahmaha",
                          "Chaka savan",
                          "Detol handwash",
                          "Rice 40kg",
                          "Flour",
                          "Dal",
                          "Alltime cake",
                          "Biscuit",
                          "Tea",
                          "book",
                          "pen"


                         };
    printf("Please Enter Your Name\n");
    gets(str);
    printf("Hello %s, Welcome to our Online Shopping.\n",str);
    system("color 4B");
    do
    {
        //C is 1 by default
        if(c==1)
        {
            printf("Enter \n1 - kids section\n2 - Computer section\n3 - Shoes section\n4 - Mobile section\n5 - women section\n6 - men section\n7 - perfume section \n8 -food section \n9 - Bike section \n10 - Daily needs\nEnter any number\n");
            scanf("%d",&choice);
            system("CLS");
            switch(choice)
            {
                case 1:
            {
                int kidsection;
                printf("Enter\n1 - kids cloths - tk.200\n2 - kids dypar - tk.120\n3 - kids toy - tk.180\n Any other number to exit\n");
                scanf("%d",&kidsection);
                cost[0]=200;
               cost[1]=120;
                 cost[2]=180;
                switch(kidsection)
                {
                case 1:
                {
                    int num;
                    printf("You chose kids cloths - tk.200.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[0]++;
                        totalCost+=200;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }


                case 2:
                {
                    int num;
                    printf("You chose kids dypar - tk.120.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[1]++;
                        totalCost+=120;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 3:
                {
                    int num;
                    printf("You chose kids toy - tk.180.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[2]++;
                        totalCost+=180;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from kids section\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int accessoriesChoice;
                printf("Enter\n1 - Memory 16 GB - tk.355\n2 - Mouse- tk.500\n3 - Pendrive 16 GB - tk.550\nAny other number to exit\n");
                scanf("%d",&accessoriesChoice);
                cost[3]=355;
                cost[4]=500;
                cost[5]=550;
                switch(accessoriesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose memory 16GB tk.355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[3]++;
                        totalCost+=355;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Mouse tk.500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[4]++;
                        totalCost+=500;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Pendrive 16GB tk.550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[5]++;
                        totalCost+=550;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Computer section\n");
                    break;
                }
                }
                break;
            }
            case 3:
            {
                int shoessection;
                printf("Enter\n1 - Apex - tk.3550\n2 - Bata - tk.5000\n3 - Bay - tk.2800\nAny other number to exit\n");
                scanf("%d",&shoessection);
                cost[6]=3550;
                cost[7]=5000;
                cost[8]=2800;
                switch(shoessection)
                {
                case 1:
                {
                    int num;
                    printf("You chose Apex Shoes for tk.3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[6]++;
                        totalCost+=3550;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose bata for tk.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[7]++;
                        totalCost+=5000;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose bay for tk.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[8]++;
                        totalCost+=2800;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Shoes section\n");
                    break;
                }
                }
                break;
            }
            case 4:
            {
                int mobilesection;
                printf("Enter\n1 - Redmi 3 - tk.11000\n2 - Nokia 3 - tk.9866\n3 - Samsung - tk.12800\nAny other number to exit\n");
                scanf("%d",&mobilesection);
                cost[9]=11000;
                cost[10]=9866;
                cost[11]=12800;
                switch(mobilesection)
                {
                case 1:
                {
                    int num;
                    printf("You chose to buy Mi Note 3 for tk.11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[9]++;
                        totalCost+=11000;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose to buy Nokia 3 for tk.9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[10]++;
                        totalCost+=9866;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose to buy Samsung for tk.12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[11]++;
                        totalCost+=12800;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Mobile section\n");
                    break;
                }
                }
                break;
            }
            //4 option start
            case 5:
            {
                int womensection;
                printf("Enter\n1 -make up- tk.2400\n2 -hair care-tk. 3560 \n3 - skin care- tk.2890\n4 wemen clothes-5600tk\nAny other number to exit\n");
                scanf("%d",&womensection);
                cost[12]=2400;
                cost[13]=3560;
                cost[14]=2890;
                cost[15]=5600;
                switch(womensection)
                {
                case 1:
                {
                    int num;
                    printf("You chose makeup- tk.2400.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[12]++;
                        totalCost+=2400;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose hair care -tk.2560Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[13]++;
                        totalCost+=2560;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose skin care- tk.2890.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[14]++;
                        totalCost+=2890;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 4:
                {
                    int num;
                    printf("You chose women cloths- tk.5600.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[15]++;
                        totalCost+=5600;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from women section\n");
                    break;
                }
                }
                break;
            }

            //5 no start
            case 6:
            {
                int mensection;
                printf("Enter\n1 -men cloths- tk.4400\n2 -men hair and skin care-tk. 6560\nAny other number to exit\n");
                scanf("%d",&mensection);
                cost[16]=2400;
                cost[17]=6560;
                switch(mensection)
                {
                case 1:
                {
                    int num;
                    printf("You men cloths- tk.4400.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[16]++;
                        totalCost+=4400;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose men hair and skin care -tk.6560Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[17]++;
                        totalCost+=6560;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }

                default:
                {
                    printf("Exit from men section\n");
                    break;
                }
                }
                break;
            }
            //5 no close
            //6 no start
            case 7:
            {
                int perfumesection;
                printf("Enter\n1 -men perfume armani- tk.8400\n2 -women perfume shalini-tk. 9560\nAny other number to exit\n");
                scanf("%d",&perfumesection);
                cost[18]=8400;
                cost[19]=9560;
                switch(perfumesection)
                {
                case 1:
                {
                    int num;
                    printf("You chose-men perfume armani- tk.8400.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[18]++;
                        totalCost+=8400;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose-women perfume shalini-tk. 9560.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[19]++;
                        totalCost+=9560;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from perfume section\n");
                    break;
                }
                }

                break;
            }
            //7 no start
            //6 no start
            case 8:
            {
                int foodsection;
                printf("Enter\n1 -frozen food- tk.1200\n2 -ice cream-tk. 260\nAny other number to exit\n");
                scanf("%d",&foodsection);
                cost[20]=1200;
                cost[21]=260;
                switch(foodsection)
                {
                case 1:
                {
                    int num;
                    printf("You chose-frozen food- tk.1200.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[20]++;
                        totalCost+=1200;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose-ice cream-tk. 260.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[21]++;
                        totalCost+=260;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from food section\n");
                    break;
                }
                }

                break;
            }

             case 9:
            {
                int bikesection;
                printf("Enter\n1 - Tvs - tk.100000\n2 - Walton - tk.150000\n3 - Yahmaha - tk.200000\n Any other number to exit\n");
                scanf("%d",&bikesection);
                cost[22]=100000;
                cost[23]=150000;
                cost[24]=200000;

                switch(bikesection)
                {
                case 1:
                {
                    int num;
                    printf("You chose Tvs - tk.100000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[22]++;
                        totalCost+=100000;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Walton - tk.150000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[23]++;
                        totalCost+=150000;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Yahmaha - tk.200000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[24]++;
                        totalCost+=200000;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }

                default:
                {
                    printf("Exit from Bike section\n");
                    break;
                }
                }
                break;
            }
             case 10:
            {
                int dailysection;
                printf("Enter\n1 - Chaka savan - tk.15\n2 - Detol handwash - tk.120\n3 - Rice 40kg - tk.4500\n4 - Flour 1kg- tk.40\n5 - Dal 1kg- tk.100\n6- Altime cake- tk.15\n7 - Biscuit- tk.12\n8 - Tea- tk.75\n9 - Book- tk.20\n10 - Pen tk.5\n Any other number to exit\n");
                scanf("%d",&dailysection);
                cost[25]=15;
                cost[26]=120;
                cost[27]=4500;
                cost[28]=40;
                cost[29]=100;
                cost[30]=15;
                cost[31]=12;
                cost[32]=75;
                cost[33]=20;
                cost[34]=5;
                switch(dailysection)
                {
                case 1:
                {
                    int num;
                    printf("You chose Chaka savan - tk.15.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[25]++;
                        totalCost+=15;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Detol handwash - tk.120.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[26]++;
                        totalCost+=120;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Rice 40kg - tk.4500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[27]++;
                        totalCost+=4500;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 4:
                {
                    int num;
                    printf("You chose Flour 1kg - tk.40.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[28]++;
                        totalCost+=40;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 5:
                {
                    int num;
                    printf("You chose Dal 1kg - tk.100.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[29]++;
                        totalCost+=100;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 6:
                {
                    int num;
                    printf("You chose Altime cake - tk.15.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[30]++;
                        totalCost+=15;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 7:
                {
                    int num;
                    printf("You chose Biscuit - tk.12.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[31]++;
                        totalCost+=12;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 8:
                {
                    int num;
                    printf("You chose Tea- tk.75.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[32]++;
                        totalCost+=75;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 9:
                {
                    int num;
                    printf("You chose Book- tk.20.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[33]++;
                        totalCost+=20;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                 case 10:
                {
                    int num;
                    printf("You chose Pen - tk.5.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        a[34]++;
                        totalCost+=5;
                    }
                    printf("Your Cost in Cart is %d\n",totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Daily needs\n");
                    break;
                }
                }
                break;
            }
            default:
            {
                printf("Enter Valid Categories Choice\n");
                break;
            }
            }
            system("CLS");
            printf("%s's cart\n",str);
            printf("\nId\t\tItems\t\t\t\tQuantity\t\t\tCost\n");
            for(i=0; i<35; i++)
            {
                if(a[i]!=0)
                {
                    printf("%d\t\t%s\t\t\t\t%d\t\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
                }
            }
            printf("\nTotal Cost\t\t\t\t\t%d\n",totalCost);
            printf("\nIf you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \n3 peyment method\nEnter any number\n");
            scanf("%d",&c);
            system("CLS");
        }
        if(c==2)
        {
            int id;
            printf("Enter id to delete item\n");
            scanf("%d",&id);
            if(id<35&&id>=0)
            {
                totalCost=totalCost-(cost[id]*a[id]);
                a[id]=0;
            }
            else
            {
                printf("Enter Valid id\n");
            }
            printf("Revised Items \n");
            printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0; i<35; i++)
            {
                if(a[i]!=0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t\t\t\t\t%d\n",totalCost);
            printf("\nIf you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d",&c);
        }
        if(c==3)
        {
            printf("\nPress <1> OLD MEMBER");
            printf("\nPress <2> NEW MEMBER");
             printf("\nPress <3> registration \n");

            printf("\nEnter your Choice ::");
            scanf("%d",&ch);

            switch (ch)
            {
            case 1 :
             //   login();
    {
                struct login aw[5],ar[5];
                FILE *fptr;
                int i;
                char ch;
                system("color 1F");
                char username[50],password[20];
                fptr = fopen ("file.text","w");

                fflush(stdin);

                printf("\n username:");
                scanf("%s",&username);
                printf("Enter password :");
                i=0;
                while(1)
                {
                    ch=getch();
                    if(ch==13)
                    {
                        break;
                    }
                    else
                    {
                        password[i]=ch;
                        i++;
                        printf("*");
                    }
                }
                password[i]='\0';
                printf("\n");



                if(strcmp(username,"SHAGOR")==0 ||strcmp(username,"HAQUE")==0 && strcmp(password,"123456")==0 ||strcmp(password,"654321")==0)
                {
                    system("color 2");
                    printf("\nPASSWORD ACEPTED .Welcome!!.......\n");
                   /*int reciver = */
                     old_member_payment(fun_total(totalCost));
                  /* printf("now old member balance is %d tk.",reciver);*/


                }
                else
                {
                    system("color 4C");
                    printf("wrong password.please try again");
                }
                // read side
                fwrite (aw,sizeof(aw),1,fptr);
                fclose(fptr);
                fptr=fopen ("file.text","r");
                fread(ar,sizeof(ar),1,fptr);


                getch();
                return 0;
            }



            break;

            case 2:
               login(fun_total(totalCost));
                break;
                 case 3:
                reg(fun_total(totalCost));
                break;
            default:
                printf("Wrong choice !");
                break;
            }
        }
        system("color 1A");
    }

    while(c==1 || c==2 ||c==3);
    printf("Your Final Cost with 5%% vat is %d tk\n",fun_total(totalCost));
    printf("Thanks %s for Choosing Us and Visit us again.\n",str);
}

void old_member_payment(int used_money)
{
    int SHAGOR=1000;
       int result;
    printf("Customer previous balance is %d tk\n",SHAGOR);
    printf("Customer cost with 5%% vat is  %d tk\n",used_money);
    result=SHAGOR-used_money;
    if(result>=0)
    {
         printf("now old member balance is %d tk.",result);
      //return result;
    }
    else
    {
        printf("you do no have sufficient balance \n you need %d tk\n",result);
    }

}
void new_member_payment(int used_money)
{
    int SHAGOR1=250;
       int result;
    printf("Customer previous balance is %d tk\n",SHAGOR1);
    printf("Customer cost after adding 5%% vat  is %d tk\n",used_money);
    result=SHAGOR1-used_money;
    if(result>=0)
    {
         printf("now new member balance is  %d tk.\n",result);
      //return result;
    }
    else
    {
        printf("you do no have sufficient balance \n you need %d tk\n",result);
    }
}
int fun_total(int x)
{
    int vat;
    vat=x*5/100+x;
    //printf("cost %f",vat);
    return vat;
}
/*
int login_reg()
{
system("color 3F");
printf("\n\nWELCOME!!IF YOU NEWLY REGISTERING YOU WILL GET 250TK..RESGISTER NOW");
printf("\n\n...................................................................");
printf("\n\nPress enter for continue..=...=...=..=..=..=..!!");
if(getch()==13)
  system("CLS");
printf("\n\n1. LOGIN\t\t2. REGISTER");
printf("\n\nENTER NUMBER FOR CHOICE: ");
scanf("%d",&ch);
switch(ch)
  {
    case 1: system("CLS");
        login();
        break;
    case 2: system("CLS");
        reg();
        break;
    default: printf("\n\nERROR.!!!!!!!!!!!!!!!");
        printf("\n\n\t\t\tPress Enter to TRY again >>>>>>>!!!!");
        if(getch()==13)
        system("CLS");

  }
  return 0
  */
  int login(int g)
    { int u=g;
      FILE *fptr;
      char c,name[30],pass[30];
      int i, z=0;
      int sumaya,suma;
      fptr=fopen("reg.txt","ab+");
      printf("\n\nWELCOME TO LOG IN SECTION");
      printf("\n\n===========================");
      for(i=0;i<100;i++)
      {
          system("color 5F");
        printf("\n\nENTER USERNAME: ");
        scanf("%s",&name);
        printf("\n\nENTER PASSWORD: ");
        while((c=getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
      while(!feof(fptr))
        {
        fread(&w[i],sizeof(w[i]),1,fptr);
          sumaya=strcmp(name,w[i].name);
          suma=strcmp(pass,w[i].pass);
          if(sumaya==0&&suma==0)
          {
            system("CLS");
            printf("\n\nYOU HAVE LOGGED IN SUCCESSFULLY......");
            printf("\n\n\nWELCOME, HAVE A NICE DAY\n");
            new_member_payment(g);
            break;
          }
        else if(sumaya==0&&suma!=0)
          {
              system("color CF");
            printf("\n\nWRONG PASSWORD!! Not %s??",name);
            printf("\n\n\t(Press 's' to again login)");
            if(getch()=='s'||getch()=='S')
              login(u);
          }
        else if(sumaya!=0)
          {
               system("color CF");
            printf("\n\nTHERE IS NO ID REGISTER WITH THIS NAME\npress ENTER for registration");
            if(getch()==13)
            system("CLS");
            reg(u);
          }
        }
        break;
      }
      getch();
    }

int reg(int x)
  { int p=x;
    FILE *fptr;
    char c,username[50];
     int i, z=0;
    fptr=fopen("reg.txt","ab+");
    printf("\n\n\nWELCOME TO REGISTATION SECTION");
    printf("\n\n\n.................................");
    for(i=0;i<100;i++)
    {
        system("color DF");
      printf("\n\nENTER USERNAME: ");
      scanf("%s",&username);
        while(!feof(fptr))
        {g
          fread(&w[i],sizeof(w[i]),1,fptr);
          if(strcmp(username,w[i].name)==0)
            {
            printf("\n\nUSERNAME ALREDY EXISTS");

            reg(totalCost);
            }
          else
          {
            strcpy(w[i].name,username);
            break;
          }
        }
      printf("\n\nENTER PASSWORD: ");
      while((c=getch())!=13)
        {
          w[i].pass[z++]=c;
          printf("%c",'*');
        }
      fwrite(&w[i],sizeof(w[i]),1,fptr);
      fclose(fptr);
      printf("\n\nPress enter if you agree with Username and Password");
      if((c=getch())==13)
        {
        system("CLS");
        printf("\n\nYou are successfully registered");
        printf("\n\nTry login your account??????  ");
        printf("PRESS 1 FOR YES\t PRESS 2 FOR NO\n");
        scanf("%d",&ch);
        system("color 60");
        switch(ch)
          {
              case 1: system("CLS");
                    login(p);
                    break;
              case 2: system("CLS");
                    printf("\n\nTHANK YOU FOR REGISTERING");
                    break;
          }
        }
        break;
      }
    getch();
  }




