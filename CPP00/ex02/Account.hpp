/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arapaill <arapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:43:50 by arapaill          #+#    #+#             */
/*   Updated: 2022/01/28 10:56:22 by arapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

#include <string>

class Account
{
private:
	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;
    int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;
    static void	_displayTimestamp( void );
	Account( void );
    
public:
    static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );
    Account(int initial_deposit);
    ~Account();
    void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;
};

# endif