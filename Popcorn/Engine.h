#pragma once

#include <Windows.h>

enum EKey_Type
{
	EKT_Left,
	EKT_Right,
	EKT_Space
};

void Init();
void Draw_Frame(HDC hdc);
int On_Key_Down(EKey_Type key_type);