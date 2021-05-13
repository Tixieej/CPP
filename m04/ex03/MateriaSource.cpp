/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:23:12 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/13 10:54:33 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include <string>

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	std::cout << "materiasource inst" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	(void)(rhs);
	//this-> = rhs. .getType();//huh
	return(*this);
}

AMateria	*MateriaSource::createMateria(std::string const & type)//k heb gelooped over alle Materia die ik op dat moment in mn source heb
//en als de getType() daarvan overeenkomt met de type parameter
//dan return ik een clone daarvan
//ja in je MateriaSource stop je shit, waarna je ze kunt kopieren dmv createMateria
{
	AMateria *flup;
	if (type == "cure")
	{
		flup = new Cure();
	}
	else //(type == "ice")
	{
		flup = new Ice();
	}
	//AMateria copy(type);
	std::cout << "create " << type << std::endl;
	return (flup);
}
