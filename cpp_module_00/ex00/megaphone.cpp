#include <iostream>


int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		j = -1;
		while (argv[i][++j])
			std::cout<<(char)toupper(argv[i][j]);
		i++;
	}
	std::cout<<std::endl;
}