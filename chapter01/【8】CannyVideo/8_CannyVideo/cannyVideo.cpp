//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV3���鱾����ʾ������
//		����������ʹ��VideoCapture���������ͷ������Ƶ��ͨ��canny���Ӵ������ʾ
//		�����������ò���ϵͳ�� Windows 10 64bit
//		������������IDE�汾��Visual Studio 2013
//		������������OpenCV�汾��	3.1.0
//		2017��6�� Created by Xchen
//		2017��6�� Revised by Xchen
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
			imwrite("canny.jpg", edge);//�˳�ǰ�洢���һ֡��ͼƬ
			break;
		}
	}
	return 0;
}