#include <stdio.h>
#include <string.h>

int main() {
    int items;
    float total;
    char type[20];
    int price = 150;

    printf("Enter Customer Type (Regular/Guest): ");
    scanf("%s", type);

    printf("Enter number of food items: ");
    scanf("%d", &items);

    total = items * price;

    if(strcmp(type, "Regular") == 0 || strcmp(type, "regular") == 0) {
        float discount = total * 0.05;
        total = total - discount;
        printf("5%% Discount Applied\n");

        if(total > 300) {
            printf("Special Gift Voucher Provided!\n");
        }
    }
    else if(strcmp(type, "Guest") == 0 || strcmp(type, "guest") == 0) {
        total = total + 5;
        printf("Rs.5 Delivery Charge Added\n");
    }
    else {
        printf("Invalid Customer Type\n");
        return 0;
    }

    printf("Final Bill Amount: Rs. %.2f\n", total);

    return 0;
}
