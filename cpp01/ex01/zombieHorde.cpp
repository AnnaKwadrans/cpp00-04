/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:40:13 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 16:40:14 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
        Zombie* zombies = new Zombie[N];
        for (int i = 0; i < N; i++)
                zombies[i].set_name(name);
        return (zombies);
}
