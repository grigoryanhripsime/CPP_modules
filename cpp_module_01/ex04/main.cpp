#include <iostream>
#include <fstream>
#include <string>

std::string replace_str(std::string line, std::string old_str, std::string new_str)
{
	if (old_str.size() == 0)
		return line;
	while (1)
	{
		int index = line.find(old_str);
		if (index == -1)
			break ;
		line.erase(index, old_str.size());
		line.insert(index, new_str);
	}
	return line;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout<<"Invalid number of argumnets"<<std::endl;
		return 1;
	}
	std::ifstream file;
	file.open(argv[1]);
	if (!file)
	{
        std::cerr << "File could not be opened!" << std::endl;
        return 1;
    }
	std::string line;
	std::ofstream out_file(argv[1] + (std::string)".replace");
	if (!out_file)
	{
        std::cerr << "File could not be opened or created!" << std::endl;
        return 1;
    }
	while (std::getline(file, line))
	{
		line = replace_str(line, argv[2], argv[3]);
		out_file<<line<<std::endl;
	}
	file.close();
	out_file.close();
	return 0;
}