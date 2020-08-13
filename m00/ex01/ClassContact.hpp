/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 22:41:17 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/13 14:42:10 by rde-vrie      ########   odam.nl         */
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
		void			addData(int i);
		void			searchTable(void);
		void			printData(void);
		std::string		printLine(std::string line);	
	private:
		int				index;
		std::string		firstname;
		std::string		lastname;
		std::string 	nickname;
		std::string 	login;
		std::string 	address;
		std::string 	email;
		std::string		phonenumber;
		std::string 	birthday;
		std::string 	meal;
		std::string 	underwear;
		std::string 	secret;
};

#endif
