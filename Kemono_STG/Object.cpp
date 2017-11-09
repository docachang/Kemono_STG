#include "Object.h"



void Object::setObjectImg(int img) {
	object_img = img;
}

void Object::setx(float x) {
	objectx = x;
}

void Object::sety(float y) {
	objecty = y;
}

float Object::getx() {
	return objectx;
}
float Object::gety() {
	return objecty;
}
float Object::getx_end() {
	return xend;
}
float Object::gety_end() {
	return yend;
}
void Object::move(float x, float y) {
	objectx += x;
	objecty += y;
}
void Object::setx_hitarea(float x) {
	hitarea_x = x;
}
void Object::sety_hitarea(float y) {
	hitarea_y = y;
}
float Object::getx_hitarea() {
	return hitarea_x;
}
float Object::gety_hitarea() {
	return hitarea_y;
}
float Object::getx_hitarea_end() {
	return hitarea_xend;
}
float Object::gety_hitarea_end() {
	return hitarea_yend;
}





