/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:39:53 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 16:39:56 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

    std::string     _name;

    public:

    Zombie(std::string name);
    ~Zombie(void);

    void        announce(void) const;
};

Zombie*     newZombie(std::string name);
void        randomChump(std::string name);

#endif
