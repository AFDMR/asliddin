#include <iostream>
#include <cmath>
#include <fctream>
gggggg


99999

using namespace std;
class piramida
{
 public:
   double a,h,l,hy,v,sa,sy,st;
   void kirit()
   {
   cout<<"a=";cin>>a;
   cout<<"l=";cin>>l;
   cout<<"h=";cin>>h;
   }
   void chiqar()
   {
    sa=a*a;
    hy=sqrt(l*l-a*a/4);
    sy=a*hy/2;
    v=sa*h/3;
    st=sa+4*sy;
    cout<<"Asosi kvadratdan iborat bo'lgan piramidaning asosining yuzi "<<sa<<endl;
    cout<<"Asosi kvadratdan iborat bo'lgan piramidaning yon tomoni balandligi "<<hy<<endl;
    cout<<"Asosi kvadratdan iborat bo'lgan piramida yon tomoninig yuzi "<<sy<<endl;
    cout<<"Asosi kvadratdan iborat bo'lgan piramidaning to'la sirtining yuzi "<<st<<endl;
    cout<<"Asosi kvadratdan iborat bo'lgan piramidaning hajmi "<<v<<endl;
   }
};
int main()
{
   piramida a;
   a.kirit();
   a.chiqar();
    return 0;
}
