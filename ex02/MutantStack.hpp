/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:17 by bkas              #+#    #+#             */
/*   Updated: 2024/10/28 15:38:14 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

/* **************************** [v] INCLUDES [v] **************************** */

#include <iostream>
#include <stack>
#include <deque>

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

using std::cout;
using std::endl;
using std::string;
using std::deque;
using std::stack;

/* **************************** [^] DEFINES [^] **************************** */

/* *********************** [v] MUTANT STACK CLASS [v] *********************** */

template <typename T>
class MutantStack : public stack<T>  {
    public:
        // Orthodox Form
        MutantStack() : stack<T>() {}
        MutantStack(const MutantStack& oth) : stack<T>(oth) {}
        MutantStack& operator=(const MutantStack& oth) {
            if (this != oth)
                this->c = oth.c;
            return *this;
        }
        ~MutantStack() {
            this->c.clear();
        }
        
        // Normal Iterator
        typedef typename stack<T>::container_type::iterator iterator;
        iterator begin() {
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }

        // Const Iterator
        typedef typename stack<T>::container_type::const_iterator c_iterator;
        c_iterator cbegin() {
            return this->c.cbegin();
        }
        c_iterator cend() {
            return this->c.cend();
        }

        // Reverse Iterator
        typedef typename stack<T>::container_type::reverse_iterator r_iterator;
        r_iterator rbegin() {
            return this->c.rbegin();
        }
        r_iterator rend() {
            return this->c.rend(); 
        }

        // Const Reverse Iterator
        typedef typename stack<T>::container_type::const_reverse_iterator cr_iterator;
        cr_iterator crbegin() {
            return this->c.crbegin();
        }
        cr_iterator crend() {
            return this->c.crend(); 
        }
        
};

/* *********************** [^] MUTANT STACK CLASS [^] *********************** */

#endif
