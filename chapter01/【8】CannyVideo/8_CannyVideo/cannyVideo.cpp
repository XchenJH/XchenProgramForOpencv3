//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版书本配套示例程序
//		程序描述：使用VideoCapture类调用摄像头读入视频并通过canny算子处理后显示
//		开发测试所用操作系统： Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2013
//		开发测试所用OpenCV版本：	3.1.0
//		2017年6月 Created by Xchen
//		2017年6月 Revised by Xchen
//------------------------------------------------------------------------------------------------
#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
	VideoCapture camera(0);
	printf("the version of opencv is "CV_VERSION);
	Mat edge;
	while (1){
		Mat frame;
		camera >> frame;
		cvtColor(frame, edge, COLOR_BGR2GRAY);
		blur(edge, edge, Size(7, 7));
		Canny(edge, edge, 3, 10, 3);
		imshow("CannyVideo", edge);
		if (waitKey(30) > 0){
			imwrite("canny.jpg", edge);//退出前存储最后一帧的图片
			break;
		}
	}
	return 0;
}