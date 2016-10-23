#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{

	Mat img = imread("C:\img.jpg");
	imshow("Hello World!", img);
	waitKey();
}