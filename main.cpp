#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << " Usage: skin_detector ImageToLoadAndDisplay" << endl;
		exit(-1);
	}

	Mat image;
	image = imread(argv[1], CV_LOAD_IMAGE_COLOR);

	namedWindow("Image", WINDOW_AUTOSIZE);
	imshow("Image", image);

	waitKey(0);

	return 0;
}