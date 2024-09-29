#include <stdio.h>

int main()
{
    char str[100] = "Arpita";
    char str1[10] = "Das";
    int i = 0;
    int is_same = 1; 

    
    while (str[i] != '\0' && str1[i] != '\0')
    {
        if (str[i] != str1[i])
        {
            is_same = 0; 
            break;       
        }
        i++;
    }

    
    if (is_same && str[i] == '\0' && str1[i] == '\0')
    {
        printf("The strings are the same\n");
    }
    else
    {
        printf("The strings are not the same\n");
    }

   
    i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    while (str1[j] != '\0')
    {
        str[i] = str1[j];
        i++;
        j++;
    }
    str[i] = '\0';
    printf("Concatenated string: %s\n", str);

    
    char nstr[100];
    for (i = 0; str[i] != '\0'; i++)
    {
        nstr[i] = str[i];
    }
    nstr[i] = '\0'; 

    printf("New copy string is: %s\n", nstr);
    return 0;
}
