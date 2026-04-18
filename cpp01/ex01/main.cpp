/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:39:59 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 16:40:00 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
        Zombie* horde = zombieHorde(15, "Rysiek");
        
        for (int i = 0; i < 15; i++)
                horde[i].announce();
        
        delete [] horde;

        return (0);
}