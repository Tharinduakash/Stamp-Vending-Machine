#include <stdio.h>

void main()
{

int price,rs_25=10,rs_15=10,rs_10=10,coins50=10,coins25=10,coins10=10,coins5=10,count25=0,count15=0,count10=0,money,balance,i;



        printf("\t\t\tWelcome To Stamp Vending Machine!!!!!!\n");
        printf("\n\t\t\tWe Can Help You To Get Stamps As You Wish\n");
        printf("\n\tReminder!!! \nYou can get 25,15,10 stamps only.\n");
        printf("\nHow much price a stamp do you need:");
        scanf("%d",&price);
        if(rs_25==0||rs_15==0||rs_10==0){
                printf("\nSorry!!You can't get stamp at this time.\n",price);
                printf("\n\n No Stamp Available");
                printf("\n\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
                scanf("%d",&i);
                printf("\n\n-------------------------------------------------------------\n");
                }
                else{
         if((price!=25) && (price!=15) && (price!=10)){
            printf("\nSorry!!You can't get a stamp.\n");
            printf("\nRs.%d stamps not available in this machine.\n",price);
            printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
            scanf("%d",&i);
         }
          else{
          printf("\nNow you can drop your money in the machine.\n");
          printf("\nReminder!!! You can drop 50,25,10,5 coins only.\nDon't drop two coins at one time\n");
          printf("\nDrop your money:");
          scanf("%d",&money);
          if(money<price){
            printf("\nInsufficient amount tendered.Please check your coin.");
            printf("\nYou can't get your stamp\n");
            printf("\n\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
            scanf("%d",&i);
            printf("\n-------------------------------------------------------------\n"); }
         else{
          if((money!=50)&&(money!=25)&&(money!=10)&&(money!=5)){
                printf("\nInsufficient amount tendered.Please check your coin.\n");
                printf("\nYou can't get your stamps\n");
                printf("\n\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
                scanf("%d",&i);
                printf("\n-------------------------------------------------------------\n");
                }
                else{
                    printf("\n\n Thank You!!!! Your Support..............");
                    balance=money-price;
                    printf("\n\nYour Balance: %d",balance);
                    if(price==25){
                            printf("\n\nNow Available Stamps: %d : %d : %d ",--rs_25,rs_15,rs_10 );
                    }
                    else{
                        if(price==15){
                            printf("\n\nNow Available Stamps: %d : %d : %d ",rs_25,--rs_15,rs_10 );

                        }
                        else{
                            printf("\n\nNow Available Stamps: %d : %d : %d ",rs_25,rs_15,--rs_10 );

                        }

                        }

                    }

                    }
                    if(balance==25){
                        printf("\n\nYour Balance= 25 coin");



                        }else{
                        if(balance==35){
                            printf("\n\nYour Balance= 25 coin and 10 coin");


                            }else{
                            if(balance==10){
                                printf("\n\nYour Balance= 10 coin");


                            }
                            else{
                                if(balance==40){
                                    printf("\n\nYour Balance= 25 coin ,10 coin & 5 coin .");


                                }
                                else{
                                        if(balance==15){

                                    printf("\n\nYour Balance= 10 coin & 5 coin");
                                        }
                                        else{
                                          printf("\n\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
                                          scanf("%d",&i);
                printf("\n-------------------------------------------------------------\n");
                                        }



                                }



                                }

                            }
                        }


                        }
                    }
                }











