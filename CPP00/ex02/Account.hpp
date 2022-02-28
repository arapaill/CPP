/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:43:50 by arapaill          #+#    #+#             */
/*   Updated: 2022/02/28 09:35:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account {
    public:
        typedef Account t;
        static int		getNbAccounts( void );
        static int		getTotalAmount( void );
        static int		getNbDeposits( void );
        static int		getNbWithdrawals( void );
        static void		displayAccountsInfos( void );

        Account(int initial_deposit );
        ~Account( void );

        void			makeDeposit( int deposit );
        bool			makeWithdrawal( int withdrawal );
        int				checkAmount( void ) const;
        void			displayStatus( void ) const;
    private:
        static int		_nbAccounts;
        static int		_totalAmount;
        static int		_totalNbDeposits;
        static int		_totalNbWithdrawals;

        static void		_displayTimestamp( void );

        int				_accountIndex;
        int				_amount;
        int				_nbDeposits;
        int				_nbWithdrawals;
	    Account( void );
};

#endif