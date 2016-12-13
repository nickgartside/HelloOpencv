#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"


using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    cv::Mat image = cv::imread("/home/nick/Pictures/lena.jpg", 1);

    cv::namedWindow("hello Image", CV_WINDOW_AUTOSIZE);
    cv::imshow("hello Image", image);
    cv::waitKey(0);





    return 0;
}
