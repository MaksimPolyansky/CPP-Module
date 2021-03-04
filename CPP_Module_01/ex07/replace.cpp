#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "\x1b[31;1mBad arguments!\x1b[0m" << std::endl;
		std::cout << "\x1b[32;1mRemove some arguments!\x1b[0m" << std::endl;
		std::cout << "\x1b[33;1mOr add some arguments!\x1b[0m" << std::endl;
		return 1;
	}
	else
	{
		std::string		fname = av[1];
		if (fname.empty())
		{
			std::cout << "\x1b[31;1mBad YOUR file!\x1b[0m" << std::endl;
			return 1;
		}
		std::ifstream	name;
		name.open(fname);
		if (!name.is_open())
		{
			std::cout << "\x1b[31;1mBad YOUR file!\x1b[0m" << std::endl;
			return 1;
		}
		std::string		str1 = av[2];
		if (str1.empty())
		{
			std::cout << "\x1b[32;1mBad first string!\x1b[0m" << std::endl;
			return 1;
		}
		std::string		str2 = av[3];
		if (str2.empty())
		{
			std::cout << "\x1b[33;1mBad second string!\x1b[0m" << std::endl;
			return 1;
		}
		fname += ".replace";
		std::ofstream	filename;
		filename.open(fname);
		if (!filename.is_open())
		{
			std::cout << "\x1b[31;1mI can't open *.REPLACE!\x1b[0m" << std::endl;
			return 1;
		}
		filename.clear();
		std::string		str;
/*		while (!name.eof())
		{
			std::getline(name, str);
			if (str.find(str1) < str.size())
			{
				size_t	num = 0;
				while (str.find(str1, num) < str.size())
				{
					if (num != str.find(str1, num))
						filename << str.substr(num, str.find(str1, num));
					filename << str2;
					num = str.find(str1, num) + str1.size();
				}
				filename << str.substr(num);
				filename << std::endl;
			}
			else
				filename << str << std::endl;
		}
*/		while (std::getline(name, str))
		{
			if (str.find(str1) < str.size())
			{
				std::stringstream	line;
				for (size_t i = 0; i < str.size(); i++)
				{
					if (i == str.find(str, i))
					{
						line << str2;
						i += str1.size();
					}
					else
						line << str[i];
				}
				filename << line.str();
				line.str("");
				line.clear();
			}
			else
				filename << str;
			if (!name.eof())
				filename << std::endl;
		}
		name.close();
		filename.close();
	}
	return 0;
}
