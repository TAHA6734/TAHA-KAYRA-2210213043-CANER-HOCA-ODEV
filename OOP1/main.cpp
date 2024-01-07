#include <iostream>

using namespace std;


class insan {

public:  /*acik*/  /*private -> gizli  protected->korunmus*/
string isim ;
string gozRengi;

};




int main()
{

   insan insan1;

            insan1.isim = "Taha" ;

                insan1.gozRengi = "Siyah" ;

    insan insan2;

        insan2.isim = "Ahmet" ;

            insan2.gozRengi = "mavi" ;


    cout<<insan1.isim<<" "<<insan1.gozRengi<<endl;

        cout<<insan2.isim<<" "<<insan2.gozRengi<<endl;















    return 0;
}

