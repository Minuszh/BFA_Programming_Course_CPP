#  第七次作业完成情况

## New Xcode下的OpenCV配置
### Reference
https://docs.opencv.org/4.8.0/d7/d88/tutorial_hello.html
PCH文件 https://github.com/suyinkaishifangle/ios-/blob/master/PCH%20文件%20✅.md
### 官网下载OpenCV Framework
### 

## Xcode下的OpenCV环境配置（自行安装、编译OpenCV版本，已放弃）
参考 https://zhuanlan.zhihu.com/p/371401625
链接库 https://www.codementor.io/@ohasanli/opencv-on-xcode-142qxx3sl8
### 下载OpenCV
```
brew install opencv
```
### 查询OpenCV安装位置
```
brew list opencv
```
### 查找OpenCV安装位置
```
brew list opencv
```
### 链接库到Xcode
下载 `pkg-config` 然后使用命令
```
pkg-config --cflags --libs
```
后接 `/opt/homebrew/Cellar/opencv/4.8.1_5/lib/pkgconfig/opencv4.pc` 根据具体路径确定得到结果
在 `Library Search Paths` 和 `Header Search Paths` 中添加 -I 和 -L 的 Output
再添加 `Other Linker Flags`

