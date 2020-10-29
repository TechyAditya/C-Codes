#include <stdio.h>
int main()
{
    char username;
    int password;
    printf("Username character: ");
    scanf("%c", &username);
    printf("PIN: ");
    scanf("%d", &password);

    if (username == 'a')
    {
        if (password == 12345)
            printf("Login successful");
        else
            printf("PIN is incorrect");
    }
    else
        printf("Username is incorrect, try again");

    return 0;
}