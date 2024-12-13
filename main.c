#include <stdio.h>
#include <string.h>

struct Phone {
    char name[64];
    char brand[64];
    double price;
    int ram;
    char color[32];
};

int main(){

    struct Phone phone1 = {"S24", "Samsung", 1200.00, 12, "Red"};

    printf("%s\n", phone1.name);  // member operator
    printf("%s\n", phone1.brand);
    printf("%.2lf\n", phone1.price);
    printf("%d\n", phone1.ram);
    printf("%s\n", phone1.color);

    return 0;
}
