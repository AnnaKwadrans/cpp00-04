/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:40:05 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 16:40:06 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
        std::cout << "Constructor called" << std::endl;
        return ;
}

Zombie::~Zombie(void)
{
        std::cout << "Destructor called" << std::endl;
        return ;
}

void    Zombie::set_name(std::string name)
{
        this->_name = name;
        return ;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
