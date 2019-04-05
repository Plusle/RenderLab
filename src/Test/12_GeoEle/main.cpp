#include <CppUtil/Basic/UGM/Point2.h>

#include <CppUtil/Basic/Timer.h>

#include <sstream>

using namespace CppUtil;
using namespace CppUtil::Basic;
using namespace std;

int main() {
	Point2 p2(-3, 4);

	cout << sizeof(Point2) << endl;
	cout << p2.DistanceWith({ -3,6 }) << endl;
	cout << p2.Abs() << endl;
	
	Vec2 v0(-3, 4);
	Vec2 v1(4, -3);
	Vec2 v2(1, 1);

	cout << sizeof(Vec2) << endl;
	cout << Vec2::Zero() << endl;
	constexpr auto identity = Vec2::Identiry();
	cout << identity << endl;

	cout << "v0+v1 == v1+v0 : " << ((v0 + v1) == (v1 + v0)) << endl;

	cout << "v0+(v1+v2) = (v0+v1)+v2 : " << ((v0 + (v1 + v2))== (v0 + v1) + v2) << endl;

	cout << "v0 + Vec2::Zero() == v0 : " << (v0 + Vec2::Zero()==v0) << endl;

	cout << "v0 + (-v0) == Vec2::Zero() : " << ((v0 + (-v0)) == Vec2::Zero()) << endl;

	cout << "Vec2::Identity() * v0 == v0 : " << (Vec2::Identiry() * v0 == v0) << endl;

	float k = 0.1f;
	float l = 0.314f;

	cout << "(k*l)*v0==k*(l*v0) : " << ((k*l)*v0 == k * (l*v0)) << endl;

	cout << "(k+l)*v0==k*v0+l*v0 : " << ((k + l)*v0 == k * v0 + l * v0) << endl;

	cout << "k*(v0+v1) == k * v0 + k * v1 : " << (k*(v0 + v1) == k * v0 + k * v1) << endl;
	
	return 0;
}
