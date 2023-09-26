#include<stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>

int selection;
//int cancel;
drinkChosen(selection);
float drink_cost(int selection);



int menu(){

  int choice;

  printf("---------------------- \n");

  printf("Jookide nimekiri: ");

  printf("\n\n");

  printf("1.  Pepsi");              printf("\t\t\t1.00\n");

  printf("2.  Miranda");            printf("\t\t\t1.00\n");

  printf("3.  CocaCola");           printf("\t\t\t1.00\n");

  printf("4.  Vesi");               printf("\t\t\t1.50\n");

  printf("5.  7up");                printf("\t\t\t\t1.00\n");

  printf("6.  Sprite");             printf("\t\t\t1.00\n");

  printf("7.  Mountain Dew");       printf("\t\t1.00\n");

  printf("8. katkesta");

  printf("\n\n");

  printf("Sisestage valik: ");

  scanf(" %d",&choice);



  return choice;

}

/* display users pick */

void chosen(int selection){
  switch(selection){
    case 1:
     printf("Valisite Pepsi");          printf("\t1.00\n");
     break;
    case 2:
     printf("Valisite Miranda");        printf("\t1.00\n");
     break;
    case 3:
     printf("Valisite cocacola");       printf("\t1.00\n");
     break;
    case 4:
     printf("Valisite vesi");           printf("\t1.50\n");
     break;
    case 5:
     printf("Valisite 7up");            printf("\t1.00\n");
     break;
    case 6:
     printf("Valisite sprite");         printf("\t1.00\n");
     break;
    case 7:
     printf("Valisite Mountain Dew");   printf("\t1.00\n");
     break;
    case 8:
     break;
  default:
     printf("Selline valik puudub!\n");
     break;

  }

}
/*get drink cost */

float drink_cost(int selection)

{

  float cost = 0;
  switch(selection){

    case 1:
      cost = 1.00;
      break;
    case 2:
      cost = 1.00;
      break;
    case 3:
      cost = 1.00;
      break;
    case 4:
      cost = 1.50;
      break;
    case 5:
      cost = 1.00;
      break;
    case 6:
      cost = 1.00;
      break;
    case 7:
      cost = 1.00;
      break;

  }
  return cost;

}

int main(){
    int amount = 1;
    int cancel;
  w:    while(amount){
            float item_cost;
            float new_drink;
            float money;
            float change;
            float total;
            float bill;
            selection = menu();
            drink_cost(selection);


         if(selection >= 1 && selection < 8){
                int cancel;
                item_cost = drink_cost(selection);
                printf("Arve on %.2f\n", item_cost);
                printf("1. joogi lisamiseks sisestage 1:  2. L6petamiseks sisestage: 2  3. tyhistamiseks sisestage: 3  :");
                scanf("%d", &cancel);

                    while(cancel == 1){
                        menu();
                        new_drink = drink_cost(selection);
                        total = new_drink + drink_cost;
                        printf("Arve on %.2f\n\n", total);
                        printf("1. joogi lisamiseks sisestage 1:  2. L6petamiseks sisestage: 2  3. tyhistamiseks sisestage: 3  :");
                        scanf("%d", &cancel);
                        return total;
                        getchar();

                    }if(cancel == 2){
                        total = item_cost;
                        printf("Arve on %.2f\n", total);
                        printf("Sisestage raha: ");
                        scanf("%f", &money);
                    }else{
                        exit(0);


                    }
                //scanf("%f", &money);
                printf("\n");
            if(money >= total){
                printf("Raha on sisestatdud:\n");
                change = money - total;
                printf("2ra unusta vahetusraha: %.2f\n", change);
                printf("head p2eva!");
                exit(0);

            }else{
                if(money < item_cost){
                    printf("Arve on: %.2f\n",bill = item_cost-money);
                    printf("sisestage raha: \n");
                    scanf("%f", &money);
                }if(money > bill){
                    change = money- bill;
                    printf("Teie vahetusraha on: %.2f\n",change);
                            printf("head p2eva!");
                            exit(0);
                    }
                    printf("not");
                 }
                    printf("\n");
                    getchar();
                    getchar();
            }else{
                if(selection == 8){
                    amount == 0;
                    exit(0);
                }
            }
    }

}

