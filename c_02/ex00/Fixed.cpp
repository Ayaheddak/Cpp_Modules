/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:08:16 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/02 14:40:59 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = copy;
	// _fixedPoint = copy._fixedPoint;
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = obj.getRawBits();
	return (*this); 
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}