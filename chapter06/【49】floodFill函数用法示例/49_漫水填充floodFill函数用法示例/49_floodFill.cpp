//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版书本配套示例程序49
//		程序描述：漫水填充floodFill函数用法示例
//		开发测试所用操作系统： Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2013
//		开发测试所用OpenCV版本：	3.1.0
//		2017年6月 Created by Xchen
//		2017年6月 Revised by Xchen
//------------------------------------------------------------------------------------------------

//---------------------------------【头文件、命名空间包含部分】----------------------------
//		描述：包含程序所使用的头文件和命名空间
//------------------------------------------------------------------------------------------------
#include <opencv2/opencv.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
using namespace cv;  

//-----------------------------------【main( )函数】--------------------------------------------  
//      描述：控制台应用程序的入口函数，我们的程序从这里开始  
//----------------------------------------------------------------------------------------------- 
int main( )
{    
	Mat src = imread("1.jpg"); 
	imshow("【原始图】",src);
	Rect ccomp;
	floodFill(src, Point(50,300), Scalar(155, 255,55), &ccomp, Scalar(20, 20, 20),Scalar(20, 20, 20));
	imshow("【效果图】",src);
	waitKey(0);
	return 0;    
}  