/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:23:12 by rixt          #+#    #+#                 */
/*   Updated: 2021/06/05 15:12:00 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include <string>

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_learnedMateria[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
}

/*
 * Delete learned materias
 * Copy learned materias of rhs
 */
MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMateria[i])
			delete this->_learnedMateria[i];
		this->_learnedMateria[i] = rhs._learnedMateria[i]->clone();
	}
	return (*this);
}

/*
 * learnMateria must copy the Materia passed as parameter, and store it in
 * memory to be cloned later. Much in the same way as for Character, the 
 * Source can know at most 4 Materia, which are not necessarily unique.
 */
void	MateriaSource::learnMateria(AMateria* mat)
{
	if (mat == 0)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_learnedMateria[i])
		{
			this->_learnedMateria[i] = mat;
			std::cout << "Learned to make " << mat->getType() << "." << std::endl;
			return ;
		}
	}
	std::cout << "Cannot learn more." << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	AMateria *created = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMateria[i])
		{
			if (this->_learnedMateria[i]->getType() == type)
			{
				created = this->_learnedMateria[i]->clone();
				std::cout << "You created " << type << "." << std::endl;
				break ;
			}
		}
	}
	if (created == NULL)
	{
		std::cout << "Could not create " << type << ", type not known." << std::endl;
		return (0);
	}
	return (created);

}
