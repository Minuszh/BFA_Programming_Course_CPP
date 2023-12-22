//
//  07_2.cpp
//  BFA_Programming_Course_CPP
//
//  编写一个程序，加载一张图像，执行以下操作：
//  （1）将图像转换为厌度图（cv:cvtColor）；
//  （2）将灰度图像二值化（cv:threshold）；
//  （3）将灰度图像进行高斯模糊处理 （cv:GaussianBlur）；
//  （4）显示原始图像和处理后的图像
//
//  Created by Minus on 2023/12/16.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    Mat img, i0;
    i0 = imread("/Users/minus/cpp/BFA_Programming_Course_CPP/BFA_Programming_Course_CPP/resource/TestPic.png");

    namedWindow("p", WINDOW_NORMAL);
    imshow("p", i0);

    cvtColor(i0, img, COLOR_BGR2GRAY);
    namedWindow("pic", WINDOW_NORMAL);
    imshow("pic", img);

    waitKey(0);

    threshold(img, img, 120, 255, cv::THRESH_OTSU);
    imshow("pic", img);

    waitKey(0);

    GaussianBlur(i0, img, Size(9, 9), 9, 9);
    imshow("pic", img);

    waitKey(0);

    destroyAllWindows();

    return 0;
}
