 #include <stdio.h>
 
 int main() {
 	const float RATE_USD = 1233.70;
 	const float RATE_JPY = 9.87;
 	const float RATE_EUR = 1342.46;
 	const float RATE_CNY = 193.54;
 	const float RATE_GBP = 1605.09;

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
 	 	



 	
 	printf("환전을 원하는 원화 금액을 입력하세요  :  ");
 	scanf("%d", &inputWon);
 	
 	// 원화 -> USD로. 
	outputUSD = inputWon / RATE_USD;
	outputUSDFinal = outputUSD;
	returnWon = outputUSD * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_USD / 100;
	returnWon = returnWon / 10 * 10;
 	int exchangeUSD100 = outputUSDFinal/100;
	int exchangeUSD50 = outputUSDFinal%100/50;
	int exchangeUSD10 = outputUSDFinal%100%50/10;
	int exchangeUSD5 = outputUSDFinal%10/5;
	int exchangeUSD1 = outputUSDFinal%10%5;
	
	int returnWon1000 = returnWon/1000;
	int returnWon500 = returnWon%1000/500;
	int returnWon100 = returnWon%1000%500/100;
	int returnWon50 = returnWon%100/50;
	int returnWon10 = returnWon%100%50/10;
	
	printf("%d 원  ->  %d 달러 환전 (100달러 : %d장, 50달러 : %d장, 10달러 : %d장, 5달러 : %d장, 1달러 : %d장)\n", inputWon, outputUSDFinal, exchangeUSD100, exchangeUSD50, exchangeUSD10, exchangeUSD5, exchangeUSD1);
 	printf("%d 원 거스름돈 -> 1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개 \n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
 	
	// 원화 -> JPY로. 
	outputJPY = inputWon / RATE_JPY;
	outputJPYFinal = outputJPY;
	returnWon = outputJPY * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_JPY / 100;
	returnWon = returnWon / 10 * 10;
	int exchangeJPY10000 = outputJPYFinal/10000;
	int exchangeJPY5000 = outputJPYFinal%10000/5000;
	int exchangeJPY1000 = outputJPYFinal%10000%5000/1000;
	int exchangeJPY500 = outputJPYFinal%1000/500;
	int exchangeJPY100 = outputJPYFinal%1000%500/100;
	int exchangeJPY50 = outputJPYFinal%100/50;
	int exchangeJPY10 = outputJPYFinal%100%50/10;
	int exchangeJPY5 = outputJPYFinal%10/5;
	int exchangeJPY1 = outputJPYFinal%10%5;
	
 	printf("%d 원  ->  %d 엔화 환전 (10000엔 : %d장, 5000엔 : %d장, 1000엔 : %d장, 500엔 : %d개, 100엔 : %d개, 50엔 : %d개, 10엔 : %d개, 5엔 : %d개, 1엔 : %d개)\n", inputWon, outputJPYFinal, exchangeJPY10000, exchangeJPY5000, exchangeJPY1000, exchangeJPY500, exchangeJPY100, exchangeJPY50, exchangeJPY10, exchangeJPY5, exchangeJPY1);
 	printf("%d 원 거스름돈 -> 1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개 \n\n", returnWon, returnWon/1000, returnWon%1000/500, (returnWon%1000%500)/100, returnWon%100/50, (returnWon%100%50)/10);
 	 	
	// 원화 -> EUR로. 
	outputEUR = inputWon / RATE_EUR;
	outputEURFinal = outputEUR;
	returnWon = outputEUR * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100;
	returnWon = returnWon / 10 * 10;
	
 	printf("%d 원  ->  %d 유로 환전 (500유로 : %d장, 200유로 : %d장, 100유로 : %d장, 50유로 : %d장, 20유로 : %d장, 10유로 : %d장, 5유로 : %d장, 1유로 : %d개)\n", inputWon, outputEURFinal, 
	 outputEURFinal/500, (outputEURFinal%500)/200, (outputEURFinal%500%200)/100, outputEURFinal%100/50, (outputEURFinal%100%50)/20, (outputEURFinal%100%50%20)/10, outputEURFinal%10/5, (outputEURFinal%10%5));
 	printf("%d 원 거스름돈 -> 1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개 \n\n", returnWon, returnWon/1000, returnWon%1000/500, (returnWon%1000%500)/100, returnWon%100/50, (returnWon%100%50)/10);
 	 	
	// 원화 -> CNY로. 
	outputCNY = inputWon / RATE_CNY;
	outputCNYFinal = outputCNY;
	returnWon = outputCNY * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
 
 	printf("%d 원  ->  %d 위안화 환전 (50위안 : %d장, 20위안 : %d장, 10위안 : %d장, 5위안 : %d장, 1위안 : %d장)\n", inputWon, outputCNYFinal, outputCNYFinal/50, (outputCNYFinal%100%50)/20, (outputCNYFinal%100%50%20)/10, outputCNYFinal%10/5, (outputCNYFinal%10%5));
 	printf("%d 원 거스름돈 -> 1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개 \n\n", returnWon, returnWon/1000, returnWon%1000/500, (returnWon%1000%500)/100, returnWon%100/50, (returnWon%100%50)/10);
 	 	 	
	// 원화 -> GBP로. 
	outputGBP = inputWon / RATE_GBP;
	outputGBPFinal = outputGBP;
	returnWon = outputGBP * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
 	printf("%d 원  ->  %d 파운드 환전 (50파운드 : %d장, 20파운드 : %d장, 10파운드 : %d장, 5파운드 : %d장, 1파운드 : %d장)\n", inputWon, outputGBPFinal, outputGBPFinal/50, (outputGBPFinal%100%50)/20, (outputGBPFinal%100%50%20)/10, outputGBPFinal%10/5, (outputGBPFinal%10%5));
 	printf("%d 원 거스름돈 -> 1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개 \n\n", returnWon, returnWon/1000, returnWon%1000/500, (returnWon%1000%500)/100, returnWon%100/50, (returnWon%100%50)/10);
 	return 0;
 } 
