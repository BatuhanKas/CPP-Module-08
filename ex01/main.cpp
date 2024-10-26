/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:18 by bkas              #+#    #+#             */
/*   Updated: 2024/10/26 17:35:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Span.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    Span *s1;
    try {
        vector<unsigned int> vec;
        unsigned int length = 10000;
        srand(time(0));
        for (size_t i = 0; i < length; i++)
            vec.push_back(rand());
        
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
