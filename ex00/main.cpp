/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:18 by bkas              #+#    #+#             */
/*   Updated: 2024/10/26 12:07:28 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "easyfind.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    // Vector
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    
    printNumbers(numbers, "Vector");
    easyfind(numbers, 30);
    easyfind(numbers, 60);

    cin.ignore();

    // Deque
    deque<int> deque;

    deque.push_back(2);
    deque.push_back(3);
    deque.push_back(4);
    deque.push_back(5);
    deque.push_front(1);

    printNumbers(deque, "Deque");
    easyfind(deque, 4);
    easyfind(deque, 80);
}

/* ****************************** [^] MAIN [^] ****************************** */
