#include "Hero.h"

Hero::Hero()
{
}

Hero::Hero(string name, int lv, int hp, int att, int def,
	int posx, int posy, int offSetX, int offSetY, int exp, int money, int key) {
	m_name = name;
	m_lv = lv;
	m_hp = hp;
	m_att = att;
	m_def = def;
	m_posx = posx;
	m_posy = posy;
	m_offSetX = offSetX;
	m_offSetY = offSetY;
	m_exp = exp;
	m_money = money;
	m_key = key;
}


Hero::~Hero()
{
}

/*
	��ӡӢ������
*/
void Hero::PrintHero()
{
	util->Color(13);
	util->Gotoxy(10, 2);
	cout << "Ӣ��������" << m_name << endl;
	util->Gotoxy(10, 4);
	cout << "Ӣ�۵ȼ���" << m_lv << endl;
	util->Gotoxy(10, 6);
	cout << "Ӣ�۹�����" << m_att << endl;
	util->Gotoxy(10, 8);
	cout << "Ӣ�۷�����" << m_def << endl;
	util->Gotoxy(10, 10);
	cout << "Ӣ��Ѫ����" << m_hp << endl;
	util->Gotoxy(10, 12);
	cout << "Ӣ�۾��飺" << m_exp << endl;
	util->Gotoxy(10, 14);
	cout << "����Կ�ף�" << m_key << endl;
	util->Gotoxy(10, 16);
	cout << "������ң�" << m_money << endl;

	util->Gotoxy(60, 2);
	cout << "ս����Ϣ";
	util->Gotoxy(53, 4);
	cout << "��ɫ";
	util->Gotoxy(59, 4);
	cout << "Ѫ��";
	util->Gotoxy(65, 4);
	cout << "����";
	util->Gotoxy(71, 4);
	cout << "����";
}


/*
	����
*/
void Hero::LvUp(int Exp)
{
	m_exp += Exp;
	while (m_exp >= m_lv * 10)// �жϾ����Ƿ��㹻����
	{
		m_exp -= m_lv * 10;
		++m_lv;
		m_hp = m_lv * 100;
		//Ӣ�۵�������������:
	}
}
