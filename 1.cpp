
#include "opencv2/opencv.hpp"
#include "opencv2/core/cuda.hpp"
using namespace std;
using namespace cv;

int main()
{
    int num_devices = cv::cuda::getCudaEnabledDeviceCount();

    cout<<num_devices<<endl;
}

