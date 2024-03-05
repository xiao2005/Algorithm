#include "heap.h"

bool heap::sort()
{
	int father{ (cnt - 2) / 2 };          // 找到最后一个父节点
	int cur ;
	int tmp;
	int ch;
	for(int i = father;i >= 0;i--)
	{
		tmp = i ;
		cur = arr[tmp];
		for (; 2*tmp+1 < cnt; tmp = ch) 
		{
			ch = 2 * tmp + 1;
			if (ch + 1 < cnt && (arr[ch] < arr[ch + 1])) ch += 1;  //如果有右子节点且大，调整为右子节点
			if (arr[tmp] < arr[ch])
			{
				arr[tmp] = arr[ch];
				arr[ch] = cur;
			}
			else break;
		}
	}
	return 1;
}

heap::heap(int* uin, int _cnt) :capacity{ 20 }, cnt{_cnt}
{
	while (capacity <= cnt) capacity *= 2; // 满了就扩容

	arr = new int[capacity];               // 分配空间

	arr = uin;                             // 指向uin

	sort();                                // 完成排列
}

void heap::add(int data)
{
	arr[cnt++] = data;
	int father = (cnt - 2) / 2;
	int tmp;
	int cur = cnt - 1 ;
	while(arr[cur] > arr[father] && cur >= 1)
	{
		tmp = arr[cur];
		arr[cur] = arr[father];
		arr[father] = tmp;
		cur = father;
		father = (cur - 1) / 2;
	}
}

int heap::getcnt() const
{
	return cnt;
}
