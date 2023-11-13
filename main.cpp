// Créé le 11/08/2023 par Alex LAMIZANA
// Updated le 11/08/2023 par Alex LAMIZANA
#include "man.hpp"
#include<iostream>
# include <fstream>
int main( int argc , char **argv )
{
	(void)argc;
	std::string	level[2] = {"man", "ls"};
	int	i = 0;

	while (i < 2)
	{
		if (level[i] == argv[1])
			break;
		i++;
	}
	switch( i )
	{
		case 0:
			break;
		case 1:
			ft_ls( argv[1] );
			break;
		default:
			return( 0 );
	}
	return( 0 );
}
