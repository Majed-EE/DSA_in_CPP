#include<stdio.h>
// implementing size of function
//  int main(){
// // Get total size including null terminator
// char str[] = "Hello";  // Array initialization
// size_t total_size = sizeof(str); // declart unsigned int?
// // how size of returns length? is one character one byte?
// printf("Total size including null terminator: %zu\n", total_size);

// // Print all characters including null terminator
// printf("All characters (including null terminator):\n");
// for (size_t i = 0; i < total_size; i++) {
//     if (str[i] == '\0') {
//         printf("\\0 ");  // Print the null terminator visibly
//     } else {
//         printf("%c ", str[i]);
//     }
// }
// printf("\n");

// return 0;
// }


#include <limits.h>
#include <float.h>

// Function to compute ranges directly
void compute_ranges() {
    // Signed char
    printf("Computed ranges:\n");
    printf("signed char: %d to %d\n", 
           -(int)((unsigned char)~0 >> 1) - 1, // ASCII table total numbers
           (int)((unsigned char)~0 >> 1)); // ~ is not operation
    
    // Unsigned char
    printf("unsigned char: 0 to %u\n", 
           (unsigned char)~0);
    
    // Signed short
    printf("signed short: %d to %d\n",
           -(int)((unsigned short)~0 >> 1) - 1,
           (int)((unsigned short)~0 >> 1));
    
    // Unsigned short
    printf("unsigned short: 0 to %u\n",
           (unsigned short)~0);
    
    // Signed int
    printf("signed int: %d to %d\n",
           -(int)((unsigned int)~0 >> 1) - 1,
           (int)((unsigned int)~0 >> 1));
    
    // Unsigned int
    printf("unsigned int: 0 to %u\n",
           (unsigned int)~0);
    
    // Signed long
    printf("signed long: %ld to %ld\n",
           -(long)((unsigned long)~0 >> 1) - 1,
           (long)((unsigned long)~0 >> 1));
    
    // Unsigned long
    printf("unsigned long: 0 to %lu\n",
           (unsigned long)~0);
    
    // Floating point types (harder to compute)
    printf("\nNote: Floating-point ranges are more complex to compute directly\n");
    printf("and are typically obtained from headers instead.\n");
}

int main() {
    // From standard headers
    printf("Ranges from standard headers:\n");
    printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);
    printf("signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    printf("\n");
    compute_ranges();

    return 0;
}