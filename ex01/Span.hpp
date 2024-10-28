/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:17 by bkas              #+#    #+#             */
/*   Updated: 2024/10/28 11:17:32 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

/* **************************** [v] INCLUDES [v] **************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <sys/time.h>

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define clearScreen() cout << "\033c" << endl;

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::cin;
using std::find;
using std::out_of_range;
using std::invalid_argument;
using std::exception;
using std::find;
using std::max_element;

typedef vector<unsigned int>::iterator iter;

/* **************************** [^] DEFINES [^] **************************** */

/* ************************* [v] SPAN CLASS [v] ************************* */

class Span {
    private:
        // Variables
        unsigned int _nsize;
        unsigned int _N;

        // Vector
        vector<unsigned int> _numbers;

        // Default Constructor
        Span();

    public:
        // Orthodox Form
        Span(unsigned int N);
        Span(const Span& oth);
        Span &operator=(const Span& oth);
        ~Span();
        
        // Methods
        void bubblesort();
        void addNumber(const unsigned int number);
        void addNumbers(iter begin, iter end);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        // Getters
        unsigned int getSize() const;
        unsigned int getN() const;
        vector<unsigned int> getArray() const;

        // Print Function
        void printNumbers();
};

unsigned long getMs();

/* ************************* [^] PRINT NUMBERS [^] ************************* */

#endif
