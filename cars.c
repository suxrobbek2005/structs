#include <stdio.h>

struct Cars {

    char name[50];
    char brand[50];
    int year[30];
    int price[50];

};

int main(){

    int numbers;

    printf("Mashinlar sonini kiriting = ");
    scanf("%d",&numbers);
    
    struct Cars user[numbers];

    for (int i = 0; i < numbers; i++){

        printf("%d - Mashinaning nomini kiriting: ", i + 1);
        scanf("%s", user[i].name);
        
        printf("%d - Mashinaning brandini kiritng: ", i + 1);
        scanf("%s", user[i].brand);

        printf("%d - Mashinaning yilini kiriting: ", i + 1);
        scanf("%d", &user[i].year);

        printf("%d - Moshinaning narxini kiritng: ", i + 1);
        scanf("%d", &user[i].price);

    } 

    int max = user[0].price;
    int index = 0;

    for (int i = 0; i < numbers; i++){

        if (max <= user[i].price){

            max = user[i].price;
            index = i;
        }
    }
    
    puts("kiritilgan mashinalarninig eng qimati ");
    
    puts("  Name    brand    year    price  ||");
    puts("--------------------------------------------");

    printf("%c", user[index].name);
    printf("%c", user[index].brand);
    printf("%d", user[index].year);
    printf("%d", user[index].price);

    return 0;
}