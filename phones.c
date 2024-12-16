#include <stdio.h> 

struct Phone {

    char name[50];
    char brand[56];
    char color[50];
    int ram[10];
    float price[40];

};

int main(){

    int number;

    printf("Nechta telifon haqida maluot kerak = ");
    scanf("%d", &number);
    struct Phone user[number];

    for(int i = 0; i < number; i++){
        
        printf("%d - Telifon nomini kiriting: ", i + 1);
        scanf("%s", user[i].name);

        printf("%d - Telifon brindini kiriting:", i + 1);
        scanf("%s", user[i].brand);

        printf("%d - Telifon xotirasini kirting:", i + 1);
        scanf("%d", &user[i].ram);

        printf("%d - Telifon rangini kiriting:", i + 1);
        scanf("%s", user[i].color);

        printf("%d - Telifon narxini kiriting:", i + 1);
        scanf("%f", &user[i].price);
    }
    
    printf("Narxi 500$ dan yuqori bo'lan telifonlar narxi:\n");
    printf("|| name  ||  brand  ||  ram  ||  color  ||  price  ||\n");
    printf("-----------------------------------------------------\n");
   
    for (int i = 0; i < number; i++){

       // if (price >= user[i].price){
            
            printf("%8s", user[i].name);
            printf("|| %6s", user[i].brand);
            printf("|| %7.d", user[i].ram);
            printf("|| %6s", user[i].color);
            printf("|| %9.f\n", user[i].price);
       // }
    }

    return 0;
}