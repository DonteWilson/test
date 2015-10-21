#include <iostream>
#include "MathLibrary.h"
#include "ML2.h"
//replaces std
using namespace std;


int main()
{
	cout << "Vector 2:\n";

	float Mag;

	Vector2<int>TwoDVec1(3,3);
	Vector2<int>TwoDVec2(1,1);
	Vector2<int>TwoDVec3;
	Vector2<int>TwoDVec4;

	TwoDVec4 = TwoDVec3.Add(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";

	TwoDVec4 = TwoDVec3.Sub(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";

	TwoDVec4 = TwoDVec3.Multi(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec2.y << ")\n";


	Mag = TwoDVec3.Mag(TwoDVec1);

	Mag = TwoDVec3.Mag(TwoDVec2);

	TwoDVec4 = TwoDVec3.Norm(TwoDVec1);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";

	cout << "\nVec3:\n";

	Vector3<int>Vec1(3, 7, 6);
	Vector3<int>Vec2(4, 4, 4);
	Vector3<int>Vec3;
	Vector3<int>Vec4;


	Vec4 = Vec1 + Vec2;
	cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";

	Vec4 = Vec1 - Vec2;
	cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";

	Vec4 = Vec1 * Vec2;
	cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";

	Mag = Vec3.Mag(Vec1);
	cout << "Magnitude is: " << Mag << endl;

	Mag = Vec3.Mag(Vec1);
	cout << "Magnitude is: " << Mag << endl;

	Vec4 = Vec3.Norm(Vec1);
	cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";

	system("pause");
	return 0;







}