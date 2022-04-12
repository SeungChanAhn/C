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
		printf("환전을 원하는 원화 금액을 입력하세요  :  ");
		scanf("%d", &inputWon);
		printf("\n어떤 화폐로 환전할까요? (1 ~ 5번 선택)\n");
		printf("1.USD  2.JPY  3.EUR  4.CNY  5.GBP  :  ");
		scanf("%d", &exchangeChoice);
		
		// 1. 원화 -> USD로. 
		if (exchangeChoice == 1) {
			output = inputWon / RATE_USD;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_USD / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d 원\t->\t %d 달러 환전 \n(100달러 : %d개, 50달러 : %d개, 20달러 : %d개, 10달러 : %d개, 5달러 : %d개, 1달러 : %d개)\n\n", inputWon, outputFinal, exchange100, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		}
		// 2. 원화 -> JPY로. 
		else if (exchangeChoice == 2) {
			output = inputWon / RATE_JPY;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_JPY / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d 원\t->\t %d 엔 환전 \n(10000엔 : %d개, 5000엔 : %d개, 1000엔 : %d개, 500엔 : %d개, 100엔 : %d개, 50엔 : %d개, 10엔 : %d개, 5엔 : %d개, 1엔 : %d개)\n\n", inputWon, outputFinal, exchange10000, exchange5000, exchange1000, exchange500, exchange100, exchange50, exchange10, exchange5, exchange1);
		}
		// 3. 원화 -> EUR로. 
		else if (exchangeChoice == 3) {
			output = inputWon / RATE_EUR;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_EUR / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d 원\t->\t %d 유로 환전 \n(500유로 : %d개, 200유로 : %d개, 100유로 : %d개, 50유로 : %d개, 20유로 : %d개, 10유로 : %d개, 5유로 : %d개, 1유로 : %d개)\n\n", inputWon, outputFinal, exchange500, exchange200, exchange200_100, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		}
		// 4. 원화 -> CNY로. 
		else if (exchangeChoice == 4) {
			output = inputWon / RATE_CNY;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_CNY / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d 원\t->\t %d 위안 환전 \n(50위안 : %d개, 20위안 : %d개, 10위안 : %d개, 5위안 : %d개, 1위안 : %d개)\n\n", inputWon, outputFinal, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		}
		// 5. 원화 -> GBP로. 
		else if (exchangeChoice == 5) {
			output = inputWon / RATE_GBP;
			outputFinal = output;
			returnWon = output * 100;
			returnWon = returnWon % 100;
			returnWon = returnWon * RATE_GBP / 100;
			returnWon = returnWon / 10 * 10;
			printf("\n%d 원\t->\t %d 파운드 환전 \n(50파운드 : %d개, 20파운드 : %d개, 10파운드 : %d개, 5파운드 : %d개, 1파운드 : %d개)\n\n", inputWon, outputFinal, exchange50, exchange20, exchange20_10, exchange5, exchange1);
		} else {
			printf("\n1부터 5까지 입력하세요. 다시 입력하세요.\n\n");
			continue; 
		}
			int returnWon1000 = returnWon / 1000;
			int returnWon500  = returnWon % 1000 / 500;
			int returnWon100  = returnWon % 500 / 100;
			int returnWon50   = returnWon % 100 / 50;
			int returnWon10   = returnWon % 50 / 10;
			printf("거스름돈\t->\t %d 원 \n(1000원 : %d개, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	}
	return 0;
}
