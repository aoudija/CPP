#include <iostream>

int main(int ac, char **av)
{
	int	i, j;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
			{
				if (isalpha(av[i][j]))
					std::cout << char(toupper(av[i][j]));
				else
					std::cout << av[i][j];
			}
		}
		std::cout << '\n';
	}
	else if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
