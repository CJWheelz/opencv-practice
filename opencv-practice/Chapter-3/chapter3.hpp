//
//  chapter3.hpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/10/22.
//

#ifndef chapter3_hpp
#define chapter3_hpp

#include <stdio.h>
#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

class Chapter3 {
public:
    void resize_crop_practice(Mat img);
    
    Mat blur_gray_crop_shrink(Mat img, int x = 200, int y = 200, int width = 300, int height = 300, double factor = 0.75);
};

#endif /* chapter3_hpp */
