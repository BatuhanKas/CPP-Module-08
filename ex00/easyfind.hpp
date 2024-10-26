/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:17 by bkas              #+#    #+#             */
/*   Updated: 2024/10/26 12:07:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

/* **************************** [v] INCLUDES [v] **************************** */

#include <iostream>
#include <vector>
#include <deque>

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

#define YELLOW "\033[33m"
#define RESET "\033[0m"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::cin;
using std::find;
using std::out_of_range;
using std::exception;
using std::deque;

/* **************************** [^] DEFINES [^] **************************** */

/* ************************* [v] PRINT NUMBERS [v] ************************* */

template <typename T>
void printNumbers(T& container, string containerName) {
    cout << "\033c" << endl;
    cout << YELLOW << containerName << " Container" << RESET << endl;
    cout << "Numbers;" << endl;
    
    typename T::iterator end = container.end();
    
    for (typename T::iterator it = container.begin(); it != end ; it++)
    {
        if (it + 1 != end)
            cout << "[" << *it << "], ";
        else
            cout << "[" << *it << "]";
    }
    cout << endl << endl;
}

/* ************************* [^] PRINT NUMBERS [^] ************************* */

/* *************************** [v] EASYFIND [v] *************************** */

template <typename T>
void easyfind(T& container, int num) {
    typename T::iterator begin = container.begin();
    typename T::iterator end = container.end();

    try {
        for (; begin != end; begin++)
        {
            if (*begin == num) {
                cout << "Number Found: " << *begin << endl;
                return ;
            }
        }
        throw out_of_range("Number not Found!");
    } catch (exception &e) {
        cout << e.what() << endl;
    }
}

/* *************************** [^] EASYFIND [^] *************************** */

#endif
