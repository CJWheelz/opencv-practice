//
//  main.cpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/8/22.
//


//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include "Chapter-1/chapter1.hpp"
#include "Chapter-2/chapter2.hpp"
#include "Chapter-3/chapter3.hpp"

using namespace cv;
using namespace std;


int main() {
    
    Mat img = imread("headshot.JPG");
    
    Chapter3 chap3;
    
    Mat result = chap3.blur_gray_crop_shrink(img, 300, 200);
    
    imshow("New Image", result);
    waitKey();
}
