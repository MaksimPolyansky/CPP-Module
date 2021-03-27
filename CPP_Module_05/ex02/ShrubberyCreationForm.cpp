#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &sh)
{
	if (this != &sh)
		Form::operator=(sh);
	return *this;
}

void		ShrubberyCreationForm::executed() const
{
	std::ofstream	file;

	file.open(this->getName() + "_shrubbery");
	if (file.is_open())
	{
		file.clear();
		file << "\e[0;92m___________¶¶¶¶¶¶_¶¶¶¶¶¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__________¶_____¶¶________¶\e[0m" << std::endl;
		file << "\e[0;92m________¶¶¶_______________ ¶¶¶¶¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m________¶_______________________¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m_______ ¶¶____¶__________________ ¶\e[0m" << std::endl;
		file << "\e[0;92m______¶¶¶____¶¶¶¶¶¶¶¶¶____________¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m______¶¶______¶¶¶¶¶_______ ¶¶_______¶¶_¶¶\e[0m" << std::endl;
		file << "\e[0;92m_____¶¶¶¶¶¶_______________¶¶__¶_¶¶___¶¶¶¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶¶¶__¶¶¶¶__¶¶¶_________¶¶¶¶¶¶¶____¶¶___¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶______¶¶¶_¶_¶__¶__¶_¶¶¶________________¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶________¶_¶_¶¶¶¶¶¶¶¶¶¶_¶¶________________¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶¶____¶¶¶¶_¶_¶¶¶_¶¶¶¶_¶_¶¶¶¶¶¶¶¶¶¶________¶¶\e[0m" << std::endl;
		file << "\e[0;92m__¶¶¶¶___¶¶¶¶¶¶¶¶___¶¶¶_¶__¶¶¶____¶¶¶¶______¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m_¶¶¶_¶¶¶¶¶_¶¶¶¶¶¶_¶¶_¶¶¶____¶¶¶¶¶¶¶¶________¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m¶¶_____¶¶¶__¶¶_¶¶¶¶¶__¶¶___¶¶¶¶¶¶_¶_____¶¶¶___¶¶\e[0m" << std::endl;
		file << "\e[0;92m¶_____¶¶¶___¶_¶_¶¶¶___¶¶_¶¶__¶__¶¶¶¶¶__¶¶¶_____¶¶\e[0m" << std::endl;
		file << "\e[0;92m¶¶___¶¶¶¶¶¶_¶¶¶___¶____¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶\e[0m" << std::endl;
		file << "\e[0;92m_¶¶__¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶__¶¶__¶¶¶¶¶¶¶__¶¶¶¶__¶____¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶¶¶¶_____¶_¶¶¶______¶¶___¶¶_____¶¶¶_________¶\e[0m" << std::endl;
		file << "\e[0;92m____________¶¶¶__¶¶_____¶___¶¶¶_¶¶¶¶¶¶¶¶¶¶¶___¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶_¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶_____¶¶¶¶¶___¶¶¶_¶¶__¶¶¶¶___¶¶¶________¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶¶____¶¶_______¶¶_¶¶___¶¶¶¶_¶¶¶¶¶_____¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶_____¶___¶_¶¶¶_¶_¶¶___¶¶_¶¶¶__¶¶¶____¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶¶_______¶¶¶¶__¶¶______ ¶________¶¶¶¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶__¶¶¶¶¶¶¶_____¶___¶¶¶__¶__________¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶¶¶¶¶¶¶¶¶_____¶¶__¶¶¶¶¶_¶¶\e[0m" << std::endl;
		file << "\e[0;92m________________¶¶___¶¶¶¶___¶¶\e[0m" << std::endl;
		file << "\e[0;92m_______________¶¶____¶¶¶¶___¶¶\e[0m" << std::endl;
		file << "\e[0;92m____________¶¶¶¶_____¶¶_____¶¶\e[0m" << std::endl;
		file << "\e[0;92m___________ ¶¶_______¶¶_____¶¶\e[0m" << std::endl;
		file << "\e[0;92m__________¶¶¶___¶¶___¶¶_____¶¶\e[0m" << std::endl;
		file << "\e[0;92m________¶¶¶¶____¶¶___¶______¶¶\e[0m" << std::endl;
		file << "\e[0;92m______ ¶¶¶¶¶____¶______¶¶____¶¶\e[0m" << std::endl;
		file << "\e[0;92m___¶¶¶¶¶¶¶¶¶¶¶K¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\e[0m" << std::endl;
		file << "\e[0;92m__ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶____¶¶¶¶¶_¶¶¶\e[0m" << std::endl;
		file.close();
	}
	else
		throw std::string("\e[0;92mI can't open " + this->getName() + "_shrubbery!\e[0m");
}
