//program to demonstrate the various operation on strings.
#include <stdio.h>
#include <string.h>

void demonstrateStringOperations() {
    char str1[100], str2[100], result[200];
    int length;

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    // String Length
    length = strlen(str1);
    printf("Length of first string: %d\n", length);

    length = strlen(str2);
    printf("Length of second string: %d\n", length);

    // String Concatenation
    strcpy(result, str1); // Copy str1 to result
    strcat(result, str2); // Concatenate str2 to result
    printf("Concatenated string: %s\n", result);

    // String Comparison
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("Both strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    // String Copy
    char copy[100];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    // Substring Extraction
    int start, lengthSub;
    printf("Enter start index for substring (0 to %lu): ", strlen(str1) - 1);
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &lengthSub);

    if (start >= 0 && start + lengthSub <= strlen(str1)) {
        char substring[100];
        strncpy(substring, str1 + start, lengthSub);
        substring[lengthSub] = '\0'; // Null-terminate the substring
        printf("Extracted substring: %s\n", substring);
    } else {
        printf("Invalid start index or length for substring.\n");
    }
}

int main() {
    demonstrateStringOperations();
    return 0;
}
