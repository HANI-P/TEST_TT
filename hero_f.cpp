#include<iostream>

using namespace std;

struct hero
{
	
};

struct Tile // Ÿ�� ����
{
	int posX = 0;
	int posY = 0;
	int type; // 0 = ��, 1 = ��, 2= ��
	char shape; // 0 = Y, 1=E, 2=M
};

//���� �����ϴ� �Լ�
void Setmap(Tile(*map)[10]); // tile 10��¥���� ������
void PrintMap(Tile(*map)[10]); //Ÿ���� ������ִ� �Լ�

enum type {FOREST, SWAMP, EARTH}; //Ÿ�� Ÿ��
enum difficulty {EASY,NORMAL,HARD}; // ���̵�


int main()
{

}

void SetMap(Tile(*map)[10]) //Ÿ�� �Ѱ��� �����ϴ� ����
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