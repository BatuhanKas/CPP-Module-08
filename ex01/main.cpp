/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:18 by bkas              #+#    #+#             */
/*   Updated: 2024/10/27 15:56:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Span.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

static vector<unsigned int> generateNumbers() {
    vector<unsigned int> vec;
    srand(getMs());

    unsigned int count = 10000;

    unsigned int i = 1;
    while (i <= count)
    {
        unsigned int number = rand();
        iter it = find(vec.begin(), vec.end(), number);

        if (it == vec.end()) {
            vec.push_back(number);
            i++;
        }
    }
    return vec;
}

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    Span *s1;
    try {
        unsigned int length = 10000;
        vector<unsigned int> vec = generateNumbers();
        
        s1 = new Span(length);
        s1->addNumbers(vec.begin(), vec.end());

        cout << "shortest span: " << s1->shortestSpan() << endl << endl;
        cout << "longest span: " << s1->longestSpan() << endl;
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
    delete s1;
}

/* ****************************** [^] MAIN [^] ****************************** */
