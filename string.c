// #include<stdio.h>
// #include<string.h>
// int main()
// {   
//     char str[40];
//     printf("Enter a string");
//     gets(str);
//     puts(str);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{   
    char str[40];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    puts(str);
    return 0;
}