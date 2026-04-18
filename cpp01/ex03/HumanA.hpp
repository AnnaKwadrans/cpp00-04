/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:41:00 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 17:55:55 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    private:
    
        std::string _name;
        Weapon&      _weapon;

    public:
    
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(); 

        void    attack() const;


};


#endif
