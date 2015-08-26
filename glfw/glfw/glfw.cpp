// glfw.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Libraries\GLlibs\SOIL.h"

void main()
{
	int width;
	int height;
	unsigned char* image = SOIL_load_image("sample2.png", &width, &height, 0, SOIL_LOAD_RGB);
	SOIL_free_image_data(image);
}

