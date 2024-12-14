#include <stdio.h>

// struct orqali dasturga foydalanuvchi malumotlarini kiritib oldik;

struct User {

    char firist_name[68];
    char last_name[68];
    char location[68];
    int birth_year[20];
    char numbers[20];

};

int main(){

    int number;
    
    // foydalanuchi suragan songacha dastur davom itishini taminlab oldik;

    printf("Nechta foydalanuvchi kerak = ");
    scanf("%d", &number);

    struct User users[number];

    for(int i = 0; i < number; i++){
          
        printf("%d - foydalanuchinig ismini kiriting : ", i + 1);
        scanf("%s", users[i].firist_name);

        printf("%d - foydalanuvching familyasini kiriting: ", i + 1);
        scanf("%s", users[i].last_name);

        printf("%d - foydalanuvching manzilini kiriting: ", i + 1);
        scanf("%s", users[i].location);

        printf("%d - foydalanuvchini to'g'ilgan yilini kiriting: ", i + 1);
        scanf("%d", &users[i].birth_year);

        printf("%d - foydalanuvchini telifon raqamini kiriting: ", i + 1);
        scanf("%s", users[i].numbers);

    }

    printf(" Foydalanuchi jadvali:\n");
    printf(" Firist_name    Last_naame     location    birth_day     numbers  ||\n");
    printf("-------------------------------------------------------------------------\n");
  

    for (int i = 0; i < number; i++){

        printf("%15s", users[i].firist_name);
        printf("| %15s", users[i].last_name);
        printf("| %10s", users[i].location);
        printf("| %7.d", users[i].birth_year);
        printf("| %15s\n", users[i].numbers);

    }

    return 0;
}