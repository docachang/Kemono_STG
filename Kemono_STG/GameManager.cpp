#include "GameManager.h"
#include "DxLib.h"



GameManager::GameManager() {
	title_display = TitleDisplay();
}

bool  GameManager::GameMain() {

	SetDrawScreen(DX_SCREEN_BACK);
	
	//���C�����[�v
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0 && GetHitKeyStateAll(key) == 0) {

		ClearDrawScreen();// ����ʂ̃f�[�^��S�č폜

		//�G�X�P�[�v�������ꂽ��Q�[�����I������
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}

		//-----------------------------------------------------------------------------------
		//�X�C�b�`�ɂ���Ԕ���
		switch (now_Disp)
		{
		case TITLE:			//���---�^�C�g��
			title_display.print_Title();
			break;
		}
		//-----------------------------------------------------------------------------------

		ScreenFlip();// ����ʃf�[�^��\��ʂ֔��f

	}

	return true;
}


void GameManager::Disp_Change(int x) {
	now_Disp = x;
}