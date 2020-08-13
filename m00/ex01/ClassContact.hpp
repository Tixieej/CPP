/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 22:41:17 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/11 23:01:09 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_H
# define CLASSCONTACT_H
# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void		printData(void);

	private:
		int			index;
		std::string	firstname;
		std::string	lastname;
		std::string nickname;
		std::string login;
		std::string address;
		std::string email;
		std::string	phonenumber;
		std::string birthday;
		std::string meal;
		std::string underwear;
		std::string secret;
};

#endif
