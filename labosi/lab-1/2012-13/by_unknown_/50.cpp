#include <stdio.h>

int main (){
    
    int a[100001];
    
    int brojac = 0;
    int sum = 0;
    
    scanf( "%d", &a[brojac] );
    if( a[brojac] < 0 || a[brojac] > 100 ){ printf( "Nije unesen niti jedan broj iz trazenog intervala.\n" ); return 0; } 
    ++brojac;
    
    while( 1 ){
      scanf( "%d", &a[brojac] );
      if( a[brojac] < 0 || a[brojac] > 100 ) break;
      if( a[brojac] < 50 ) sum += a[brojac];
      ++brojac;
    }
    
    printf( "Zbroj svih unesenih brojeva manjih od 50 je %d.\n", sum );
    
    return 0;
}
