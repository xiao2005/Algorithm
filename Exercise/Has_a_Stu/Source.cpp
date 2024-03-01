// 这是练习类的嵌套和 valarry类,成员初始化列表的初始化顺序

#include "student.h"

int main()
{
	std::valarray<double> test{23,12.2,32.3};
	student A("东方不败",test);

	A.Show();
	std::cout << A << std::endl;
	std::cout << "输入你想改的名:" << std::endl;
	std::cin >> A;
	std::cout << "改名成功!\n";
	std::cout << A << std::endl;
	int val{};
	while(std::cin >> val)
	{
		
		std::cout << A << "的第[" << val << "]门成绩为:" << A[val-1] << std::endl;
	}
}