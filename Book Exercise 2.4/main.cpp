//
//  main.cpp
//  Book Exercise 2.4
//
//  Created by ax on 8/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Convert pounds into kilograms
//

#include <iostream>
using namespace std;

int main() {
    
    // Program Title
    cout << "Pound to Kilograms Conversion\n";
    
    // data storage
    double input_pound = 0.0;
    double calc_kilo = 0.0;
    
    // I
    // read input numbers as pounds
    cout << "Enter a value in pounds: ";
    cin >> input_pound;
    
    // P
    // convert input to kilos
    // 1 pound = 0.454 kilograms
    calc_kilo = input_pound * 0.454;
    
    // O
    // output result in kilograms
    cout << input_pound << " pounds is " << calc_kilo << " kilograms" << endl;
    
    return 0;
}
