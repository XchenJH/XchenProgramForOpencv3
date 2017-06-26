//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV2���鱾����ʾ������63
//		����������HoughCircles�����÷�ʾ��
//		�����������ò���ϵͳ�� Windows 10 64bit
//		������������IDE�汾��Visual Studio 2013
//		������������OpenCV�汾��	3.1.0
//		2017��6�� Created by Xchen
//		2017��6�� Revised by Xchen
//------------------------------------------------------------------------------------------------

//---------------------------------��ͷ�ļ��������ռ�������֡�-------------------------------
//          ����������������ʹ�õ�ͷ�ļ��������ռ�
//----------------------------------------------------------------------------------------------
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;

//-----------------------------------��main( )������--------------------------------------------
//		����������̨Ӧ�ó������ں��������ǵĳ�������￪ʼ
//-----------------------------------------------------------------------------------------------
int main( )
{
	//��1������ԭʼͼ��Mat��������   
	Mat srcImage = imread("1.jpg");  //����Ŀ¼��Ӧ����һ����Ϊ1.jpg���ز�ͼ
	Mat midImage,dstImage;//��ʱ������Ŀ��ͼ�Ķ���

	//��2����ʾԭʼͼ
	imshow("��ԭʼͼ��", srcImage);  

	//��3��תΪ�Ҷ�ͼ������ͼ��ƽ��
	cvtColor(srcImage,midImage, COLOR_BGR2GRAY);//ת����Ե�����ͼΪ�Ҷ�ͼ
	GaussianBlur( midImage, midImage, Size(9, 9), 2, 2 );

	//��4�����л���Բ�任
	vector<Vec3f> circles;
	HoughCircles(midImage, circles, HOUGH_GRADIENT,1.5, 10, 200, 100, 0, 0 );

	//��5��������ͼ�л��Ƴ�Բ
	for( size_t i = 0; i < circles.size(); i++ )
	{
		//��������
		Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
		int radius = cvRound(circles[i][2]);
		//����Բ��
		circle( srcImage, center, 3, Scalar(0,255,0), -1, 8, 0 );
		//����Բ����
		circle( srcImage, center, radius, Scalar(155,50,255), 3, 8, 0 );
	}

	//��6����ʾЧ��ͼ  
	imshow("��Ч��ͼ��", srcImage);  

	waitKey(0);  

	return 0;  
}
