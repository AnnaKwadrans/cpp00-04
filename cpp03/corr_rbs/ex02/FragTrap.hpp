#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

        public:

                FragTrap();
                FragTrap(std::string name);
                FragTrap(FragTrap const & cpy);
                FragTrap&       operator=(FragTrap const & src);
                ~FragTrap();

                void            highFivesGuys(void);
};

#endif
