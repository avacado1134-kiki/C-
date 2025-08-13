// reverse the string and tell palindrome or not
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[7];
//     printf("Enter the string \n");
//     scanf("%s",&s1);
//     char s2[7];
//     strcpy(s2,s1);
//     printf("Entered string %s \n",s1);
//     printf("Reversed string %s \n",strrev(s1));
    

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str); // takes input without spaces

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0'; // end the reversed string

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("Reversed string: %s\n", rev);

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
