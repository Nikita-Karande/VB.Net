// 4. Accept one character from user and convert case of that character. 
// Input : a Output : A 
// Input : D Output : d 
#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue>='A'||cValue<='Z')
    {
        printf("%c",cValue-32);
    }
    else if(cValue>='a'||cValue<='z')
    {
        printf("%c",cValue+32);
    }
    else
    {
        printf("Not character");
    }
}
int main()
{
    char cValue='\0';
    printf("Enter the  character:");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}