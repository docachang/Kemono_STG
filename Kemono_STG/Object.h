#pragma once

class Object
{
protected:
	int object_img;											//オブジェクトイメージ
	float objectx,obujecty,xend,yend;						//オブジェクトサイズ
	float hitarea_x,hitarea_y,hitarea_xend,hitarea_yend;	//
public:
	//メソッド群
	void setObjectImg(int img);		//オブジェクトイメージ登録
	//-------------------------------------------------------------
	void setx(float x);				//オブジェクト座標
	void sety(float y);
	float getx();
	float gety();
	float getx_end();				//オブジェクトサイズ取得
	float gety_end();
	//-------------------------------------------------------------
	void setx_hitarea(float x);		//オブジェクトあたり判定
	void sety_hitarea(float y);
	float getx_hitarea();
	float gety_hitarea();
	float getx_hitarea_end();		//オブジェクトあたり判定サイズ取得
	float gety_hitarea_end();
	//-------------------------------------------------------------
	void move(float x, float y);	//オブジェクト移動
	
};

