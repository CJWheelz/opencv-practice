//
//  chapter3.cpp
//  opencv-practice
//
//  Created by CJ Wheelan on 8/10/22.
//

#include "chapter3.hpp"

void Chapter3::resize_crop_practice(Mat img) {
    Mat resizedImage, croppedImage;
    
    cout << img.size << endl;
    
    // Maintains aspect ratio, shrinks/expands
    resize(img, resizedImage, Size(), 0.25, 0.25);
    
    // Forces image width and height, loses ratio but not content
//    resize(img, resizedImage, Size(400, 400));
    
    // Crop image at x 300 and y 200 coordinates with 300 width and height
    // Counts x left to right, y top to bottom
    // Starts at (300, 200), goes 300 to the right and 400 down
    Rect roi(300, 200, 300, 400);
    croppedImage = img(roi);
    
    imshow("Original", img);
    imshow("Resized", resizedImage);
    imshow("Cropped", croppedImage);
    
    waitKey();
    
}

// Take an image and: blur, convert to gray, crop at (x, y) with width and height, shrink by a factor of factor
Mat Chapter3::blur_gray_crop_shrink(Mat img, int x, int y, int width, int height, double factor) {
    
    Mat outputImage;
    
    // Blur, bigger Size values means more blur
    GaussianBlur(img, outputImage, Size(5, 5), 5, 0);
    
    // Convert to gray
    cvtColor(outputImage, outputImage, COLOR_BGR2GRAY);
    
    // Create rectangle to crop image
    Rect roi(x, y, width, height);
    // Crop image
    outputImage = outputImage(roi);
    
    // Resize with factor (maintain aspect ratio)
    resize(outputImage, outputImage, Size(), factor, factor);
    
    return outputImage;
}
