#include <stdio.h>

int main(){
    int printers, users, each_user;

    printf("Enter number of printers: ");
    scanf("%d", &printers);

    printf("Enter number of users: ");
    scanf("%d", &users);

    each_user = printers / users;
    printf("\nEach user gets %d printer(s).\n", each_user);

    return 0;
}

