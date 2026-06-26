#include <stdio.h>

int main()
{
    char s[] = "Gavi@1";
    int alphabetCount = 0, digitCount = 0, specialCount = 0, i;
    
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            alphabetCount++;
        }
        else if (s[i] >= '0' && s[i] <= '9') 
        {
            digitCount++;
        }
        else 
        {
            specialCount++;
        }
    }
    printf("count of alphabets are %d\n", alphabetCount);
    printf("count of digit are %d\n", digitCount);
    printf("count of special character are %d\n", specialCount);
}
