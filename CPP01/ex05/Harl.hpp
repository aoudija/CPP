#include <iostream>

class	Harl{
	void  debug(void), info(void), warning(void)
		, error(void);
	public:
		void		complain(std::string level);
};
