//
//  webcam.cpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/8/22.
//

#include "webcam.hpp"

#include <iostream>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

using namespace std;
using namespace cv;

int launch_webcam() {
    std::cout << "Main Started!\n";

    VideoCapture cap(0); // open the default camera
    
    if(!cap.isOpened()) { // check if we succeeded
        return -1;
    }
    
    for(;;) {
        Mat frame;
        cap >> frame; // get a new frame from camera
        imshow("Webcam Video", frame);
        
        if (waitKey(30) >= 0) {
            break;
        }
    }
    
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
