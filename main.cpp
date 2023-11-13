// ---------------------------------------------------------------- //
//
//		main.cpp
//
// 	- Created: 11/08/2023 par Alex LAMIZANA
//	- Updated: 11/08/2023 par Alex LAMIZANA
//
// ---------------------------------------------------------------- //
#include "man.hpp"
#include <iostream>
#include <fstream>

int main( int argc , char **argv )
{
	(void)argc;

	// Stocke les differents lexiques du man:
	std::string	level[2] = {"man", "ls"};

	int	i = 0;

	// Recupere la commande demande:
	while (i < 2)
	{
		if (level[i] == argv[1])
			break;
		i++;
	}

	// Execute la commande recquise:
	switch( i )
	{
		case 0:
			break;
		case 1:
			lsFr( argv[1] );
			break;
		default:
			return( 0 );
	}
	return( 0 );
}
