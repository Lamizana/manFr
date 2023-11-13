/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ls.cpp                                             :+:      :+:    :+:   */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:02:08 by LAMIZANA          #+#    #+#             */
/*   Updated: 2023/11/13 16:02:08 by LAMIZANA         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "man.hpp"

void	ft_ls( std::string const filename )
{
	std::ofstream writeFlux(filename.c_str());
	if (!writeFlux)
	{
		std::cerr << "Error: file cannot be opened in write mode" << std::endl;
		return;
	}
	else
	{
		writeFlux <<"LS(1)" << std::endl << std::endl;
		writeFlux<< BIRED <<"NOM" << NC << std::endl;
		writeFlux << "\tls - Afficher le contenu de répertoires" << std::endl<< std::endl;;
		writeFlux <<BIRED << "SYNOPSIS" << NC << std::endl;
		writeFlux << "\tls [OPTION]... [FICHIER]..." << std::endl << std::endl;
		writeFlux <<BIRED << "DESCRIPTION" << NC << std::endl;
		writeFlux << "Afficher  les  informations  des  FICHIERS";
		writeFlux << " (du  répertoire courant par défaut. Les entrées sont triées ";
		writeFlux << "alphabétiquement si aucune des options -cftuvSUX ou --sort n’est utilisée." << std::endl;
	}

	std::string line;
	std::ifstream readFlux(filename.c_str());
	while(getline(readFlux, line))
	{
		std::cout << line << std::endl;
	}
	return;
}


