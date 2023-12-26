//COMPILE COMMAND cc -std=c99 test_ft_strlcat.c -o TEST_STRLCAT -lft -L. -lbsd
//option -lbsd for linux because there isn't strlcat function in standard library.
//<bsd/string.h> included for same thing
//if your C stadard library have strlcat then delete -lbsd and include <string.h>
//							--With Love, Agvan--
#include <bsd/string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"
/*
The strlcat() function returns the total length of the string that would have been created if there was unlimited space. This might or might not be equal to the length of the string actually created, depending on whether there was enough space. This means that you can call strlcat() once to find out how much space is required, then allocate it if you do not have enough, and finally call strlcat() a second time to create the required string.
*/

void	compare_and_print(const char *test_name, size_t original, size_t reproduced)
{
   	if (original == reproduced)
		printf("%s: Passed\n", test_name);
	else
		printf("%s: Failed - Expected:%lu\tActual:%lu\n", test_name, original, reproduced);
}


int main() {
    // Test Case 1
    char dest1[20] = "Hello, ";
    char dest1_ft[20] = "Hello, ";
    const char *src1 = "world!";
    size_t size1 = 20;
    size_t expected_result1 = strlcat(dest1, src1, size1);
    size_t actual_result1 = ft_strlcat(dest1_ft, src1, size1);
    compare_and_print("Test Case 1", expected_result1, actual_result1);

    // Test Case 2
    char dest2[20] = "Hello, ";
    char dest2_ft[20] = "Hello, ";
    const char *src2 = "";
    size_t size2 = 20;
    size_t expected_result2 = strlcat(dest2, src2, size2);
    size_t actual_result2 = ft_strlcat(dest2_ft, src2, size2);
    compare_and_print("Test Case 2", expected_result2, actual_result2);

    // Test Case 3
    char dest3[10] = "abc";
    char dest3_ft[10] = "abc";
    const char *src3 = "def";
    size_t size3 = 5;
    size_t expected_result3 = strlcat(dest3, src3, size3);
    size_t actual_result3 = ft_strlcat(dest3_ft, src3, size3);
    compare_and_print("Test Case 3", expected_result3, actual_result3);

    // Test Case 4
    char dest4[15] = "123";
    char dest4_ft[15] = "123";
    const char *src4 = "456";
    size_t size4 = 10;
    size_t expected_result4 = strlcat(dest4, src4, size4);
    size_t actual_result4 = ft_strlcat(dest4_ft, src4, size4);
    compare_and_print("Test Case 4", expected_result4, actual_result4);

    // Test Case 5
    char dest5[5] = "ab";
    char dest5_ft[5] = "ab";
    const char *src5 = "cd";
    size_t size5 = 3;
    size_t expected_result5 = strlcat(dest5, src5, size5);
    size_t actual_result5 = ft_strlcat(dest5_ft, src5, size5);
    compare_and_print("Test Case 5", expected_result5, actual_result5);

    // Test Case 6
    char dest6[10] = "abcdefghi";
    char dest6_ft[10] = "abcdefghi";
    const char *src6 = "jklmn";
    size_t size6 = 10;
    size_t expected_result6 = strlcat(dest6, src6, size6);
    size_t actual_result6 = ft_strlcat(dest6_ft, src6, size6);
    compare_and_print("Test Case 6", expected_result6, actual_result6);

    // Test Case 7
    char dest7[10] = "123456";
    char dest7_ft[10] = "123456";
    const char *src7 = "789";
    size_t size7 = 7;
    size_t expected_result7 = strlcat(dest7, src7, size7);
    size_t actual_result7 = ft_strlcat(dest7_ft, src7, size7);
    compare_and_print("Test Case 7", expected_result7, actual_result7);

    // Test Case 8
    char dest8[20] = "Hello, ";
    char dest8_ft[20] = "Hello, ";
    const char *src8 = "world!";
    size_t size8 = 3;
    size_t expected_result8 = strlcat(dest8, src8, size8);
    size_t actual_result8 = ft_strlcat(dest8_ft, src8, size8);
    compare_and_print("Test Case 8", expected_result8, actual_result8);

    // Test Case 9
    char dest9[5] = "12";
    char dest9_ft[5] = "12";
    const char *src9 = "34";
    size_t size9 = 2;
    size_t expected_result9 = strlcat(dest9, src9, size9);
    size_t actual_result9 = ft_strlcat(dest9_ft, src9, size9);
    compare_and_print("Test Case 9", expected_result9, actual_result9);

    // Test Case 10
    char dest10[16] = "dnnjijijijidd";
    char dest10_ft[16] = "dnnjijijijidd";
    const char *src10 = "ddddd";
    size_t size10 = 10;
    size_t expected_result10 = strlcat(dest10, src10, size10);
    size_t actual_result10 = ft_strlcat(dest10_ft, src10, size10);
    compare_and_print("Test Case 10", expected_result10, actual_result10);

    return 0;
}
