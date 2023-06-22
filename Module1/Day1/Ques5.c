#include<stdio.h>
 int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
        num |= 1;
        break;
        case 2: 
        num &= ~(1 << 31);
        break;
        case 3: 
        num ^= 1 << 16;
        break;
        default:
            printf("Invalid operation type\n");
    }

    return num;
}

int main(){
    int num,choice;
    printf("\nEnter a 32bit value:");
    scanf("%d",&num);
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    int res=bit_operations(num,choice);
    printf("%d",res);
}