#include <stdio.h>
int deleteSingleDigit(int num)
{
    int largest = 0;
    int divisor = 1;
    int temp = num;
    while (divisor <= temp)
    {
        int deleteNum = (temp / (divisor * 10)) * divisor + (temp % divisor);
        if (deleteNum > largest)
        {
            largest = deleteNum;
        }
        divisor *= 10;
    }
    return largest;
}
int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largestNum = deleteSingleDigit(num);
    printf("After deleting a single digit number the largest number is: %d\n", largestNum);
    return 0;
}
