#include "Object.h"
#include "DxLib.h"


//�Z�b�g�C���[�W
void Object::setObjectImg(int img) {
	object_img = img;							//�C���[�W�Z�b�g
	GetGraphSize(object_img, &SizeX, &SizeY);	//�摜�T�C�Y�擾
}


//�I�u�W�F�N�g���W
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
	xend = objectx + SizeX;
	return xend;
}
float Object::gety_end() {
	yend = objecty + SizeY;
	return yend;
}


//�I�u�W�F�N�g�����蔻��
void Object::setx_hitarea(float x) {
	hitarea_x = x;
}
void Object::sety_hitarea(float y) {
	hitarea_y = y;
}
void Object::set_hitarea_size(float f) {
	hitareaSize = f;
}
float Object::getx_hitarea() {
	return hitarea_x;
}
float Object::gety_hitarea() {
	return hitarea_y;
}
float Object::getx_hitarea_end() {
	hitarea_xend = hitarea_x + hitareaSize;
	return hitarea_xend;
}
float Object::gety_hitarea_end() {
	hitarea_yend = hitarea_y + hitareaSize;
	return hitarea_yend;
}



//�I�u�W�F�N�g�ړ�
void Object::move(float x, float y) {
	objectx += x;
	objecty += y;
	hitarea_x += x;
	hitarea_y += y;
}




