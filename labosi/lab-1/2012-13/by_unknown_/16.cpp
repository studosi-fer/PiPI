#include <stdio.h>
#include <math.h>

int main (){
    
    int n;
    
    
    while( 1 ){
      scanf( "%d", &n );
      if( n >= 1 && n <= 1000 ) break;
    }
    
    double sum = 0.0;
    
    for( int i = 1; i <= n; ++i  ){
      sum += 1. / ((2*i-1)*(2*i+1));
    }
    
    printf( "%.5lf\n", sum );  
    printf( "%.5lf", fabs( sum - .5 ) );
    
    return 0;
}
    
    
    
    
