// Xiao Lan
// lan.x@northeastern.edu

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* function to encrypt the data*/
void encrypt(char text[], int key)
{
    int i;
    for (i = 0; i < strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + key) % 26 + 'A';
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + key) % 26 + 'a';
        }
        else {
            return;
        }
    }
}

/*function to decrypt the data*/
void decrypt(char text[],int key)
{
    int j;
    for (j = 0; j < strlen(text); j++) {
        if (text[j] >= 'A' && text[j] <= 'Z') {
            text[j] = (text[j] - 'A' - key + 26) % 26 + 'A';
        }
        else if (text[j] >= 'a' && text[j] <= 'z') {
            text[j] = (text[j] - 'a' - key + 26) % 26 + 'a';
        }
        else {
            return;
        }
    }
    
}


/*----------- Main program---------------*/
int main()
{
    char text[20] ;
    int keyvalue=3;
    /*Input string */
    printf("Enter the message:  ");
    scanf("%s",text);
    printf("text input   = %s\n",text);
    
    /*call function to encrypt the data*/
    encrypt(text,keyvalue);
    printf("Encrypted value = %s\n",text);
    
    /*call function to decrypt the data*/
    decrypt(text,keyvalue);
    printf("Decrypted value = %s\n",text);
    
    return 0;
}
