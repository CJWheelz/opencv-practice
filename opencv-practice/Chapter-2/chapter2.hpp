//
//  chapter2.hpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/10/22.
//

#ifndef chapter2_hpp
#define chapter2_hpp

#include <stdio.h>
#include <opencv2/imgproc.hpp>

using namespace cv;

class Chapter2 {
public:
    Chapter2();
    
    Mat convert_gray(Mat img);
    
};

#endif /* chapter2_hpp */
