// run using gcc
#include<stdio.h>

// exercise 1
// int main(){

//     printf("hello world d\n");
//     return 0;
// }
// C=(5/9)(oF-32)

// int main(){
//     float far, cel;
//     int c,k=0;
//     long h;
//     c=getchar();
//     // k=(c!=EOF);
//     for (k=0;c!=EOF;h++){
        

        
//         // printf(c!=EOF);
        
//         c=getchar();
//         printf("h is %ld\n",h);

//     }
//     printf("breaking total word count is %ld",h);

// }




// exercise 1.8-1.10
// #include <stdio.h>

// int main() {
//     int c, nb = 0, nt = 0, nl = 0;
    
//     while ((c = getchar()) != EOF) {
//         if (c == ' ')
//             ++nb;
//         else if (c == '\t')
//             ++nt;
//         else if (c == '\n')
//             ++nl;
//     }
    
//     printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", nb, nt, nl);
//     return 0;
// }

// #include <stdio.h>
// /* count digits, white space, others */



int main()
{
int c, i, nwhite, nother;
int ndigit[10];
char str[] = "0 34j kdslflakds faskdf j25q423j "; // '\0-> null character
nwhite = nother = 0;
for (i = 0; i < 10; ++i)
    ndigit[i] = 0;
for (i=0; str[i]!='\0'; i++)
{   c=str[i];
    printf("loop is %d\nstr is %c",i,str[i]) ;
    if (c >= '0' && c <= '9'){
       ++ndigit[c-'0'];
    //    printf("this ran");
    }
    else if (c == ' ' || c == '\n' || c == '\t')
        ++nwhite;
    else
        ++nother;
}
printf("digits =");
for (i = 0; i < 10; ++i)
{
    printf(" %d", ndigit[i]);
    }
printf(", white space = %d, other = %d\n",nwhite, nother);
return 0;
}

// 1.6 arrays

// 1.7 functions

// 1.8 Arguments- call by value


// 1.9 cahracter arrays

// 1.10- external variables and scope
