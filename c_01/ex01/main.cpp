/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:48:41 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 12:27:31 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	int i;
	
	i = 0;
	z = zombieHorde(9, "aya");
	while (i < 9)
	{
		z[i].announce();	
		i++;
	}
	delete[] z; 
	// system("leaks brainz");
}