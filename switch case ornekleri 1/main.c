#include <stdio.h>
#include <stdlib.h>

int main()
{
 int ayinNumarasi;
 char ayinmevsimi;
 printf("lutfen ogrenmek istediginiz ayin numarasini giriniz");
 scanf("%d",&ayinNumarasi);

 switch(ayinNumarasi){

 case 1 :printf("%d numarali ay ocaktir",ayinNumarasi);
         ayinmevsimi='K';
    break;
  case 2 :printf("%d numarali ay subattir",ayinNumarasi);
   ayinmevsimi='K';
  break;
   case 3 :printf("%d numarali ay mart",ayinNumarasi);
   ayinmevsimi='I';
    break;
    case 4 :printf("%d numarali ay nisan",ayinNumarasi);
    ayinmevsimi='I';
    break;
     case 5 :printf("%d numarali ay mayis",ayinNumarasi);
     ayinmevsimi='I';
      break;
      case 6 :printf("%d numarali ay haziran",ayinNumarasi);
      ayinmevsimi='I';
       break;
       case 7 :printf("%d numarali ay temmuz",ayinNumarasi);
       ayinmevsimi='Y';
        break;
        case 8 :printf("%d numarali ay agustos",ayinNumarasi);
           ayinmevsimi='Y';
         break;
         case 9 :printf("%d numarali ay eylul",ayinNumarasi);
            ayinmevsimi='S';
          break;
          case 10 :printf("%d numarali ay ekimdir",ayinNumarasi);
            ayinmevsimi='S';
           break;
           case 11 :printf("%d numarali ay kasimdir",ayinNumarasi);
             ayinmevsimi='S';
            break;
            case 12 :printf("%d numarali ay araliktir",ayinNumarasi);
             ayinmevsimi='K';
             break;
             default :printf("lutfen gecerli bir ayin numarasini giriniz");
              break;

 }



if(ayinmevsimi=='K'){
    printf("Bu ay kis mevsimine aittir");
}

else if (ayinmevsimi=='Y'){
    printf("bu ay yaz mevsimine attir");
}
else if (ayinmevsimi=='S'){
    printf("bu ay sonbahar mevsimine aittir");
}
else if (ayinmevsimi=='I'){
    printf("bu mevsim ilkbahra aittir");
}














    return 0;
}
