#pragma once
#include "Object.h"
#include "DxLib.h"


class TitleDisplay
{
private:
	enum{START,GAMESTART,OPTION,EXIT,DEMOPLAY,END};						//選択中ボタン判定フラグ
	int Title_back,TitleText;											//タイトル背景,タイトルテキスト
	int GameStartButton, OptionButton, ExitButton,DemoplayButton;		//ボタン
	char key[255];														//キー取得用
	int nowButton;													//今の選択中ボタン
	bool onKeyFlag;													//キーのフラグ
	int kf_count;													//キー再始動までのカウント
public:
	TitleDisplay();
	void print_Title();		//メイン
	void pic_Button();		//キー押下でのボタン選択
	
};

