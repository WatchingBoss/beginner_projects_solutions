// Printing text of song "99 bottles of beer on the wall"

#include <stdio.h>
#include <string.h>

void print_song( ) {
	char bottle[]       = "bottles";
	int  number_bottles = 99;
	for ( ; number_bottles; ) {
		printf( "%d %s of beer on the wall, %d %s of beer.\n", number_bottles, bottle,
		        number_bottles, bottle );
		printf( "Take on down and pass it around, " );
		if ( --number_bottles == 1 ) memcpy( &bottle, "bottle\0", 7 );
		if ( !number_bottles )
			puts( "no more bottles of beer on the wall.\n" );
		else
			printf( "%d %s of beer on the wall.\n\n", number_bottles, bottle );
	}
	memcpy( &bottle, "bottles", 7 );
	number_bottles = 99;

	printf( "No more %s of beer ont he wall, not more %s of beer\n"
	        "Go to the store and buy some more, %d %s of beer on the wall.\n\n",
	        bottle, bottle, number_bottles, bottle );
}

int main( ) { print_song( ); }
