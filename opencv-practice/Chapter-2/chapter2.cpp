//
//  chapter2.cpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/10/22.
//

#include "chapter2.hpp"

#include <iostream>

using namespace std;


Chapter2::Chapter2() {
    cout << "Hello, Chapter2" << endl;
}

Mat Chapter2::convert_gray(Mat img) {
    Mat output;
    
    cvtColor(img, output, COLOR_BGR2GRAY);
    
    return output;
}
