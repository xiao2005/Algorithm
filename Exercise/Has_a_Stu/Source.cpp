// ������ϰ���Ƕ�׺� valarry��,��Ա��ʼ���б�ĳ�ʼ��˳��

#include "student.h"

int main()
{
	std::valarray<double> test{23,12.2,32.3};
	student A("��������",test);

	A.Show();
	std::cout << A << std::endl;
	std::cout << "��������ĵ���:" << std::endl;
	std::cin >> A;
	std::cout << "�����ɹ�!\n";
	std::cout << A << std::endl;
	int val{};
	while(std::cin >> val)
	{
		
		std::cout << A << "�ĵ�[" << val << "]�ųɼ�Ϊ:" << A[val-1] << std::endl;
	}
}