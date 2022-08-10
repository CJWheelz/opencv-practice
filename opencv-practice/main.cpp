//
//  main.cpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/8/22.
//


//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
#include <iostream>

#include "Chapter-1/chapter1.hpp"
#include "Chapter-2/chapter2.hpp"

using namespace cv;
using namespace std;


int main() {
    
    Chapter2 chap2;
    
    Mat img = imread("headshot.JPG");
    
    Mat gray_image = chap2.convert_gray(img);
    
    imshow("Gray", gray_image);
    waitKey();
    
}
