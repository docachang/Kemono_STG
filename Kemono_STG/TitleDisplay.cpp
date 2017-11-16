#include "TitleDisplay.h"

TitleDisplay::TitleDisplay() {
	Title_back = LoadGraph("img/title/title_back.jpg");				//�^�C�g���w�i���[�h
	GameStartButton = LoadGraph("img/title/Button_GameStart.png");	//�Q�[���X�^�[�g�{�^��
	OptionButton = LoadGraph("img/title/Button_Option.png");		//�I�v�V�����{�^��
	ExitButton = LoadGraph("img/title/Button_Exit.png");			//Exit�{�^��
	DemoplayButton = LoadGraph("img/title/Button_DemoPlay.png");	//�f���v���C�{�^��
	TitleText = LoadGraph("img/title/title_ex.png");				//�^�C�g��
	nowButton = 1;													//�I�𒆃{�^��������
	onKeyFlag = true;												//�L�[�����t���O������
	kf_count = 0;													//�J�E���g������
}


void TitleDisplay::print_Title() {
	DrawGraph(0, 0, Title_back, TRUE);	//�^�C�g���w�i�̕`��
	DrawGraph(200,50,TitleText,true);		//�^�C�g���`��

	//----------------------------------------------------------------
	//�^�C�g���ł̃{�^���I��
	if (onKeyFlag) {
		pic_Button();//�{�^���I�����Ăяo��
	}
	//�L�[�t���O��false�̊Ԃ�pic_Button���Ăяo���Ȃ�
	if(!onKeyFlag) {
		kf_count++;
		//5�J�E���g������܂��Ăяo����悤�ɂ���
		if (kf_count>5) {
			onKeyFlag = true;
			kf_count = 0;
		}
	}
	//----------------------------------------------------------------

	//-------------------------------------------------------
	//��x���߂����S�{�^����`��
	SetDrawBlendMode(DX_BLENDMODE_ALPHA, 180);	//���ߐݒ�
	DrawGraph(600, 300, GameStartButton, TRUE);
	DrawGraph(600, 375, OptionButton, TRUE);
	DrawGraph(600, 450, ExitButton, TRUE);
	DrawGraph(600, 525, DemoplayButton, TRUE);

	//-------------------------------------------------------
	//�{�^���̓��ߔ񓧉ߏ���
	//nowButton�ɐݒ肳��Ă�����̂��񓧉ߐݒ�
	//���߃{�^���ɏ�h�肷��`
	switch (nowButton){
	case GAMESTART:
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 254);
		DrawGraph(600, 300, GameStartButton, TRUE);
		break;
	case OPTION:
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 254);
		DrawGraph(600, 375, OptionButton, TRUE);
		break;
	case EXIT:
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 254);
		DrawGraph(600, 450, ExitButton, TRUE);
		break;
	case DEMOPLAY:
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 254);
		DrawGraph(600, 525, DemoplayButton, TRUE);
		break;
	}
	//-------------------------------------------------------

}

//�^�C�g����ʂł̃L�[���͏������s�����\�b�h
void TitleDisplay::pic_Button() {

	//���������ꂽ��nowButton����i�߂�
	if (CheckHitKey(KEY_INPUT_DOWN)) {
		nowButton++;
		if (nowButton == END) {
			//�Ō�܂ŗ������߂��Č���ێ�����
			nowButton--;
		}
		onKeyFlag = false;
	}
	//�オ�����ꂽ��nowButton����߂�
	if (CheckHitKey(KEY_INPUT_UP)) {
		nowButton--;
		if (nowButton == START) {
			//��ԏ�܂ŗ������i�߂Č���ێ�����
			nowButton++;
		}
		//�A�����ĉ�����Ȃ��悤��x���̃��\�b�h���Ăяo����Ȃ��悤�ɂ��Ă���
		onKeyFlag = false;
	}
	
}
