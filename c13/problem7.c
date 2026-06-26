//Q7. Write a Program to count number of vowels and consonants in a given string.
#include <stdio.h>

int main()
{
   char s[]="gavi";
    int vowel=0,consonants, i;
    
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
    s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel++;
        }
        
        else 
        {
            consonants++;
        }
    }
    printf("count of vowels are %d\n", vowel);
    printf("count of consonats are %d\n", consonants);
}
