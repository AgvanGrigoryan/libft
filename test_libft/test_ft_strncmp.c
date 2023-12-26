#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    // Test Case 1: Equal strings
    printf("Test Case 1: Original: %d, Reproduced: %d\n", strncmp("hello", "hello", 5), ft_strncmp("hello", "hello", 5));

    // Test Case 2: Unequal strings, same prefix
    printf("Test Case 2: Original: %d, Reproduced: %d\n", strncmp("hello", "help", 4), ft_strncmp("hello", "help", 4));

    // Test Case 3: Unequal strings, different prefix
    printf("Test Case 3: Original: %d, Reproduced: %d\n", strncmp("hello", "world", 3), ft_strncmp("hello", "world", 3));

    // Test Case 4: Equal strings, compare full length
    printf("Test Case 4: Original: %d, Reproduced: %d\n", strncmp("hello", "hello", 5), ft_strncmp("hello", "hello", 5));

    // Test Case 5: Equal strings, compare with length greater than string length
    printf("Test Case 5: Original: %d, Reproduced: %d\n", strncmp("hello", "hello", 10), ft_strncmp("hello", "hello", 10));

    // Test Case 6: Equal strings, compare with length less than string length
    printf("Test Case 6: Original: %d, Reproduced: %d\n", strncmp("hello", "hello", 3), ft_strncmp("hello", "hello", 3));

    // Test Case 7: Unequal strings, compare with length less than string length
    printf("Test Case 7: Original: %d, Reproduced: %d\n", strncmp("hello", "hell", 5), ft_strncmp("hello", "hell", 5));

    // Test Case 8: Unequal strings, compare with length less than string length (different lengths)
    printf("Test Case 8: Original: %d, Reproduced: %d\n", strncmp("hello", "hell", 10), ft_strncmp("hello", "hell", 10));

    // Test Case 9: Equal strings, compare with length 0
    printf("Test Case 9: Original: %d, Reproduced: %d\n", strncmp("hello", "world", 0), ft_strncmp("hello", "world", 0));

    // Test Case 10: Compare empty strings
    printf("Test Case 10: Original: %d, Reproduced: %d\n", strncmp("", "", 5), ft_strncmp("", "", 5));

    return 0;
}
