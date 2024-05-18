#include <stdio.h>
//protype
void print();
//no argument and no return value
//argument and return value
// argument and no return value
//no argument but return value

int main()
{
    print();
    return 0;
}

void print(){
    int a;
    printf("enter the nunber");
    scanf("%d",&a);
    printf("the number is %d ",a);
}
