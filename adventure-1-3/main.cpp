#include "BeetleMove.h"
#include "StrCmp.h"

int main() {
	CBeetleMove *beetle;
	CStrCmp strcmp;
	string end_cond;

	do {
		beetle = new CBeetleMove;
		beetle->Run();
		delete beetle;

		// �� ũ��, ������ �� ���� �����͸�
		// ���Ϸ� �����ϴ� �ڵ� ���� �ʿ�

		//

		cout << "�����Ͻðڽ��ϱ�?(e , exit : ����) >> ";
		cin >> end_cond;
		system("cls");
	} while (!strcmp.CompareStrExit(end_cond));
}