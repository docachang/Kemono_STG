#pragma once

class Object
{
protected:
	int object_img;														//�I�u�W�F�N�g�C���[�W
	float objectx,objecty,xend,yend;									//�I�u�W�F�N�g���W���T�C�Y
	float hitarea_x,hitarea_y,hitarea_xend,hitarea_yend,hitareaSize;	//�I�u�W�F�N�g�����蔻��
	int SizeX, SizeY;													//�摜�T�C�Y�擾�p
public:
	//���\�b�h�Q
	void setObjectImg(int img);		//�I�u�W�F�N�g�C���[�W�o�^
	//-------------------------------------------------------------
	void setx(float x);				//�I�u�W�F�N�g���W
	void sety(float y);
	float getx();
	float gety();
	float getx_end();				//�I�u�W�F�N�g�T�C�Y�擾
	float gety_end();
	//-------------------------------------------------------------
	void setx_hitarea(float x);		//�I�u�W�F�N�g�����蔻��
	void sety_hitarea(float y);
	void set_hitarea_size(float f);
	float getx_hitarea();
	float gety_hitarea();
	float getx_hitarea_end();		//�I�u�W�F�N�g�����蔻��T�C�Y�擾
	float gety_hitarea_end();
	//-------------------------------------------------------------
	void move(float x, float y);	//�I�u�W�F�N�g�ړ�
	
};

