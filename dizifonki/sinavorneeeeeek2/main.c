#include <stdio.h>
#include <stdlib.h>
void vowelsFinder( char a[],int size );
int main()
{
    char sentence[100];
    gets(sentence);
    int uzunluk = 0 ;
    for(int i = 0 ; sentence[i]!= '\0';i++)
    {
        uzunluk++;

    }
    vowelsFinder(sentence,uzunluk);

    return 0;
}
vowelsFinder(char a[] , int size )
{
    int vowels = 0 ;
    for(int i = 0 ; i<size; i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'||a[i]=='i'||a[i]=='I')
        {
            vowels++;
        }
    }
    printf(" the number of the vowels are : %d",vowels);
}
