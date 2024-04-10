#include <stdio.h>
#include <stdlib.h>
void Alfabe(char a[],int size );
int main()
{
char word[100];
scanf("%s",&word);
int uzunluk = 0 ;
for(int i = 0 ; word[i]!='\0';i++)
{
    uzunluk++;
}

Alfabe(word,uzunluk);







    return 0;
}





Alfabe(char a[],int size)
{
    for(int i = 0 ; i<size ; i++)
    {
        for(int j = i+1 ; j<size  ; j++)
        {
            if(a[i]>a[j])
               {
                    char temp = a[i];
                    a[i] = a[j];
                    a[j] = temp ;

               }
        }
    }
    printf("%s\n",a);

}
