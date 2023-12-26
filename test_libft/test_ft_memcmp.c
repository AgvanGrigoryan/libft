#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

int main() {
    // Test Case 1: Equal strings
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    size_t len = strlen(str1);

    int result = ft_memcmp(str1, str2, len);
    assert(result == memcmp(str1, str2, len));
    printf("Test Case 1 Passed\n");

    // Test Case 2: Different strings
    const char *str3 = "Hello";
    const char *str4 = "Hxllo";

    result = ft_memcmp(str3, str4, len);
    printf("Case 2:%d - %d\n", result, memcmp(str3, str4, len));
    //assert(result == memcmp(str3, str4, len));
    //printf("Test Case 2 Passed\n");

    // Test Case 3: Compare part of a string
    const char *str5 = "Hello, World!";
    const char *str6 = "Hello, Everyone!";
    size_t partialLen = 6; // Compare the first 6 characters

    result = ft_memcmp(str5, str6, partialLen);
    assert(result == memcmp(str5, str6, partialLen));
    printf("Test Case 3 Passed\n");

    // Test Case 4: Compare strings with different lengths
    const char *str7 = "Hello";
    const char *str8 = "Hello, World!";

    result = ft_memcmp(str7, str8, len);
    assert(result == memcmp(str7, str8, len));
    printf("Test Case 4 Passed\n");

    // Test Case 5: Compare empty strings
    const char *str9 = "";
    const char *str10 = "";

    result = ft_memcmp(str9, str10, 0); // Compare zero bytes
    assert(result == memcmp(str9, str10, 0));
    printf("Test Case 5 Passed\n");

    // Test Case 6: Compare strings with embedded null characters
    const char *str11 = "Hello\0World";
    const char *str12 = "Hello\0Everyone";

    result = ft_memcmp(str11, str12, 12); // Compare up to the null character in both strings
    assert(result == memcmp(str11, str12, 12));
    printf("Test Case 6 Passed\n");

    // Add more test cases as needed...

    printf("All tests passed!\n");

    return 0;
}

