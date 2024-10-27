/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:36:33 by bkas              #+#    #+#             */
/*   Updated: 2024/10/27 15:57:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Span.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] PRINT NUMBERS [v] ************************* */

void Span::printNumbers() {
    cout << YELLOW << "Vector Container" << RESET << endl;
    cout << "Numbers;" << endl;

    vector<unsigned int>::iterator end = _numbers.end();
    
    for (vector<unsigned int>::iterator it = _numbers.begin(); it != end ; it++)
    {
        if (it + 1 != end)
            cout << "[" << *it << "], ";
        else
            cout << "[" << *it << "]";
    }
    cout << endl << endl;
}

/* ************************* [^] PRINT NUMBERS [^] ************************* */

/* ************************** [v] ADD NUMBER [v] ************************** */

void Span::addNumber(const unsigned int number) {
    if (getSize() < getN())
    {
        vector<unsigned int>::iterator it = find(_numbers.begin(), _numbers.end(), number);
        if (it == _numbers.end()) {
            _numbers.push_back(number);
            _nsize++;
            return;
        } else
            throw invalid_argument("Same number found!");
    }
    throw out_of_range("You added too much values!");
}

/* ************************** [^] ADD NUMBER [^] ************************** */

/* ************************** [v] ADD NUMBERS [v] ************************** */

void Span::addNumbers(iter begin, iter end) {
    iter it = begin;
    for (; it != end; it++)
        addNumber(*it);
}

/* ************************** [^] ADD NUMBERS [^] ************************** */

/* ***************************** [v] GETTERS [v] ***************************** */

unsigned int Span::getSize() const {
    return _nsize;
}

unsigned int Span::getN() const { 
    return _N;
}

vector<unsigned int> Span::getArray() const {
    return _numbers;
}

/* ***************************** [^] GETTERS [^] ***************************** */

/* ************************** [v] ORTHODOX FORM [v] ************************** */

Span::Span() {}

Span::Span(unsigned int N) : _nsize(0), _N(N) {}

Span::Span(const Span& oth) {
    *this = oth;
}

Span &Span::operator=(const Span& oth) {
    if (this == &oth) return *this;
    this->_nsize = oth.getSize();
    this->_N = oth.getN();
    this->_numbers = oth.getArray();
    return *this;
}

Span::~Span() {
    getArray().clear();
}

/* ************************** [^] ORTHODOX FORM [^] ************************** */

/* *************************** [v] BUBBLESORT [v] *************************** */

void Span::bubblesort() {
    for (size_t i = 0; i < getSize(); i++)
    {
        for (size_t j = i + 1; j < getSize(); j++)
        {
            if (_numbers[i] > _numbers[j]) {
                std::swap(_numbers[i], _numbers[j]);
            } 
        }
    }
}

/* *************************** [^] BUBBLESORT [^] *************************** */

/* ************************* [v] SHORTEST SPAN [v] ************************* */

unsigned int Span::shortestSpan() {
    if (getSize() > 1) {
        bubblesort();

        unsigned int minSpan = INT_MAX;
        for (size_t i = 1; i < getSize() ; i++)
        {
            unsigned int span = _numbers[i] - _numbers[i - 1];
            if (span < minSpan)
                minSpan = span;
        }
        return minSpan;
    } else
        throw std::length_error("Less Elements!");
}

/* ************************* [^] SHORTEST SPAN [^] ************************* */

/* ************************* [v] LONGEST SPAN [v] ************************* */

unsigned int Span::longestSpan() {
    if (getSize() > 1)
    {
        bubblesort();
        return (_numbers[_numbers.size() - 1]) - _numbers[0];
    } 
    else
        throw std::length_error("Less Elements!");
}

/* ************************* [^] LONGEST SPAN [^] ************************* */

/* *********************** [v] GET TIME OF DAY [v] *********************** */

unsigned long getMs() { /*
    1 second = 1000 milisecond.
    1 microsecond = 0.001 milisecond.

    changing both of them miliseconds. */
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

/* *********************** [^] GET TIME OF DAY [^] *********************** */
