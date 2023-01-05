#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main()
{
	string path = "../Resources/test.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;
	
	// �Ҷ�ͼ
	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	// ��˹ģ��
	GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);
	// Canny��Ե���
	Canny(imgBlur, imgCanny, 50, 150);
	// ���ͺ͸�ʴ
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDil, kernel);
	erode(imgDil, imgErode, kernel);

	//imshow("Image", img);
	//imshow("Image Gray", imgGray);
	//imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilation", imgDil);
	imshow("Image Erode", imgErode);
	waitKey(0);
	return 0;
}