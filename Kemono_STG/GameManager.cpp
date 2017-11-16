#include "GameManager.h"
#include "DxLib.h"



GameManager::GameManager() {
	title_display = TitleDisplay();
}

bool  GameManager::GameMain() {

	SetDrawScreen(DX_SCREEN_BACK);
	
	//メインループ
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0 && GetHitKeyStateAll(key) == 0) {

		ClearDrawScreen();// 裏画面のデータを全て削除

		//エスケープが押されたらゲームを終了する
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}

		//-----------------------------------------------------------------------------------
		//スイッチによる状態判定
		switch (now_Disp)
		{
		case TITLE:			//状態---タイトル
			title_display.print_Title();
			break;
		}
		//-----------------------------------------------------------------------------------

		ScreenFlip();// 裏画面データを表画面へ反映

	}

	return true;
}


void GameManager::Disp_Change(int x) {
	now_Disp = x;
}