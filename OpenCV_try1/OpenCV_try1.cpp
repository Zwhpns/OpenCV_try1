#include<opencv2/opencv.hpp>
#include<quickopencv.h>
#include<iostream>
using namespace cv;
using namespace std;
int main() {
	Mat test = imread("./imgs/koishi0023.jpg",IMREAD_UNCHANGED);
	if (test.empty()) {
		cout << "load error";
		return -1;
	}
	QuickDemo qd;
	qd.colorSpace_Demo(test);
	waitKey(0);
	destroyAllWindows();
	return 0;
}