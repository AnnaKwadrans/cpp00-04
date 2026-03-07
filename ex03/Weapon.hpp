/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:45:12 by akwadran          #+#    #+#             */
/*   Updated: 2026/03/07 20:31:26 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
private:
    
    std::string _type;

public:

    //Weapon(void);  // es necesario?
    Weapon(std::string type);
    ~Weapon();

    std::string const & getType() const;
    void                setType(std::string type);

};

#endif
