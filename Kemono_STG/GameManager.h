#pragma once
#include "TitleDisplay.h"

class GameManager
{
private:
	enum{TITLE,OVER};						//�Q�[����ԃt���O
	char key[255];							//�{�^��
	int now_Disp = TITLE;					//���݂̉��

	//��ʃC���X�^���X
	TitleDisplay title_display;				//�^�C�g���f�B�X�v���C�C���X�^���X

public:
	GameManager();			//�R���X�g���N�^
	bool GameMain();		//���C���}�l�[�W���[
	void Disp_Change(int x);
};

