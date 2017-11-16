#include "DxLib.h"
#include "GameManager.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	ChangeWindowMode(TRUE); // ウィンドウモードに設定
	
	//ウィンドウサイズ変更
	SetWindowSizeChangeEnableFlag(true,true);
	SetGraphMode(800, 600, 32);
	SetWindowSize(800, 600);
	

	//ゲームマネージャー呼び出し
	GameManager gm = GameManager();
	gm.GameMain();

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}