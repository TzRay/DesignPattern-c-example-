#include "CashContext.h"  
#include <iostream>  
#include <cstdlib>  

void main()
{
	double total = 0;
	double totalPrices = 0;

	//�����շ�  
	CashContext* cc1 = NULL;
	cc1 = new CashContext(1);
	totalPrices = cc1->GetResult(300);
	total += totalPrices;
	std::cout << "Type:�����շ�  totalPrices:" << totalPrices << "  total:" << total << std::endl;
	totalPrices = 0;

	//��������  
	CashContext* cc2 = NULL;
	cc2 = new CashContext(2);
	totalPrices = cc2->GetResult(700);
	total += totalPrices;
	std::cout << "Type:��300��100  totalPrices:" << totalPrices << "  total:" << total << std::endl;
	totalPrices = 0;

	//��������  
	CashContext* cc3 = NULL;
	cc3 = new CashContext(3);
	totalPrices = cc3->GetResult(300);
	total += totalPrices;
	std::cout << "Type:��8��  totalPrices:" << totalPrices << "  total:" << total << std::endl;
	totalPrices = 0;

	if (cc1 != NULL)
	{
		delete cc1;
		cc1 = NULL;
	}
	if (cc2 != NULL)
	{
		delete cc2;
		cc2 = NULL;
	}
	if (cc3 != NULL)
	{
		delete cc3;
		cc3 = NULL;
	}
	system("pause");
}