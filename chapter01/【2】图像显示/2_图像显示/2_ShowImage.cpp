//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版书本配套示例程序02
//		程序描述：简单的OpenCV图像显示
//		开发测试所用操作系统： Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2013
//		开发测试所用OpenCV版本：	3.1.0
//		2017年6月 Created by Xchen
//		2017年6月 Revised by Xchen
//------------------------------------------------------------------------------------------------


#include <opencv2/opencv.hpp>  //头文件
using namespace cv;  //包含cv命名空间

void main( )
{    
	// 【1】读入一张图片，载入图像
	Mat srcImage = imread("1.jpg");
	// 【2】显示载入的图片
	imshow("【原始图】",srcImage);
	// 【3】等待任意按键按下
	waitKey(0);
}  