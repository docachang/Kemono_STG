#pragma once
#include "TitleDisplay.h"

class GameManager
{
private:
	enum{TITLE,OVER};						//ゲーム状態フラグ
	char key[255];							//ボタン
	int now_Disp = TITLE;					//現在の画面

	//画面インスタンス
	TitleDisplay title_display;				//タイトルディスプレイインスタンス

public:
	GameManager();			//コンストラクタ
	bool GameMain();		//メインマネージャー
	void Disp_Change(int x);
};

