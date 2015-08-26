// glfw.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Libraries\GLlibs\SOIL.h"

int width;
int height;
void main(){
 unsigned char* image = SOIL_load_image("sample2.png", &width, &height, 0, SOIL_LOAD_RGB);
}

