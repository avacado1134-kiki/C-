// find the length of the longest substring without duplicate characters.
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[256];  // Store last index of every character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1; // Initialize with -1 (not seen)

    int maxLen = 0;  // Result
    int start = 0;   // Start of current window

    for (int i = 0; s[i] != '\0'; i++) {
        //In C, \0 is the null character — it’s how C marks the end of a string.
        // If character seen before, move start to after the last seen position
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i; // Update last seen index

        int currentLen = i - start + 1; // Length of current window
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    return maxLen;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  // Reads input until space

    int result = lengthOfLongestSubstring(str);
    printf("Length of longest substring without duplicates: %d\n", result);

    return 0;
}
