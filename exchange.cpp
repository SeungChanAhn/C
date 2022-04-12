#include <stdio.h>
 int main() {
		const float RATE_USD = 1233.70;
		const float RATE_JPY = 9.87;
		const float RATE_EUR = 1342.46;
		const float RATE_CNY = 193.54;
		const float RATE_GBP = 1605.09;
		int exchangeChoice;
		float output = 0;
		int outputFinal = 0;
		int inputWon = 0;
		int returnWon = 0;
		int exchange10000= outputFinal / 10000;
		int exchange5000= outputFinal % 10000 / 5000;
		int exchange1000= outputFinal % 5000 / 1000;
		int exchange500= outputFinal % 1000 / 500;
		int exchange200= outputFinal % 1000 / 500;
		int exchange200_100= outputFinal % 200 / 100;
		int exchange100= outputFinal % 500 / 100;
		int exchange50= outputFinal % 100 / 50;
		int exchange20= outputFinal % 50 / 20;
		int exchange20_10= outputFinal % 20 / 10;
		int exchange10= outputFinal % 50 / 10;
		int exchange5= outputFinal % 10 / 5;
		int exchange1= outputFinal % 5;
		
	while(true) {	
		printf("***************************************************\n");
		printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ���  :  ");
		scanf("%d", &inputWon);
		printf("\n� ȭ��� ȯ���ұ��? (1 ~ 5�� ����)\n");
		printf("1.USD  2.JPY  3.EUR  4.CNY  5.GBP  :  ");
		scanf("%d", &exchangeChoice);
		
		// 1. ��ȭ -> USD��. 
		if (exchangeChoice == 1) {
			output = inputWon / RATE_USD;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_USD / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d ��\t->\t %d �޷� ȯ�� \n(100�޷� : %d��, 50�޷� : %d��, 20�޷� : %d��, 10�޷� : %d��, 5�޷� : %d��, 1�޷� : %d��)\n\n", inputWon, outputFinal, exchange100, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		}
		// 2. ��ȭ -> JPY��. 
		else if (exchangeChoice == 2) {
			output = inputWon / RATE_JPY;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_JPY / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d ��\t->\t %d �� ȯ�� \n(10000�� : %d��, 5000�� : %d��, 1000�� : %d��, 500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��, 5�� : %d��, 1�� : %d��)\n\n", inputWon, outputFinal, exchange10000, exchange5000, exchange1000, exchange500, exchange100, exchange50, exchange10, exchange5, exchange1);
		}
		// 3. ��ȭ -> EUR��. 
		else if (exchangeChoice == 3) {
			output = inputWon / RATE_EUR;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_EUR / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d ��\t->\t %d ���� ȯ�� \n(500���� : %d��, 200���� : %d��, 100���� : %d��, 50���� : %d��, 20���� : %d��, 10���� : %d��, 5���� : %d��, 1���� : %d��)\n\n", inputWon, outputFinal, exchange500, exchange200, exchange200_100, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		}
		// 4. ��ȭ -> CNY��. 
		else if (exchangeChoice == 4) {
			output = inputWon / RATE_CNY;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_CNY / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d ��\t->\t %d ���� ȯ�� \n(50���� : %d��, 20���� : %d��, 10���� : %d��, 5���� : %d��, 1���� : %d��)\n\n", inputWon, outputFinal, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		}
		// 5. ��ȭ -> GBP��. 
		else if (exchangeChoice == 5) {
			output = inputWon / RATE_GBP;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_GBP / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d ��\t->\t %d �Ŀ�� ȯ�� \n(50�Ŀ�� : %d��, 20�Ŀ�� : %d��, 10�Ŀ�� : %d��, 5�Ŀ�� : %d��, 1�Ŀ�� : %d��)\n\n", inputWon, outputFinal, exchange50, exchange20, exchange20_10, exchange5, exchange1);
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
