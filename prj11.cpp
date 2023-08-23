#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
	RNG& deger = theRNG();
	Mat goruntu(400, 400, CV_8UC3, Scalar::all(0));
	for (;;)
	{
		int sayi = deger.uniform(1, 150);
		vector<Point> noktalar;
		for (int i = 0; i < sayi; i++)
		{
			Point nokta;
			nokta.x =deger.uniform(goruntu.cols / 4, goruntu.cols / 4 * 3);
			nokta.y = deger.uniform(goruntu.rows / 4, goruntu.rows / 4 * 3);
			noktalar.push_back(nokta);
		}
		for (int j = 0; j < sayi; j++)circle(goruntu, noktalar[j], 1, Scalar::all(150), 1);
		imshow("noktas", goruntu);
		cout << sayi << endl;
		goruntu = Scalar::all(0);
		waitKey(0);
		

	}
}