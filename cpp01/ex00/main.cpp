/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:39:10 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 16:39:13 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *heap_zombie = newZombie("Zbyszek");

    randomChump("Rysiek");

    heap_zombie->announce();
    delete heap_zombie;

    return (0);
}
