#include "Include.h"

// �밡���� ǥ���
// int    n�̸�
// char   c�̸�
// bool   b�̸�	
// DWORD  dw�̸�
// short  s�̸�
// long   l�̸�
// ����ü �ɹ������� 
// int m_n�̸�
// char  m_c�̸�
// �۷ι� g_?�̸�
// int nVlaue = 0;
// void Quit();

Manager manager;

int main()
{
	InitialConsole();//�ʱ�ȭ�Լ�

	SetWindowTitle("Shooting");
	while (true)
	{

		CheckInput();
		ClearScreenEx3(BLACK);

		manager.Update();
		manager.Draw();

		Flip();
		EngineSync(30);
	}
	ReleaseConsole();
	return 0;
}
