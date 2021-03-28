#ifndef NOTPEON_HPP
# define NOTPEON_HPP

#include "Victim.hpp"

class NotPeon : public Victim
{
	private:
		/* data */
	public:
		NotPeon(/* args */);
		NotPeon(std::string name);
		NotPeon(NotPeon const &copy);
		virtual ~NotPeon();

		NotPeon		&operator=(NotPeon const &no);

		void		getPolymorphed() const;
};

std::ostream		&operator<<(std::ostream &output, NotPeon const &no);

#endif
