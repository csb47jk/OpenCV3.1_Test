#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{
	//test456
	Mat img = imread("C:\img.jpg");
	imshow("Hello World2  test3!", img);
	waitKey();
}