//Linear search
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[ ] = {10,2,30,15,28,5};
    int value;
    printf("Enter your searching value : ");
    scanf("%d",&value);
    int pos = -1;
    for(int i = 0 ; i<6 ; i++)
    {
        if(value ==num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if(pos == -1)
    {
        printf("Not found");
    }
    else
        printf("The value is found at %d position ",pos);
    getch();
}
