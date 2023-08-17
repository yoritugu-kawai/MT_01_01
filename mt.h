#pragma once
#include <Novice.h>
#include"Matrix4x4.h"
#include"Vector3.h"
#include<cmath>
#include<assert.h>

Matrix4x4 MakeRotateXMatrix(float radian);

Matrix4x4 MakeRotateYMatrix(float radian);

Matrix4x4 MakeRotateZMatrix(float radian);

Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

Matrix4x4 MakeRotateXYZMatrix(const Vector3& rotate);

Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

Matrix4x4 MakeScaleMatrix(const Vector3& scale);

Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate);

Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);

Matrix4x4 Inverse(const Matrix4x4& m);

Matrix4x4 MakeViewportMatrix(float left, float top, float widte, float height, float minDepth, float maxDepth);


Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

Vector3 Cross(const Vector3& v1, const Vector3& v2);

void VecterScreenPrintf(int x, int y, const Vector3& vector, const char* label);