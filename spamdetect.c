#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char message[300];
    char spamWords[10][20] = {
        "win", "free", "prize", "offer", "click",
        "urgent", "lottery", "money", "claim", "congratulations"
    };

    int i, flag = 0;

    printf("Enter your message:\n");
    fgets(message, sizeof(message), stdin);

    // Convert message to lowercase
    for(i = 0; message[i]; i++)
        message[i] = tolower(message[i]);

    // Check for spam keywords
    for(i = 0; i < 10; i++)
    {
        if(strstr(message, spamWords[i]) != NULL)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("\nResult: SPAM Message Detected ❌");
    else
        printf("\nResult: NOT SPAM Message ✅");

    return 0;
}
