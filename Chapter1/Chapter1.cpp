#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


// // Images // //
//int main()
//{
//	string path = "../Resources/test.png";
//	Mat img = imread(path);
//	imshow("Image", img);
//	waitKey(0);
//	return 0;
//}


// // Videos // //
//int main()
//{
//	string path = "../Resources/test_video.mp4";
//	VideoCapture cap(path);
//	Mat frame;
//	while (true)
//	{
//		cap.read(frame);
//		imshow("Video", frame);
//		waitKey(20);
//	}
//	return 0;
//}


// // Webcam // //
int main()
{
	VideoCapture cap(0);
	Mat frame;
	while (true)
	{
		cap.read(frame);
		imshow("Video", frame);
		waitKey(1);
	}
	return 0;
}