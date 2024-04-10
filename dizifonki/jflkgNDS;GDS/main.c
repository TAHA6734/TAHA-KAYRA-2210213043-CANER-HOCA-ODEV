
#include <stdio.h>
#include <stdlib.h>

void sentenceCounter(char a[], int size);

int main()
{
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);

    sentenceCounter(sentence, sizeof(sentence));
    return 0;
}

void sentenceCounter(char a[], int size)
{
    int kelime = 0;
    int isSpace = 1; // Başlangıçta bir önceki karakter boşluk gibi düşünülecek.

    for (int i = 0; i < size; i++)
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        {
            isSpace = 1; // Eğer şu anki karakter boşluk, tab veya yeni satırsa, isSpace'i 1 yap.
        }
        else
        {
            if (isSpace)
            {
                kelime++; // Eğer bir önceki karakter boşluk, tab veya yeni satır, şu anki karakter boşluk, tab veya yeni satır değilse, yeni kelime başlamıştır.
            }
            isSpace = 0; // Eğer şu anki karakter boşluk, tab veya yeni satır değilse, isSpace'i 0 yap.
        }
    }

    // Eğer döngü sona erdiğinde en son karakter boşluk, tab veya yeni satır ise ve bir önceki karakter de aynı şekilde boşluk, tab veya yeni satırsa, kelime sayısını azalt.
    if (isSpace && (a[size - 2] == ' ' || a[size - 2] == '\t' || a[size - 2] == '\n'))
    {
        kelime--;
    }

    printf("%d kelime var\n", kelime);
}

