//
//  chapter1.cpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/10/22.
//

#include "chapter1.hpp"

#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// PUBLIC
void Chapter1::launch_video(string path) {
    
    VideoCapture cap(path);
    
    play_video(cap);
}


void Chapter1::launch_webcam() {
    VideoCapture cap(0);
    
    play_video(cap);
}


void Chapter1::play_video(VideoCapture cap) {
    Mat img;
    
    while (true) {
        cap.read(img);
        
        imshow("Video", img);
        
        waitKey(30);
    }
}
