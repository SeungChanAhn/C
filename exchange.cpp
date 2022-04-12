 #include <stdio.h>
 
 int main() {
 	while(true) {
	const float RATE_USD = 1233.70;
 	const float RATE_JPY = 9.87;
 	const float RATE_EUR = 1342.46;
 	const float RATE_CNY = 193.54;
 	const float RATE_GBP = 1605.09;
 	
	int exchoice;
	
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
 	
 	int returnWon1000 = returnWon/1000;
	int returnWon500 = returnWon%1000/500;
	int returnWon100 = returnWon%1000%500/100;
	int returnWon50 = returnWon%100/50;
	int returnWon10 = returnWon%100%50/10;
 	
 	printf("환전을 원하는 원화 금액을 입력하세요  :  ");
 	scanf("%d", &inputWon);
 	printf("1. USD, 2. JPY, 3. EUR, 4. CNY, 5. GBP  :  ");
 	scanf("%d", &exchoice);
 	
 	// 원화 -> USD로. 
	if (exchoice == 1) {
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
 	returnWon1000 = returnWon/1000;
	returnWon500 = returnWon%1000/500;
	returnWon100 = returnWon%1000%500/100;
	returnWon50 = returnWon%100/50;
	returnWon10 = returnWon%100%50/10;
	
	printf("\n%d 원\t->\t %d 달러 환전 \n(100달러 : %d장, 50달러 : %d장, 10달러 : %d장, 5달러 : %d장, 1달러 : %d장)\n\n", inputWon, outputUSDFinal, 
	exchangeUSD100, exchangeUSD50, exchangeUSD10, exchangeUSD5, exchangeUSD1);
 	printf("거스름돈\t->\t %d 원 \n(1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
 }
	// 원화 -> JPY로. 
	else if (exchoice == 2) {
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
	returnWon1000 = returnWon/1000;
	returnWon500 = returnWon%1000/500;
	returnWon100 = returnWon%1000%500/100;
	returnWon50 = returnWon%100/50;
	returnWon10 = returnWon%100%50/10;

 	printf("\n%d 원\t->\t %d 엔 환전 \n(10000엔 : %d장, 5000엔 : %d장, 1000엔 : %d장, 500엔 : %d개, 100엔 : %d개, 50엔 : %d개, 10엔 : %d개, 5엔 : %d개, 1엔 : %d개)\n\n", inputWon, outputJPYFinal, 
	 exchangeJPY10000, exchangeJPY5000, exchangeJPY1000, exchangeJPY500, exchangeJPY100, exchangeJPY50, exchangeJPY10, exchangeJPY5, exchangeJPY1);
 	printf("거스름돈\t->\t %d 원 \n(1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
}
	// 원화 -> EUR로. 
	else if (exchoice == 3) {
	outputEUR = inputWon / RATE_EUR;
	outputEURFinal = outputEUR;
	returnWon = outputEUR * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100;
	returnWon = returnWon / 10 * 10;
	int exchangeEUR500 = outputEURFinal/500;
	int exchangeEUR200 = outputEURFinal%500/200;
	int exchangeEUR100 = outputEURFinal%500%200/100;
	int exchangeEUR50 = outputEURFinal%100/50;
	int exchangeEUR20 = outputEURFinal%100%50/20;
	int exchangeEUR10 = outputEURFinal%100%50%20/10;
	int exchangeEUR5 = outputEURFinal%10/5;
	int exchangeEUR1 =outputEURFinal%10%5;
	returnWon1000 = returnWon/1000;
	returnWon500 = returnWon%1000/500;
	returnWon100 = returnWon%1000%500/100;
	returnWon50 = returnWon%100/50;
	returnWon10 = returnWon%100%50/10;

 	printf("\n%d 원\t->\t %d 유로 환전 \n(500유로 : %d장, 200유로 : %d장, 100유로 : %d장, 50유로 : %d장, 20유로 : %d장, 10유로 : %d장, 5유로 : %d장, 1유로 : %d개)\n\n", inputWon, outputEURFinal, 
	 exchangeEUR500, exchangeEUR200, exchangeEUR100, exchangeEUR50, exchangeEUR20, exchangeEUR10, exchangeEUR5, exchangeEUR1);
 	printf("거스름돈\t->\t %d 원 \n(1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
}
	// 원화 -> CNY로. 
	else if (exchoice == 4) {
	outputCNY = inputWon / RATE_CNY;
	outputCNYFinal = outputCNY;
	returnWon = outputCNY * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
	int exchangeCNY50 = outputCNYFinal/50;
	int exchangeCNY20 = outputCNYFinal%100%50/20;
	int exchangeCNY10 = outputCNYFinal%100%50%20/10;
	int exchangeCNY5 = outputCNYFinal%10/5;
	int exchangeCNY1 = outputCNYFinal%10%5;
	returnWon1000 = returnWon/1000;
	returnWon500 = returnWon%1000/500;
	returnWon100 = returnWon%1000%500/100;
	returnWon50 = returnWon%100/50;
	returnWon10 = returnWon%100%50/10;

 	printf("\n%d 원\t->\t %d 위안 환전 \n(50위안 : %d장, 20위안 : %d장, 10위안 : %d장, 5위안 : %d장, 1위안 : %d장)\n\n", inputWon, outputCNYFinal, 
	 exchangeCNY50, exchangeCNY20, exchangeCNY10, exchangeCNY5, exchangeCNY1);
 	printf("거스름돈\t->\t %d 원 \n(1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
  }
	// 원화 -> GBP로. 
	else if (exchoice == 5) {
	outputGBP = inputWon / RATE_GBP;
	outputGBPFinal = outputGBP;
	returnWon = outputGBP * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_GBP / 100;
	returnWon = returnWon / 10 * 10;
	int exchangeGBP50 = outputGBPFinal/50;
	int exchangeGBP20 = outputGBPFinal%100%50/20;
	int exchangeGBP10 = outputGBPFinal%100%50%20/10;
	int exchangeGBP5 = outputGBPFinal%10/5;
	int exchangeGBP1 = outputGBPFinal%10%5;
	returnWon1000 = returnWon/1000;
	returnWon500 = returnWon%1000/500;
	returnWon100 = returnWon%1000%500/100;
	returnWon50 = returnWon%100/50;
	returnWon10 = returnWon%100%50/10;

 	printf("\n%d 원\t->\t %d 파운드 환전 \n(50파운드 : %d장, 20파운드 : %d장, 10파운드 : %d장, 5파운드 : %d장, 1파운드 : %d장)\n\n", inputWon, outputGBPFinal, 
	 exchangeGBP50, exchangeGBP20, exchangeGBP10, exchangeGBP5, exchangeGBP1);
 	printf("거스름돈\t->\t %d 원 \n(1000원 : %d장, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
   return 0;
  }
  else {
  	printf("※※※1부터 5까지의 숫자만 입력하세요! ※※※\n\n");
  } 
 }
}
