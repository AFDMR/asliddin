#include<iostream>
#include<cmath>

using namespace std;
 void tub(int a, int b){
    int k, k1;
   for(int i = 1; i*i < a; i++)
   {
     if( a % i != 0)
     {
     k = a;
     }
    else 
    {
        k = 0;
    }
     }
   for (int i = 1; i*i < b; i++)
   {
     if ( b % i !=0 )
     {
     k1 = b;
     }
    else
    {
        k1 = 0;
    }
}
   if (abs( k - k1 ) == 2)
   {
    cout << "Yes";
   }
   else
    cout << "No";
}
int main()
{
   int a, b;
   cin >> a >> b;
   tub ( a, b );

   return 0;
}
