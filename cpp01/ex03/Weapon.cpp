/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:45:06 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 20:31:37 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
/*
Weapon::Weapon(void)
{
    std::cout << "Weapon: default constructor called" << std::endl;
    
}
*/
Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon: constructor called" << std::endl;
    
}

Weapon::~Weapon()
{
    std::cout << "Weapon: destructor called" << std::endl;
}

std::string const &    Weapon::getType() const
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
    return ;
}
