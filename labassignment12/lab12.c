// Xiao Lan
// lan.x@northeastern.edu

#include <stdio.h>
#include <string.h>

int compression(char arr[], int n, char res[])
{
    int i;
    int count = 1; // counter
    int index = 0; // to store the result

    // insert your code here
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            res[index++] = arr[i];
        }
        else
        {
            res[index++] = arr[i];
            res[index++] = count + '0';
        }
        count = 1;
    }
    return strlen(res);
}

int main()
{
    char a[] = "aaaaaaaaaaaaaabbbbcccd";
    char res[50];
    int r, n = strlen(a); // n is the size of input array
    r = compression(a, n, res);
    printf("length of the compressed string: %d\n", r);
    return 0;
}
