#ifndef __VEC3_H__
#define __VEC3_H__ 1

#include "math_utils.h"

class Vec3 {
 public:
	Vec3();
	Vec3(float value);
	Vec3(float x, float y, float z);
	Vec3(float* values_array);
	Vec3(const Vec3& other);
	~Vec3();

	Vec3 operator+(const Vec3& other) const;
	Vec3 operator+(float value) const;
	Vec3& operator+=(const Vec3& other);
	Vec3& operator+=(float value);
	Vec3 operator-(const Vec3& other) const;
	Vec3 operator-(float value) const;
	Vec3& operator-=(const Vec3& other);
	Vec3& operator-=(float value);
	bool operator==(const Vec3& other) const;
	bool operator!=(const Vec3& other) const;
	void operator=(const Vec3& other);
	void operator=(float value);
	Vec3 operator*(float value) const;
	Vec3& operator*=(float value);
	Vec3 operator/(float value) const;
	Vec3& operator/=(float value);

	float Magnitude() const;
	Vec3 Normalized() const;
	void Normalize();
	float SqrMagnitude() const;
	void Scale(const Vec3& other);

	static Vec3 Lerp(const Vec3& a, const Vec3& b, float t);
	static Vec3 LerpUnclamped(const Vec3& a, const Vec3& b, float t);
	static float DotProduct(const Vec3& a, const Vec3& b);
	static float Angle(const Vec3& a, const Vec3& b);
	static Vec3 CrossProduct(const Vec3& a,const Vec3& b);	
	static float Distance(const Vec3& a, const Vec3& b);
	static Vec3 Reflect(const Vec3& direction, const Vec3& normal);

	static const Vec3 up;
	static const Vec3 down;
	static const Vec3 right;
	static const Vec3 left;
	static const Vec3 forward;
	static const Vec3 back;
	static const Vec3 zero;
	static const Vec3 unit;

	float x;
	float y;
	float z;
};

inline float Vec3::Magnitude() const {
	return 0.0f;
}

inline void Vec3::Normalize() {	

	float inverse_magnitude = 1.0f / Magnitude();
	*this *= inverse_magnitude;
}

inline Vec3 Vec3::Normalized() const {
	return Vec3();
}

inline float Vec3::DotProduct(const Vec3& a, const Vec3& other)  {
	return 0.0f;
}

inline float Vec3::Angle(const Vec3& a, const Vec3& other)  {
	return 0.0f;
}

inline Vec3 Vec3::CrossProduct(const Vec3& a, const Vec3& other)  {
	return Vec3();
}

inline float Vec3::SqrMagnitude() const {
	return 0.0f;
}

inline void Vec3::Scale(const Vec3& other) {	
}

inline Vec3 Vec3::Lerp(const Vec3& a, const Vec3& b, float t) {
	return Vec3();
}

inline Vec3 Vec3::LerpUnclamped(const Vec3& a, const Vec3& b, float t) {
	return Vec3();
}

inline float Vec3::Distance(const Vec3& a, const Vec3& b) {
	return 0.0f;
}

inline Vec3 Vec3::Reflect(const Vec3& direction, const Vec3& normal) {
	return Vec3();
}

inline Vec3 Vec3::operator+(const Vec3& other) const {
	Vec3 ret;
	ret.x = x + other.x;
	ret.y = y + other.y;
	ret.z = z + other.z;
	return ret;

}

inline Vec3 Vec3::operator+(float value) const {
	Vec3 ret;

	ret.x = x + value;
	ret.y = y + value;
	ret.z = z + value;
	return ret;

}

inline Vec3& Vec3::operator+=(const Vec3& other) {
	x += other.x;
	y += other.y;
	z += other.z;

	return *this;
}

inline Vec3& Vec3::operator+=(float value) {
	x += value;
	y += value;
	z += value;
	return *this;
}

inline Vec3 Vec3::operator-(const Vec3& other) const {
	Vec3 aux;
	aux.x = x - other.x;
	aux.y = y - other.y;
	aux.y = z - other.z;
	return aux;
}

inline Vec3 Vec3::operator-(float value) const {
	Vec3 aux;
	aux.x = x - value;
	aux.y = y - value;
	aux.y = z - value;
	return aux;
}

inline Vec3& Vec3::operator-=(const Vec3& other) {
	x -= other.x;
	y -= other.y;
	z -= other.z;
	return *this;	
}

inline Vec3& Vec3::operator-=(float value) {
	x -= value;
	y -= value;
	z -= value;
	return *this;	
}

inline bool Vec3::operator==(const Vec3& other) const {
	return (x == other.x) && (y == other.y) && (z == other.z);
}

inline bool Vec3::operator!=(const Vec3& other) const {
	return (x != other.x) && (y != other.y) && (z != other.z);
}

inline void Vec3::operator=(const Vec3& other) {
	x = other.x;
	y = other.y;	
	z = other.z;	
}

inline void Vec3::operator=(float value) {	
	x = value;
	y = value;
	z = value;
}

inline Vec3 Vec3::operator*(float value) const {
	return Vec3(x * value, y * value, z * value);
}

inline Vec3& Vec3::operator*=(float value) {	
  x *= value;
  y *= value;
  z *= value;
  return *this;
}

inline Vec3 Vec3::operator/(float value) const {
	return Vec3(x/value, y/value, z/value);
}

inline Vec3& Vec3::operator/=(float value) {	
	x /= value;
	y /= value;
	z /= value;
	return *this;
}

#endif 
