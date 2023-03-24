#include<studio.h>
main() {
    int a = 10;      
    if ((fork ( ) == 0))      
    a++;      
    printf ("%dn", a ); 
}

Output:10
