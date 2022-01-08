#pragma once

#include "pch.h"

class CBeetleMove {
public:
	CBeetleMove();
	~CBeetleMove();

	void Run();

private:
	int _BeetleCnt = 0;
	BYTE _Runtime = 0;
	bool _ShowMove = false;
	LLINT _Row = 0, _Passed = 0;
	int _Tick = 0;
	vector<BEETLE> _Beetle;
	double *_TimeStamp = nullptr;
	BYTE **_Map = nullptr;

protected:
	void (CBeetleMove::*BeetleLoc)(vector<BEETLE>::iterator iter, int row, int col);
	void (CBeetleMove::*Walk)(BEETLE &beetle, int movement);

	void ShowInfo();

	void SetMap();
	void SetMapSize();
	void InitMap();

	void SetBeetle();
	void SetBeetleCnt();
	void InitBeetles();
	void BeetleLocUniform(vector<BEETLE>::iterator iter, int row, int col);
	void BeetleLocComb(vector<BEETLE>::iterator iter, int row, int col);

	void SetMovement();
	void BeetleWalk(BEETLE &beetle, int movement);
	void BeetleWallWalk(BEETLE &beetle, int movement);

	void BeetleRun();
	void InitBeetlesLoc();
	LLINT BeetleMove(system_clock::time_point start_time, int loop);
	LLINT ShowMap(system_clock::time_point start_time, int loop);
	LLINT CalcTick(system_clock::time_point start, bool *flag);
	void ClearMap();

	void SetShowMovement();

	void PrintTimeStamp();

	bool CompareStr(string str);
	bool CompareStrT(string str);
	bool CompareStrF(string str);

	void IsBeetlePassed(BEETLE beetle);
};

