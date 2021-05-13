#include "C:/opencv/opencv/build/include/opencv2/objdetect.hpp"
#include "C:/opencv/opencv/build/include/opencv2/highgui.hpp"
#include "C:/opencv/opencv/build/include/opencv2/imgproc.hpp"
#include<opencv2/highgui.hpp>

#include<iostream>

using namespace std;
using namespace cv;






int main()
{
	//--------------------------------------------------------------------------------------------------------





	VideoCapture camera;      // object can be of any name

	camera.open(0);          // 0 represents inbuilt camera, instead you can pass the path of image
	Mat frame;                // frame is of type matrix to save image

	while (true)
	{
		//showing vedio on terminal

		camera >> frame;                   // input from camera is forwarded to frame
		//imshow("video", frame);         //displays frame or video in a window with name Video



//-------------------------------------------------------------------------------------------------------------------------------


		CascadeClassifier facedetector, lefteyedetector, righteyedetector, nestedCascade;

		
		//facedetector.load("C:/opencv/opencv/sources/data/haarcascades/haarcascade_frontalface_alt2.xml");
		lefteyedetector.load("C:/opencv/opencv/sources/data/haarcascades/haarcascade_lefteye_2splits.xml");
		righteyedetector.load("C:/opencv/opencv/sources/data/haarcascades/haarcascade_righteye_2splits.xml");
		//nestedCascade.load("C:/opencv/opencv/sources/data/haarcascades/haarcascade_eye.xml");

// porcessing the image before detection
//------------------------------------------------------------------------------------------------------------------------------
	//converting into gray scale		

		Mat gray;

		if (frame.channels() == 3)
		{
			cvtColor(frame, gray, COLOR_BGR2GRAY);

		}

		else if (frame.channels() == 4)
		{
			cvtColor(frame, gray, COLOR_BGRA2GRAY);
		}

		else
		{
			gray = frame;

		}


//----------------------------------------------------------------------------------------------------------------------------

		// Histogram equalization

		Mat histogramimage;


		//equalizeHist(smallimage, histogramimage);
		equalizeHist(gray, histogramimage);



	



			//----------------------------------------------------------------------------------------



		
			vector<Rect> nestedObjects, nestedObjects2;
			Scalar color = Scalar(255, 0, 0);










//------------------------------------------------------------------------------------------------------------------------------
			lefteyedetector.detectMultiScale(histogramimage, nestedObjects, 1.1f, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));

		
			// Draw circles around eyes

			for (size_t k = 0; k < nestedObjects.size(); k++)
			{

				Rect nr = nestedObjects[k];
				rectangle(frame, nr, color, 3, 8, 0);

			}
			
			//finding centre points of left eyes
			Point leftcenter = Point(-1, -1);
			for (size_t m = 0; m < nestedObjects.size(); m++)
			{
				leftcenter.x = nestedObjects[m].x + nestedObjects[m].width/2;
				leftcenter.y = nestedObjects[m].y + nestedObjects[m].height / 2;
				circle(frame, leftcenter, 4, color, 4, 8, 0);   //drawing circle around the center of left eye
				
			}









//-----------------------------------------------------------------------------------------------------------------------------




			righteyedetector.detectMultiScale(histogramimage, nestedObjects2, 1.1f, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));


			// Draw rectangle around right eye

			for (size_t n = 0; n < nestedObjects2.size(); n++)
			{

				Rect nr2 = nestedObjects2[n];
				rectangle(frame, nr2, color, 3, 8, 0);

			}

			//finding centre points of right-eye
			Point rightcenter = Point(-1, -1);
			for (size_t p = 0; p < nestedObjects2.size(); p++) 
			
			{
				rightcenter.x = nestedObjects2[p].x + nestedObjects2[p].width / 2;
				rightcenter.y = nestedObjects2[p].y + nestedObjects2[p].height / 2;
				circle(frame, rightcenter, 4, color, 4, 8, 0);   //drawing circle around the center of right eye
			}



			
			

//---------------------------------------------------------------------------------------------------------------------------
//calculating the angle of eyes
			//based on right angle triangle



			double dx = rightcenter.x - leftcenter.x;     // base of right angle triangle
			double dy = rightcenter.y - leftcenter.y;     // height of right angle triangle

			double hypotenuse = sqrt(dx * dx + dy * dy);

			double angle = atan2(dy, dx) * 180.0 / CV_PI;

			cout << angle << "\n";


			


















//-----------------------------------------------------------------------------------------------------------------------------
	//displaying the detected face image image



		imshow("detected face", frame);
		waitKey(5);                       //wait for 20miliseconds before dispalying next frame, 
											//if 0 is passed it will wait indefinite time before displaying next frame




	//---------------------------------------------------------------------------------------------------------------

	}

	return 0;
}
