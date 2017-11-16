#include "TitleDisplay.h"

TitleDisplay::TitleDisplay() {
	Title_back = LoadGraph("img/title/title_back.jpg");				//タイトル背景ロード
	GameStartButton = LoadGraph("img/title/Button_GameStart.png");	//ゲームスタートボタン
	OptionButton = LoadGraph("img/title/Button_Option.png");		//オプションボタン
	ExitButton = LoadGraph("img/title/Button_Exit.png");			//Exitボタン
	DemoplayButton = LoadGraph("img/title/Button_DemoPlay.png");	//デモプレイボタン
	TitleText = LoadGraph("img/title/title_ex.png");				//タイトル
	nowButton = 1;													//選択中ボタン初期化
	onKeyFlag = true;												//キー押下フラグ初期化
	kf_count = 0;													//カウント初期化
}


void TitleDisplay::print_Title() {
	DrawGraph(0, 0, Title_back, TRUE);	//タイトル背景の描画
	DrawGraph(200,50,TitleText,true);		//タイトル描画

	//----------------------------------------------------------------
	//タイトルでのボタン選択
	if (onKeyFlag) {
		pic_Button();//ボタン選択を呼び出し
	}
	//キーフラグがfalseの間はpic_Buttonを呼び出さない
	if(!onKeyFlag) {
		kf_count++;
		//5カウントしたらまた呼び出せるようにする
		if (kf_count>5) {
			onKeyFlag = true;
			kf_count = 0;
		}
	}
	//----------------------------------------------------------------

	//-------------------------------------------------------
	//一度透過した全ボタンを描画
	SetDrawBlendMode(DX_BLENDMODE_ALPHA, 180);	//透過設定
	DrawGraph(600, 300, GameStartButton, TRUE);
	DrawGraph(600, 375, OptionButton, TRUE);
	DrawGraph(600, 450, ExitButton, TRUE);
	DrawGraph(600, 525, DemoplayButton, TRUE);

	//-------------------------------------------------------
	//ボタンの透過非透過処理
	//nowButtonに設定されているものが非透過設定
	//透過ボタンに上塗りする形
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

//タイトル画面でのキー入力処理を行うメソッド
void TitleDisplay::pic_Button() {

	//下が押されたらnowButtonを一個進める
	if (CheckHitKey(KEY_INPUT_DOWN)) {
		nowButton++;
		if (nowButton == END) {
			//最後まで来たら一個戻して現状維持する
			nowButton--;
		}
		onKeyFlag = false;
	}
	//上が押されたらnowButtonを一個戻す
	if (CheckHitKey(KEY_INPUT_UP)) {
		nowButton--;
		if (nowButton == START) {
			//一番上まで来たら一個進めて現状維持する
			nowButton++;
		}
		//連続して押されないよう一度このメソッドを呼び出されないようにしておく
		onKeyFlag = false;
	}
	
}
