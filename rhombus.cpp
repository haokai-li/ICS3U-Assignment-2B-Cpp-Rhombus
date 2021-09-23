// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate the area and perimeter of the rhombus

#include <iostream>
#include <iomanip>

int main() {
    // This Program calculate the area and perimeter of the rhombus

    float sides;
    float diagonal;
    float otherDiagonal;
    float area;
    float perimeter;

    // input
    std::cout << "Enter the sides of the rhombus(cm): ";
    std::cin >> sides;
    std::cout << "Enter the diagonal of the rhombus(cm): ";
    std::cin >> diagonal;
    std::cout << "Enter the other diagonal of the rhombus(cm): ";
    std::cin >> otherDiagonal;
    std::cout << "" << std::endl;

    // process
    area = (diagonal * otherDiagonal) / 2;
    perimeter = 4 * sides;

    // output
    std::cout << "a = (diagonal x other diagonal) / 2 = "
    << area << " cm²" << std::endl;
    std::cout << "p = 4 x sides = " << perimeter << " cm" << std::endl;
    std::cout << "\nDone" << std::endl;
}
