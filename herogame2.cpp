
#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;

struct hero //용사 정보
{
	string name = "";
	int hp = 0;
	int maxHP = 0;
	int level = 0;
	int gold = 0;
	int playerX = 0;
	int playerY = 0;
	char input = ' ';
	int inventori = 0;
};

struct monster //몬스터 정보
{
	string mName = "";
	int mHp = 0;
};

struct diffi //난이도
{
	int difficult = 0;
};

enum monsu
{
	MONSU_01 = 2,
	MONSU_02 = 4
};

//int maind()
//{
//	hero Hname;
//	diffi difficultly;
//	hero Hgold;
//	Hgold.gold = rand() % 99 + 1;
//	int abc=0; // 유저의 가위바위보값 입력받기 위해
//	int monsterabc = rand() % 3 + 1;//몬스터 가위바위보 시킬려구
//	srand(time(NULL));
//
//	cout << "영웅의 이름을 입력해주세요 : ";
//	cin >> Hname.name;
//	cout << endl;
//	cout << Hname.name << "용사님, 어서 오세요" << endl;
//	cout << "난이도를 입력해주세요 1.쉬움 2. 어려움 : ";
//	cin >> difficultly.difficult;
//	cout << endl;
//
//	hero hHp;
//
//	while (true)
//	{
//		if (difficultly.difficult == 1)//난이도 입력
//		{
//			cout << "쉬움을 선택하셨습니다. " << endl;
//			cout << "기본 체력이 100부터 시작하며 나타나는 몬스터 수는 2마리입니다. " << endl;
//			hHp.hp = 100;
//			system("PAUSE");
//			break;
//		}
//		if (difficultly.difficult == 2)
//		{
//			cout << "어려운 길을 선택하셨습니다." << endl;
//			cout << "기본 체력이 30부터 시작하며 나타나는 몬스터 수는 4마리입니다. " << endl;
//			hHp.hp = 30;
//			system("PAUSE");
//			break;
//		}
//		else
//			cout << "잘못 입력하셨습니다. 다시 입력하세요";
//		continue;
//	}
//	
//	char map[10][10]; //맵 데이터 저장
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "#";
//		}
//		cout << endl;
//	}
//
//	hero PlayerPosY, PlayerPosX;
//	map[PlayerPosY.playerY][PlayerPosX.playerX] = 'O'; //플레이어의 움직임
//
//	int mopX = 0;
//	int mopY = 0;
//
//	map[mopY][mopX] = 'X'; // 몬스터의 움직임
//	mopX = rand() % 9 + 1;
//	mopY = rand() % 9 + 1;
//
//	hero HInput;
//
//	while (true)
//	{
//		system("cls"); // 화면 지워주기
//
//		for (int i = 0; i < 10; i++)//y축
//		{
//			for (int j = 0; j < 10; j++)//x축
//			{
//				cout << map[i][j];
//			}
//			cout << endl;
//		}
//		cout << "이동하려면 W:위 A:왼쪽 D:오른쪽 S:아래 키를 입력해주세요 ";
//
//		char inputWay;
//		cin >> inputWay;
//
//			switch (inputWay) // 키로 이동이 안됨
//			{
//			case 'W': case'w':
//				PlayerPosY.playerY--;
//				if (PlayerPosY.playerY > 0)
//				break;
//			case 'S': case's':
//				PlayerPosY.playerY++;
//				if (PlayerPosY.playerY > 9)
//				break;
//			case 'A': case'a':
//				PlayerPosX.playerX--;
//				if (PlayerPosX.playerX > 0)
//				break;
//			case 'D': case'd':
//				PlayerPosX.playerX++;
//				if (PlayerPosX.playerX > 9)
//				break;
//			}
//
//		if (map[PlayerPosY.playerY][PlayerPosX.playerX] == map[mopY][mopX])
//		{
//			cout << "몬스터를 만났습니다.";
//			cout << endl;
//			cout << "가위바위보를 시작합니다. 1.가위 2.바위 3.보 중 하나를 입력해주세요 : ";
//			cin >> abc;
//			cout << endl;
//			cout << "입력한 값은 " << abc << "입니다." << endl;
//
//			while (1) 
//			{
//				if (abc == monsterabc)
//				{
//					cout << "비겼습니다. 다시 입력해주세요. 1.가위 2.바위. 3.보 : ";
//				}
//				else if ((abc - monsterabc) == 1 || (abc - monsterabc) == -2)
//				{
//					cout << "이겼습니다 !" << endl;
//					cout << "돈" << Hgold.gold << "을 얻었습니다 !";
//					+ Hgold.gold;
//
//				}
//				else if ((abc - monsterabc) == -1 || (abc - monsterabc) == 2)
//				{
//					cout << "졌습니다. . ." << endl;
//					hHp.hp - 10;
//				}
//				else
//					cout << "잘못 입력했습니다. 다시 입력해주세요.";
//				continue;
//			}
//			
//		}
//		if (hHp.hp == 0)
//			cout << "체력이 0이 되어 게임을 종료하겠습니다.";
//		break;
//	}
//
//
//
//}