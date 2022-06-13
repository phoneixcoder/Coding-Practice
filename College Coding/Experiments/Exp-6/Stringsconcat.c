#include <stdio.h>
#include <string.h>
 
int main( )
{
   char source[ ] = " Yotube" ;
   char target[ ]= " C tutorial" ;
 
   printf ( "\nSource string = %s", source ) ;
   printf ( "\nTarget string = %s", target ) ;
 
   strcat ( target, source ) ;
 
   printf ( "\nTarget string after strcat( ) = %s", target ) ;\

}