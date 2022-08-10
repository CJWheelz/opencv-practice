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

// Basic image editing functions
void Chapter2::edit_image(Mat img) {
    Mat output, img_blur, img_edges, img_dilate, img_erode;
    
    cvtColor(img, output, COLOR_BGR2GRAY);
    
    // Blur the image
    GaussianBlur(img, img_blur, Size(5, 5), 5, 5);
    
    // Find the edges with two arbitrary threshold values
    Canny(img, img_edges, 25, 300);
    
    // Changing the size changes how thick or thin the line is
    Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
    dilate(img_edges, img_dilate, kernel);
    
    // Make the edges less thick
    erode(img_dilate, img_erode, kernel);
    
//    imshow("Image", img);
//    imshow("Gray Image", output);
//    imshow("Blur Image", img_blur);
    imshow("Edges", img_edges);
    imshow("Dilated Edges", img_dilate);
    imshow("Eroded Edges", img_erode);
    
    waitKey();
}
