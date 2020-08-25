/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/13 17:43:22 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/25 14:50:28 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <string>
#include <iostream>

Account::Account(int initial_deposit)
{
	std::cout << "index:0" << ";amount:" << initial_deposit << ";created" << std::endl;
	// make deposit functie aanroepen?
	return;
}

Account::~Account(void)
{
	return;
}

int	Account::getNbAccounts(void)
{
	std::cout << "getNbAccounts" << std::endl;
	return (5);
}

int	Account::getTotalAmount(void)
{
	std::cout << "getTotalAmount" << std::endl;
	return (6);
}

int	Account::getNbDeposits(void)
{
	std::cout << "getNbDeposits" << std::endl;
	return (7);
}

int	Account::getNbWithdrawals(void)
{
	std::cout << "getNbWithdrawals" << std::endl;
	return (8);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << getNbAccounts(void);
	std::cout << ";total:" << getTotalAmount(void);
	std::cout << ";deposits:" << getNbDeposits(void);
	std::cout << ";withdrawals:" << getNbWithdrawals(void) << std::endl;
		//accounts:8;total:20049;deposits:0;withdrawals:0
}



void		Account::makeDeposit(int	deposit)
{
	std::cout << "makeDeposit" << std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	std::cout << "makeWithdrawal" << std::endl;
	return (true);
}

int			Account::checkAmount(void) const
{
	std::cout << "checkAmount" << std::endl;
	return (2);
}

void		Account::displayStatus(void) const
{
	std::cout << "displayStatus" << std::endl;	
}//created is status?

void	Account::_displayTimestamp(void)
{
	std::cout << "[ timestamp ] ";
}
