#ifndef _CPPUTIL_BASIC_MATH_UGM_POINT2_H_
#define _CPPUTIL_BASIC_MATH_UGM_POINT2_H_

#include <CppUtil/Basic/UGM/Point.h>
#include <CppUtil/Basic/UGM/Vector2.h>

#include <CppUtil/Basic/UGM/ext/Alias.h>
#include <CppUtil/Basic/UGM/ext/Basic_Val2.h>
#include <CppUtil/Basic/UGM/ext/Metric_Euclidean_2.h>

namespace CppUtil {
	namespace Basic {
		template <typename T>
		class Point<2, T> : public EXT::ME_B<2,T,Point<2,T>> {
		public:
			using EXT::ME_B<2, T, Point<2, T>>::ME_B;

		public:
			const Vector<2, T> operator-(const Point &p) const {
				return Vector<2, T>(x - p.x, y - p.y);
			}

			const Point operator+(const Vector<2, T> &v) const {
				return Point(x + v.x, y + v.y);
			}

			Point & operator+=(const Vector<2, T> &v) {
				x += v.x;
				y += v.y;
				return *this;
			}

			const Point operator-(const Vector<2, T> &v) const {
				return Point(x - v.x, y - v.y);
			}

			const Point & operator-=(const Vector<2, T> &v) {
				x -= v.x;
				y -= v.y;
				return *this;
			}
		};
	}
}

#endif // !_CPPUTIL_BASIC_MATH_UGM_POINT2_H_
