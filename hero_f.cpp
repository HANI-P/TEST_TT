#include<iostream>

using namespace std;

struct hero
{
	
};

struct Tile // 타일 정보
{
	int posX = 0;
	int posY = 0;
	int type; // 0 = 숲, 1 = 늪, 2= 땅
	char shape; // 0 = Y, 1=E, 2=M
};

//맵을 세팅하는 함수
void Setmap(Tile(*map)[10]); // tile 10개짜리의 포인터
void PrintMap(Tile(*map)[10]); //타일을 출력해주는 함수

enum type {FOREST, SWAMP, EARTH}; //타일 타입
enum difficulty {EASY,NORMAL,HARD}; // 난이도


int main()
{

}

void SetMap(Tile(*map)[10]) //타일 한개를 세팅하는 과정
{
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			map[j][i].posX = 0;
			map[j][i].posY = 0;
			map[j][i].type = (Tile.type) rand() % 3;

			switch (map[j][i].type)
			{
			case FOREST:map[j][i].shape = 'Y';
				break;
			case SWAMP:[j][i].shape = 'E';
				break;
			case EARTH:map[j][i].shape = 'M';
				break;
			}
		}
	}
}

void PrintMap(Tile(*map)[10])
{

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << map[j][i].shape;
		}
	} cout << endl;
}