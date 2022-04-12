#include <stdio.h>
 int main() {
		const float RATE_USD = 1233.70;
		const float RATE_JPY = 9.87;
		const float RATE_EUR = 1342.46;
		const float RATE_CNY = 193.54;
		const float RATE_GBP = 1605.09;
		int exchangeChoice;
		int inputWon = 0;
		int returnWon = 0;
		int outputUSDFinal = 0;
		int outputJPYFinal = 0;
		int outputEURFinal = 0;
		int outputCNYFinal = 0;
		int outputGBPFinal = 0;
		float outputUSD = 0;
		float outputJPY = 0;
		float outputEUR = 0;
		float outputCNY = 0;
		float outputGBP = 0;
		
	while(true) {	
		printf("***************************************************\n");
		printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ���  :  ");
		scanf("%d", &inputWon);
		printf("\n� ȭ��� ȯ���ұ��? (1 ~ 5�� ����)\n");
		printf("1.USD  2.JPY  3.EUR  4.CNY  5.GBP  :  ");
		scanf("%d", &exchangeChoice);
		
		// 1. ��ȭ -> USD��. 
		if (exchangeChoice == 1) {
			outputUSD = inputWon / RATE_USD;
			outputUSDFinal = outputUSD;
			returnWon = outputUSD * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_USD / 100;
			returnWon = returnWon / 10 * 10;
			int exchangeUSD100 = outputUSDFinal / 100;
			int exchangeUSD50  = outputUSDFinal % 100 / 50;
			int exchangeUSD20  = outputUSDFinal % 50 / 20;
			int exchangeUSD10  = outputUSDFinal % 20 / 10;
			int exchangeUSD5   = outputUSDFinal % 10 / 5;
			int exchangeUSD1   = outputUSDFinal % 5;
			printf("\n%d ��\t->\t %d �޷� ȯ�� \n(100�޷� : %d��, 50�޷� : %d��, 20�޷� : %d��, 10�޷� : %d��, 5�޷� : %d��, 1�޷� : %d��)\n\n", inputWon, outputUSDFinal, 
				exchangeUSD100, exchangeUSD50, exchangeUSD20, exchangeUSD10, exchangeUSD5, exchangeUSD1);
		}
		// 2. ��ȭ -> JPY��. 
		else if (exchangeChoice == 2) {
			outputJPY = inputWon / RATE_JPY;
			outputJPYFinal = outputJPY;
			returnWon = outputJPY * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_JPY / 100;
			returnWon = returnWon / 10 * 10;
			int exchangeJPY10000 = outputJPYFinal / 10000;
			int exchangeJPY5000	 = outputJPYFinal % 10000 / 5000;
			int exchangeJPY1000	 = outputJPYFinal % 5000 / 1000;
			int exchangeJPY500	 = outputJPYFinal % 1000 / 500;
			int exchangeJPY100	 = outputJPYFinal % 500 / 100;
			int exchangeJPY50	 = outputJPYFinal % 100 / 50;
			int exchangeJPY10	 = outputJPYFinal % 50 / 10;
			int exchangeJPY5	 = outputJPYFinal % 10 / 5;
			int exchangeJPY1	 = outputJPYFinal % 5;
			printf("\n%d ��\t->\t %d �� ȯ�� \n(10000�� : %d��, 5000�� : %d��, 1000�� : %d��, 500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��, 5�� : %d��, 1�� : %d��)\n\n", inputWon, outputJPYFinal, 
				 exchangeJPY10000, exchangeJPY5000, exchangeJPY1000, exchangeJPY500, exchangeJPY100, exchangeJPY50, exchangeJPY10, exchangeJPY5, exchangeJPY1);
		}
		// 3. ��ȭ -> EUR��. 
		else if (exchangeChoice == 3) {
			outputEUR = inputWon / RATE_EUR;
			outputEURFinal = outputEUR;
			returnWon = outputEUR * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_EUR / 100;
			returnWon = returnWon / 10 * 10;
			int exchangeEUR500 = outputEURFinal / 500;
			int exchangeEUR200 = outputEURFinal % 500 / 200;
			int exchangeEUR100 = outputEURFinal % 200 / 100;
			int exchangeEUR50  = outputEURFinal % 100 / 50;
			int exchangeEUR20  = outputEURFinal % 50 / 20;
			int exchangeEUR10  = outputEURFinal % 20 / 10;
			int exchangeEUR5   = outputEURFinal % 10 / 5;
			int exchangeEUR1   = outputEURFinal % 5;
			printf("\n%d ��\t->\t %d ���� ȯ�� \n(500���� : %d��, 200���� : %d��, 100���� : %d��, 50���� : %d��, 20���� : %d��, 10���� : %d��, 5���� : %d��, 1���� : %d��)\n\n", inputWon, outputEURFinal, 
				 exchangeEUR500, exchangeEUR200, exchangeEUR100, exchangeEUR50, exchangeEUR20, exchangeEUR10, exchangeEUR5, exchangeEUR1);
		}
		// 4. ��ȭ -> CNY��. 
		else if (exchangeChoice == 4) {
			outputCNY = inputWon / RATE_CNY;
			outputCNYFinal = outputCNY;
			returnWon = outputCNY * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_CNY / 100;
			returnWon = returnWon / 10 * 10;
			int exchangeCNY50 =	outputCNYFinal / 50;
			int exchangeCNY20 =	outputCNYFinal % 50 / 20;
			int exchangeCNY10 =	outputCNYFinal % 20 / 10;
			int exchangeCNY5  =	outputCNYFinal % 10 / 5;
			int exchangeCNY1  =	outputCNYFinal % 5;

			printf("\n%d ��\t->\t %d ���� ȯ�� \n(50���� : %d��, 20���� : %d��, 10���� : %d��, 5���� : %d��, 1���� : %d��)\n\n", inputWon, outputCNYFinal, 
				 exchangeCNY50, exchangeCNY20, exchangeCNY10, exchangeCNY5, exchangeCNY1);
		}
		// 5. ��ȭ -> GBP��. 
		else if (exchangeChoice == 5) {
			outputGBP = inputWon / RATE_GBP;
			outputGBPFinal = outputGBP;
			returnWon = outputGBP * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_GBP / 100;
			returnWon = returnWon / 10 * 10;
			int exchangeGBP50 = outputGBPFinal / 50;
			int exchangeGBP20 = outputGBPFinal % 50 / 20;
			int exchangeGBP10 = outputGBPFinal % 20 / 10;
			int exchangeGBP5  = outputGBPFinal % 10 / 5;
			int exchangeGBP1  = outputGBPFinal % 5;
			printf("\n%d ��\t->\t %d �Ŀ�� ȯ�� \n(50�Ŀ�� : %d��, 20�Ŀ�� : %d��, 10�Ŀ�� : %d��, 5�Ŀ�� : %d��, 1�Ŀ�� : %d��)\n\n", inputWon, outputGBPFinal, 
				 exchangeGBP50, exchangeGBP20, exchangeGBP10, exchangeGBP5, exchangeGBP1);
		} else {
			printf("\n1���� 5���� �Է��ϼ���. �ٽ� �Է��ϼ���.\n\n");
			continue; 
		}
			int returnWon1000 = returnWon / 1000;
			int returnWon500  = returnWon % 1000 / 500;
			int returnWon100  = returnWon % 500 / 100;
			int returnWon50   = returnWon % 100 / 50;
			int returnWon10   = returnWon % 50 / 10;
			printf("�Ž�����\t->\t %d �� \n(1000�� : %d��, 500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	}
	return 0;
}

