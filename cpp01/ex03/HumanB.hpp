/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:43:24 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 18:02:53 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
    private:
    
        std::string _name;
        Weapon*      _weapon;

    public:
    
        HumanB(std::string name);
        ~HumanB(); 

        void    attack() const;
        void    setWeapon(Weapon& weapon);

};


#endif
