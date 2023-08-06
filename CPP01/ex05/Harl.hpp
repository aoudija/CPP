#include <iostream>
#include <string>
class	Harl{
	void  debug(void), info(void), warning(void)
		, error(void), bigerror(void);
	public:
		void		complain(std::string level);
};
