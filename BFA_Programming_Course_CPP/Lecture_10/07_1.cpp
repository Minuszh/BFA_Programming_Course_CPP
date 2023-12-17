//
//  07_1.cpp
//  BFA_Programming_Course_CPP
//
//  编写一个程序，完成下列操作：
//  （1）加载并显示一张图像（cv:imread, cv: Mat, cv:imshow），等待键盘输入（cv:waitkey（n）），输入"Esc”退出；
//  （2） 加载一个视频（cv：：VideoCapture），使用while循环读取视频帧，输入"Esc”退出；
//  （3） 开启计算机摄像头（cv：：VideoCapture）捕获视频，使用while循环读取视频帧，输入"Ess"退出
//
//  Created by Minus on 2023/12/16.
//

#include <opencv2/opencv.hpp>

int main() {
    // (1) 加载并显示一张图像
    cv::Mat image = cv::imread("/Users/minus/cpp/BFA_Programming_Course_CPP/BFA_Programming_Course_CPP/resource/TestPic.png");

    if (image.empty()) {
        std::cerr << "Error: Could not read the image." << std::endl;
        return -1;
    }

    cv::imshow("Image", image);
    cv::waitKey(1);

    // (2) 加载一个视频
    cv::VideoCapture video("/Users/minus/cpp/BFA_Programming_Course_CPP/BFA_Programming_Course_CPP/resource/TestVideo.mp4");

    if (!video.isOpened()) {
        std::cerr << "Error: Could not open the video." << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        video >> frame;

        if (frame.empty()) {
            std::cerr << "Error: Could not read a frame from the video." << std::endl;
            break;
        }

        cv::imshow("Video", frame);

        char key = cv::waitKey(30);
        if (key == 27) {  // Press 'Esc' to exit
            break;
        }
    }

    // (3) 开启计算机摄像头
    cv::VideoCapture webcam(0);

    if (!webcam.isOpened()) {
        std::cerr << "Error: Could not open the webcam." << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        webcam >> frame;

        if (frame.empty()) {
            std::cerr << "Error: Could not read a frame from the webcam." << std::endl;
            break;
        }

        cv::imshow("Webcam", frame);

        char key = cv::waitKey(30);
        if (key == 27) {  // Press 'Esc' to exit
            break;
        }
    }

    return 0;
}
