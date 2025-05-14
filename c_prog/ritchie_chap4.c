#include<stdio.h>

// recursion 
void printd(int n)
{
if (n < 0) {
putchar('-');
n = -n;
}
if (n / 10)
printd(n / 10);
putchar(n % 10 + '0'); // So for digit 7: 7 + '0' = 7 + 48 = 55 (which is ASCII '7')
// Takes the ASCII value and outputs the corresponding character
}

int main(){
    int k =123;
    printf("numnber is %d\n",k);
    printd(k);
    return 0;
}