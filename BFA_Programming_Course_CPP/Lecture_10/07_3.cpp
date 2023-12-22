//
//  07_3.cpp
//  BFA_Programming_Course_CPP
//
//  编写一个程序，加载一张图像，执行以下操作：
//  （1）检测图像边缘（cv：：canny）
//  （2）进行膨胀（cv：：dilate） 操作
//  （3） 进行侵蚀（cv:erode）操作。
//  （4）改变图像大小，缩放为50%（cv:resize）；
//  （5）显示原始图像和处理后的图像。
//
//  Created by Minus on 2023/12/16.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    // 读取图像
    Mat img, i0;
    i0 = imread("/Users/minus/cpp/BFA_Programming_Course_CPP/BFA_Programming_Course_CPP/resource/TestPic.png");

    // 显示原始图像
    namedWindow("原始图像", WINDOW_NORMAL);
    imshow("原始图像", i0);

    // 将图像转换为灰度图
    cvtColor(i0, img, COLOR_BGR2GRAY);
    namedWindow("灰度图", WINDOW_NORMAL);
    imshow("灰度图", img);

    waitKey(0);

    // 对灰度图进行二值化
    threshold(img, img, 120, 255, cv::THRESH_OTSU);
    imshow("二值化图", img);

    waitKey(0);

    // 对原始图像进行高斯模糊
    GaussianBlur(i0, img, Size(9, 9), 9, 9);
    imshow("高斯模糊图", img);

    waitKey(0);

    // 关闭所有窗口
    destroyAllWindows();

    return 0;
}
