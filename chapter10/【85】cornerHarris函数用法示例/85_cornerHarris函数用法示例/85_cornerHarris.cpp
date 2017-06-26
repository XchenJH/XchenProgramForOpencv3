//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV3���鱾����ʾ������85
//		����������cornerHarris�����÷�ʾ��
//		�����������ò���ϵͳ�� Windows 10 64bit
//		������������IDE�汾��Visual Studio 2013
//		������������OpenCV�汾��	3.1.0
//		2017��6�� Created by Xchen
//		2017��6�� Revised by Xchen
//------------------------------------------------------------------------------------------------

//---------------------------------��ͷ�ļ��������ռ�������֡�----------------------------
//		����������������ʹ�õ�ͷ�ļ��������ռ�
//------------------------------------------------------------------------------------------------   
#include <opencv2/opencv.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
using namespace cv;  

int main()  
{  
	//�ԻҶ�ģʽ����ͼ����ʾ
	Mat srcImage = imread("1.jpg", 0);  
	imshow("ԭʼͼ", srcImage);  

	//����Harris�ǵ����ҳ��ǵ�
	Mat cornerStrength;  
	cornerHarris(srcImage, cornerStrength, 2, 3, 0.01);

	//�ԻҶ�ͼ������ֵ�������õ���ֵͼ����ʾ  
	Mat harrisCorner;  
	threshold(cornerStrength, harrisCorner, 0.00001, 255, THRESH_BINARY);  
	imshow("�ǵ����Ķ�ֵЧ��ͼ", harrisCorner);  

	waitKey(0);  
	return 0;  
}  
