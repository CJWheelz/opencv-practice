//
//  chapter1.hpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/10/22.
//

#ifndef chapter1_hpp
#define chapter1_hpp

#include <stdio.h>
#include <iostream>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

class Chapter1 {
public:
    void launch_video(string path);
    void launch_webcam();
    
private:
    void play_video(VideoCapture cap);
};


#endif /* chapter1_hpp */
