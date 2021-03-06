//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版书本配套示例程序07
//		程序描述：使用VideoCapture类调用摄像头读入视频并显示
//		开发测试所用操作系统： Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2013
//		开发测试所用OpenCV版本：	3.1.0
//		2017年6月 Created by Xchen
//		2017年6月 Revised by Xchen
//------------------------------------------------------------------------------------------------

//---------------------------------【头文件、命名空间包含部分】----------------------------
//		描述：包含程序所使用的头文件和命名空间
//-------------------------------------------------------------------------------------------------
#include <opencv2\opencv.hpp>  
using namespace cv;  

//-----------------------------------【main( )函数】--------------------------------------------
//		描述：控制台应用程序的入口函数，我们的程序从这里开始
//-------------------------------------------------------------------------------------------------
int main( )  
{  
	//【1】从摄像头读入视频
	VideoCapture capture(0);
	//【2】循环显示每一帧
	while(1)  
	{  
		Mat frame;  //定义一个Mat变量，用于存储每一帧的图像
		capture>>frame;  //读取当前帧
		if (frame.empty()){
			break;
		}
		imshow("读取视频",frame);  //显示当前帧
		if (waitKey(30) > 0){
			break;
		}
		//waitKey(30);  //延时30ms，1000/30=33.3FPS
	}  
	return 0;     
}  
