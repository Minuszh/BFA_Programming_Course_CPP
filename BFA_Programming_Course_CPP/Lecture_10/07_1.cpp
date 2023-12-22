//
//  07_1.cpp
//  BFA_Programming_Course_CPP
//
//  编写一个程序，完成下列操作：
//  （1）加载并显示一张图像（cv:imread, cv: Mat, cv:imshow），等待键盘输入（cv:waitkey（n）），输入"Esc”退出；
//  （2）加载一个视频（cv：：VideoCapture），使用while循环读取视频帧，输入"Esc”退出；
//  （3）开启计算机摄像头（cv：：VideoCapture）捕获视频，使用while循环读取视频帧，输入"Ess"退出
//
//  Created by Minus on 2023/12/16.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    // 显示图片
    Mat img = imread("/Users/minus/cpp/BFA_Programming_Course_CPP/BFA_Programming_Course_CPP/resource/TestPic.png");
    namedWindow("pic", WINDOW_NORMAL);
    resizeWindow("pic", 600, 600);
    imshow("pic", img);

    int key = 0;
    while (key != 27) // 27 corresponds to the ASCII code for the 'Esc' key
        key = waitKey(); // Wait indefinitely for a key press
    destroyWindow("pic");

    // 显示视频
    VideoCapture cap;
    Mat frame;
    cap.open("/Users/minus/cpp/BFA_Programming_Course_CPP/BFA_Programming_Course_CPP/resource/TestVideo.mp4");
    namedWindow("vid", WINDOW_AUTOSIZE);

    key = 0;
    while (key != 27)
    {
        cap.read(frame);
        imshow("vid", frame);
        key = waitKey(40);
    }
    destroyWindow("vid");

    // 打开摄像头
    cap.open(0); // 0 represents the default camera
    if (cap.isOpened())
    {
        namedWindow("cam", WINDOW_AUTOSIZE);
        key = 0;
        while (key != 27)
        {
            cap.read(frame);
            imshow("cam", frame);
            key = waitKey(40);
        }
        destroyWindow("cam");
    }
    else
    {
        std::cout << "No camera available." << std::endl;
    }

    // 释放摄像头对象
    cap.release();

    return 0;
}
