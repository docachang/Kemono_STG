#pragma once
#include "Object.h"
#include "DxLib.h"


class TitleDisplay
{
private:
	enum{START,GAMESTART,OPTION,EXIT,DEMOPLAY,END};						//�I�𒆃{�^������t���O
	int Title_back,TitleText;											//�^�C�g���w�i,�^�C�g���e�L�X�g
	int GameStartButton, OptionButton, ExitButton,DemoplayButton;		//�{�^��
	char key[255];														//�L�[�擾�p
	int nowButton;													//���̑I�𒆃{�^��
	bool onKeyFlag;													//�L�[�̃t���O
	int kf_count;													//�L�[�Ďn���܂ł̃J�E���g
public:
	TitleDisplay();
	void print_Title();		//���C��
	void pic_Button();		//�L�[�����ł̃{�^���I��
	
};

