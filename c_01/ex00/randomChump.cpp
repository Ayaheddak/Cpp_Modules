/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:23:21 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 00:45:55 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void	randomChump(std::string name)
{
	Zombie z(name);
	z.announce();
}