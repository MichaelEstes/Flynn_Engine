#include <iostream>
#include <cmath>
#include "FlynnVector.h"
#include "FlynnRectangle.h"
#include "FlynnCircle.h"
#include "FlynnRay.h"

using namespace std;

int main(){

	FlynnVector2 testVec2a(2, 5);
	FlynnVector2 testVec2b(50,50);
	FlynnVector3 testVec3a(2, 5, 9);
	FlynnVector3 testVec3b(50, 50, 50);
	FlynnVector3 testVec3c;
	FlynnVector3 testVec3Cross;
	float testDot;
	FlynnRectangle2D testRect(testVec2a, 10, 10);
	FlynnRectangle2D testRectB(FlynnVector2(7, 10), 5, 5);
	FlynnVector2 rectPoint;
	FlynnCircle2D testCircle(FlynnVector2(10,10), 10);
	FlynnRay2D testRay(testVec2a, testVec2b, 1);
	
	
	testDot = testVec3a.Dot(testVec3b);
	testVec3Cross = testVec3a.Cross(testVec3b);

	testVec3a.Normalize();

	testVec3b /= 2;

	testVec3c = testVec3a + testVec3b;

	if (testVec3a != testVec3b)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	cout << testRect.width << " " << testRect.height << endl;
	rectPoint = testRect.GetTopRight();
	cout << rectPoint.x << " " << rectPoint.y << endl;
	rectPoint = testRect.GetBottomLeft();
	cout << rectPoint.x << " " << rectPoint.y << endl;
	rectPoint = testRect.GetBottomRight();
	cout << rectPoint.x << " " << rectPoint.y << endl;
	cout << testRect.Area() << endl;
	cout << testRect.Perimeter() << endl;
	cout << testRect.Diagonal() << endl;
	cout << testRect.numPoints << endl;

	cout << testVec3a.x << " " << testVec3a.y << " " << testVec3a.z << endl;
	cout << testVec3b.x << " " << testVec3b.y << " " << testVec3b.z << endl;
	cout << testVec3c.x << " " << testVec3c.y << " " << testVec3c.z << endl;
	cout << testVec3a.GetLength() << endl;
	cout << testDot << endl;
	cout << testVec3Cross.x << " " << testVec3Cross.y << " " << testVec3Cross.z << endl;

	cout << testCircle.center.x << " " << testCircle.center.y << endl;
	cout << testCircle.radius << endl;
	cout << testCircle.Diameter() << endl;
	cout << testCircle.Circumference() << endl;
	cout << testCircle.Area() << endl;

	cout << testRay.direction.x << " " << testRay.direction.y << endl;
	cout << testRay.length << endl;

	testRay.Update();
	FlynnVector2 rayPoint = testRay.FindPoint();
	cout << rayPoint.x << " " << rayPoint.y << endl;

	cout << testRect.PointCollision(FlynnVector2(5, 10)) << endl;
	cout << testRect.RectCollision(testRectB) << endl;
	cout << testRect.CircleCollision(testCircle) << endl;

	return 0;
}