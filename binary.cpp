#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std ;

int ans[ 100 ] , cnt = 0 ; 

int mod( int x ) {
	if ( x > 0 ) return x % ( -2 ) ; else return - ( x % ( -2 ) ) ; 
}

int div( int x ) {
	if ( ! mod( x ) ) return x / ( -2 ) ; else return ( x - 1 ) / ( -2 ) ; 
}

int main(  ) {
	freopen( "binary.in" , "r" , stdin ) ;
	freopen( "binary.out" , "w" , stdout ) ; 
	int n ; cin >> n ; 
	if ( ! n ) cout << 0 << endl ; 
	else {
		for ( ; n ; n = div( n ) ) {
			ans[ cnt ++ ] = mod( n ) ;
		}
		for ( int i = cnt - 1 ; i >= 0 ; -- i ) cout << ans[ i ] ;
		cout << endl ; 
	}
	fclose( stdin ) , fclose( stdout ) ;
	return 0 ;  
}
