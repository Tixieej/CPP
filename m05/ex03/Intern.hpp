#ifndef INTERN_H
# define INTERN_H
# include <string>
# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &);
		virtual ~Intern(void);
		Intern		&operator=(Intern const &);
		Form		*getName(std::string name, std::string target) const;
};
	std::ostream		&operator<<(std::ostream &o, Intern const &bC);

#endif
