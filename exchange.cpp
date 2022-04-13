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
    int outputFinal = 0;
    float output = 0;
    float changeRate = 0;
    
	while(true) {
    printf("***************************************************\n");
    printf("환전을 원하는 원화 금액을 입력하세요  :  ");
    scanf("%d", & inputWon);
    printf("\n어떤 화폐로 환전할까요? (1 ~ 5번 선택)\n");
    printf("1.USD  2.JPY  3.EUR  4.CNY  5.GBP  :  ");
    scanf("%d", & exchangeChoice);

    switch (exchangeChoice) {
        case 1: 
            changeRate = RATE_USD;
            break;
        case 2:
            changeRate = RATE_JPY;
            break;
        case 3:
            changeRate = RATE_EUR;
            break;
        case 4:
            changeRate = RATE_CNY;
            break;
        case 5:
            changeRate = RATE_GBP;
            break;
        default:
            printf("다시 입력하세요\n\n");
            break;
    }
    output = inputWon / changeRate;
    outputFinal = output;
    returnWon = output * 100;
    returnWon = returnWon % 100;
    returnWon = returnWon * changeRate / 100;
    returnWon = returnWon / 10 * 10;

    switch (exchangeChoice) {
        case 1: {
            int exchangeUSD100 = outputFinal / 100;
            int exchangeUSD50 = outputFinal % 100 / 50;
            int exchangeUSD20 = outputFinal % 50 / 20;
            int exchangeUSD10 = outputFinal % 20 / 10;
            int exchangeUSD5 = outputFinal % 10 / 5;
            int exchangeUSD1 = outputFinal % 5;
            printf("\n%d 원\t->\t %d 달러 환전 \n(100달러 : %d개, 50달러 : %d개, 20달러 : %d개, 10달러 : %d개, 5달러 : %d개, 1달러 : %d개)\n\n", inputWon, outputFinal,
                exchangeUSD100, exchangeUSD50, exchangeUSD20, exchangeUSD10, exchangeUSD5, exchangeUSD1);
            break;
        }
        case 2: {
            int exchangeJPY10000 = outputFinal / 10000;
            int exchangeJPY5000 = outputFinal % 10000 / 5000;
            int exchangeJPY1000 = outputFinal % 5000 / 1000;
            int exchangeJPY500 = outputFinal % 1000 / 500;
            int exchangeJPY100 = outputFinal % 500 / 100;
            int exchangeJPY50 = outputFinal % 100 / 50;
            int exchangeJPY10 = outputFinal % 50 / 10;
            int exchangeJPY5 = outputFinal % 10 / 5;
            int exchangeJPY1 = outputFinal % 5;
            printf("\n%d 원\t->\t %d 엔 환전 \n(10000엔 : %d개, 5000엔 : %d개, 1000엔 : %d개, 500엔 : %d개, 100엔 : %d개, 50엔 : %d개, 10엔 : %d개, 5엔 : %d개, 1엔 : %d개)\n\n", inputWon, outputFinal,
                exchangeJPY10000, exchangeJPY5000, exchangeJPY1000, exchangeJPY500, exchangeJPY100, exchangeJPY50, exchangeJPY10, exchangeJPY5, exchangeJPY1);
            break;
        }
        case 3: {
            int exchangeEUR500 = outputFinal / 500;
            int exchangeEUR200 = outputFinal % 500 / 200;
            int exchangeEUR100 = outputFinal % 200 / 100;
            int exchangeEUR50 = outputFinal % 100 / 50;
            int exchangeEUR20 = outputFinal % 50 / 20;
            int exchangeEUR10 = outputFinal % 20 / 10;
            int exchangeEUR5 = outputFinal % 10 / 5;
            int exchangeEUR1 = outputFinal % 5;
            printf("\n%d 원\t->\t %d 유로 환전 \n(500유로 : %d개, 200유로 : %d개, 100유로 : %d개, 50유로 : %d개, 20유로 : %d개, 10유로 : %d개, 5유로 : %d개, 1유로 : %d개)\n\n", inputWon, outputFinal,
                exchangeEUR500, exchangeEUR200, exchangeEUR100, exchangeEUR50, exchangeEUR20, exchangeEUR10, exchangeEUR5, exchangeEUR1);
            break;
        }
        case 4: {
            int exchangeCNY50 = outputFinal / 50;
            int exchangeCNY20 = outputFinal % 50 / 20;
            int exchangeCNY10 = outputFinal % 20 / 10;
            int exchangeCNY5 = outputFinal % 10 / 5;
            int exchangeCNY1 = outputFinal % 5;
            printf("\n%d 원\t->\t %d 위안 환전 \n(50위안 : %d개, 20위안 : %d개, 10위안 : %d개, 5위안 : %d개, 1위안 : %d개)\n\n", inputWon, outputFinal,
                exchangeCNY50, exchangeCNY20, exchangeCNY10, exchangeCNY5, exchangeCNY1);
            break;
        }
        case 5: {
            int exchangeGBP50 = outputFinal / 50;
            int exchangeGBP20 = outputFinal % 50 / 20;
            int exchangeGBP10 = outputFinal % 20 / 10;
            int exchangeGBP5 = outputFinal % 10 / 5;
            int exchangeGBP1 = outputFinal % 5;
            printf("\n%d 원\t->\t %d 파운드 환전 \n(50파운드 : %d개, 20파운드 : %d개, 10파운드 : %d개, 5파운드 : %d개, 1파운드 : %d개)\n\n", inputWon, outputFinal,
                exchangeGBP50, exchangeGBP20, exchangeGBP10, exchangeGBP5, exchangeGBP1);
            break;
        }
    }
    int returnWon1000 = returnWon / 1000;
    int returnWon500 = returnWon % 1000 / 500;
    int returnWon100 = returnWon % 500 / 100;
    int returnWon50 = returnWon % 100 / 50;
    int returnWon10 = returnWon % 50 / 10;
    printf("거스름돈\t->\t %d 원 \n(1000원 : %d개, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개) \n\n\n\n", returnWon, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
}
    return 0;
}
