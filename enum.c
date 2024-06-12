#include <stdio.h>
#include <stdlib.h>
#define MAX 2

/*enum day
{
    monday = 1 , thuesday , wendesday , thursday , friday 
} ;

int main()
{
    enum day d = friday ;

        printf("%d day is ",d) ;
    return 0 ;
}*/

/*enum state 
{
    working = 0 , failed , freezed 
};

enum state currSate = 0 ;

enum state FindState(){
    return currSate ; 
}

int main()
{

    (FindState() == working ) ? printf("working\n") : printf("NOT WORKING \n ") ;
    
    
    return 0 ;

}*/




/*int main()
{

    enum result 
    {
        pass  ,  failed 
    };

    enum result s1 , s2 ;
    s1 = pass ; 
    s2 = failed ; 

    printf("%d",s2) ;

    return 0 ;
}*/


/*enum example 
{
    a = 0 , b ,  c 
};

enum example example1 = 2 ;

enum example answer ()
{

    return example1 ; 
}

int main()
{

    (answer() == c ) ? printf("dogru\n") : printf("yanlis\n");
       
        return 0 ;
}*/


/*enum sanfoundry 
{
    a , b = 3 , c 
};

enum sanfoundry g ;

int main()
{
    if(MAX == a )
    {
        printf("HELLO\n");
    }
    else 
    {
        printf("WELCOME\n") ;
    }

    return 0 ;
}*/


enum day 
{
    a , b , c = 5 , d , e

};

int main()
{

    printf("a icin bir deger girin \n ") ;
    scanf("%d ",&a) ;
    printf("%d = a ",a) ;

    return 0 ;
}
