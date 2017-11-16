#include "DxLib.h"
#include "GameManager.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}
	ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ɐݒ�
	
	//�E�B���h�E�T�C�Y�ύX
	SetWindowSizeChangeEnableFlag(true,true);
	SetGraphMode(800, 600, 32);
	SetWindowSize(800, 600);
	

	//�Q�[���}�l�[�W���[�Ăяo��
	GameManager gm = GameManager();
	gm.GameMain();

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}