#include<stdio.h>
void swap(int *px, int *py)
{
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}

int main(){
    int a=2,b=1;
    printf("Two variables are %d %d\n",a,b);
    swap(&a,&b);
    printf("Two variables are %d %d\n",a,b);
    return 0;

}