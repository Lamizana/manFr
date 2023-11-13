/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   man.hpp                                            :+:      :+:    :+:   */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:02:08 by LAMIZANA          #+#    #+#             */
/*   Updated: 2023/11/13 16:02:08 by LAMIZANA         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef _MAN_H_
# define _MAN_H_

# include<iostream>
# include <fstream>

# define NC         "\001\e[0m\002"
# define BIRED		"\033[1;91m"

void	ft_ls( std::string const filename );
#endif
