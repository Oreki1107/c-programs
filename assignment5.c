#include <stdio.h>

int tmp = 20;

main( )

{

printf("%d ",tmp); // 20 will be printed here as "tmp" is a global variable.

func( );

printf("%d ",tmp); // 20 will be printed because global "tmp" variable is still unchanged.

}

func( )

{

static int tmp = 10; // static "tmp" has local scope.

printf("%d ",tmp); // 10 will be printed here.

}
