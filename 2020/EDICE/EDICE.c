//************************************************************************************
//**  
//**  File name:     C:\Users\gerpe\OneDrive\GER-PER 2016\Documents\KennyNeutron\EDICE\EDICE.c
//**  Title:         
//**  Description:   
//**  
//**  Generated by:  Flowcode v5.2.0.0
//**  Date:          Friday, April 03, 2020 19:49:03
//**  Licence:       Professional
//**  Registered to: xyz
//**  Licence key:   WUK7B9
//**  
//**  
//**  http://www.matrixmultimedia.com
//**  
//************************************************************************************


#define MX_PIC

#define MX_USES_UINT8 1
#define MX_USES_SINT16 0
#define MX_USES_CHAR 0
#define MX_USES_FLOAT 0
#define MX_USES_SINT32 0
#define MX_USES_BOOL 1
#define MX_USES_UINT16 0
#define MX_USES_UINT32 0
//Defines for microcontroller
#define P16F690
#define FC_CAL_PIC
#define MX_ADC
#define MX_ADC_TYPE_3
#define MX_ADC_BITS_10
#define MX_EE
#define MX_EE_TYPE2
#define MX_EE_SIZE 256
#define MX_SPI_1
#define MX_SPI_1_MISO_PORT portb
#define MX_SPI_1_MISO_TRIS trisb
#define MX_SPI_1_MISO_PIN 4
#define MX_SPI_1_MOSI_PORT portc
#define MX_SPI_1_MOSI_TRIS trisc
#define MX_SPI_1_MOSI_PIN 7
#define MX_SPI_1_CLK_PORT portb
#define MX_SPI_1_CLK_TRIS trisb
#define MX_SPI_1_CLK_PIN 6
#define MX_SPI_1_SS_PORT portb
#define MX_SPI_1_SS_TRIS trisb
#define MX_UART_1
#define MX_UART_1_TX_PORT portb
#define MX_UART_1_TX_TRIS trisb
#define MX_UART_1_TX_PIN 7
#define MX_UART_1_RX_PORT portb
#define MX_UART_1_RX_TRIS trisb
#define MX_UART_1_RX_PIN 5
#define MX_I2C
#define MX_MI2C
#define MX_I2C_1
#define MX_I2C_1_SDA_PORT portb
#define MX_I2C_1_SDA_TRIS trisb
#define MX_I2C_1_SDA_PIN 4
#define MX_I2C_1_SCL_PORT portb
#define MX_I2C_1_SCL_TRIS trisb
#define MX_I2C_1_SCL_PIN 6
#define MX_PWM
#define MX_PWM_CNT 1
#define MX_PWM_PSCA1
#define MX_PWM_PSCA4
#define MX_PWM_PSCA16
#define MX_PWM_1_PORT portc
#define MX_PWM_1_TRIS trisc
#define MX_PWM_1_PIN 5

//Functions
#define MX_CLK_SPEED 4000000
#ifdef _BOOSTC
#include <system.h>
#endif
#ifdef HI_TECH_C
#include <pic.h>
#endif

//Configuration data
#ifdef _BOOSTC
#pragma DATA 0x2007, 0x30d4
#endif
#ifdef HI_TECH_C
__CONFIG(0x30d4);
#endif

//Internal functions
#include "C:\Program Files (x86)\Flowcode\v5\FCD\internals.c"

//Macro function declarations
void FCM_RANDOMIZER();


//Variable declarations
#define FCV_TRUE (1)
#define FCV_FALSE (0)
MX_BOOL FCV_FLAG0 = (0);
MX_UINT8 FCV_R_BYTE = (0x0);
MX_UINT8 FCV_SHOW_DIG;
MX_UINT8 FCV_DIGIT = (0x0);
MX_BOOL FCV_SW0 = (1);
MX_UINT8 FCV_COUNTER0 = (0x0);

MX_UINT8 FCLV_LOOP1;
MX_UINT8 FCLV_LOOP2;
MX_UINT8 FCLV_LOOP3;
MX_UINT8 FCLV_LOOP4;
MX_UINT8 FCLV_LOOP5;
MX_UINT8 FCLV_LOOP6;



//led7seg(0): //Defines:

/**** Macro Substitutions ****
a = Unique Reference
b = Segment Port letter
c = Common Port letter
d = Segment Pin 0
e = Segment Pin 1
f = Segment Pin 2
g = Segment Pin 3
h = Segment Pin 4
i = Segment Pin 5
j = Segment Pin 6
k = Segment Pin 7
l = Common Pin
m = Display Type 0=Common Cathode, 1=Common Anode
******************************/

#define SEVENSEG1_1_SEG_PORT		portc
#define SEVENSEG1_1_SEG_TRIS		trisc
#define SEVENSEG1_1_COM_PORT		portb
#define SEVENSEG1_1_COM_TRIS		trisb
#define SEVENSEG1_1_SEG_PIN0		0
#define SEVENSEG1_1_SEG_PIN1		1
#define SEVENSEG1_1_SEG_PIN2		2
#define SEVENSEG1_1_SEG_PIN3		3
#define SEVENSEG1_1_SEG_PIN4		4
#define SEVENSEG1_1_SEG_PIN5		5
#define SEVENSEG1_1_SEG_PIN6		6
#define SEVENSEG1_1_SEG_PIN7		7
#define SEVENSEG1_1_COM_PIN		4
#define SEVENSEG1_1_COM_TYPE		1

#ifndef SEVENSEG1_1_ARRAY
 #define SEVENSEG1_1_ARRAY
 ROMARRAY_S SEVENSEG1_1_SegmentArray ROMARRAY_E = {192, 249, 164, 176, 153, 146, 130, 248, 128, 152};		//Create ROM pattern array for the display
#endif




//led7seg(0): //Macro function declarations

void FCD_led7seg0_ShowDigit(MX_UINT8 Value, MX_UINT8 DecimalPoint);
void FCD_led7seg0_ClearDigit();



//led7seg(0): //Macro implementations


void FCD_led7seg0_ShowDigit(MX_UINT8 Value, MX_UINT8 DecimalPoint)
{
	
		MX_UINT8 cSegmentValue = SEVENSEG1_1_SegmentArray[Value % 10];

		if (DecimalPoint)
			cSegmentValue = cSegmentValue & 0x7F;			//Clear decimal point bit

		//display the digit
	    #if (SEVENSEG1_1_COM_TYPE == 1)						//Common Anode - Low = on, High = off

			if (cSegmentValue & 0x01)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN0);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN0);
			}

			if (cSegmentValue & 0x02)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN1);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN1);
			}

			if (cSegmentValue & 0x04)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN2);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN2);
			}

			if (cSegmentValue & 0x08)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN3);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN3);
			}

			if (cSegmentValue & 0x10)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN4);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN4);
			}

			if (cSegmentValue & 0x20)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN5);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN5);
			}

			if (cSegmentValue & 0x40)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN6);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN6);
			}

			if (cSegmentValue & 0x80)
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN7);
			}
			else
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN7);
			}

			FC_CAL_Bit_High_DDR(SEVENSEG1_1_COM_PORT, SEVENSEG1_1_COM_TRIS, SEVENSEG1_1_COM_PIN);

		#else												//Common Cathode - Low = off, High = on

			if (cSegmentValue & 0x01)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN0);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN0);
			}

			if (cSegmentValue & 0x02)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN1);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN1);
			}

			if (cSegmentValue & 0x04)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN2);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN2);
			}

			if (cSegmentValue & 0x08)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN3);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN3);
			}

			if (cSegmentValue & 0x10)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN4);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN4);
			}

			if (cSegmentValue & 0x20)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN5);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN5);
			}

			if (cSegmentValue & 0x40)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN6);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN6);
			}

			if (cSegmentValue & 0x80)
			{
				FC_CAL_Bit_Low_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN7);
			}
			else
			{
				FC_CAL_Bit_High_DDR(SEVENSEG1_1_SEG_PORT, SEVENSEG1_1_SEG_TRIS, SEVENSEG1_1_SEG_PIN7);
			}

			FC_CAL_Bit_Low_DDR(SEVENSEG1_1_COM_PORT, SEVENSEG1_1_COM_TRIS, SEVENSEG1_1_COM_PIN);

		#endif

}

void FCD_led7seg0_ClearDigit()
{
	
		#if (SEVENSEG1_1_COM_TYPE == 1)
			FC_CAL_Bit_Low_DDR(SEVENSEG1_1_COM_PORT, SEVENSEG1_1_COM_TRIS, SEVENSEG1_1_COM_PIN);		//common anode
		#else
			FC_CAL_Bit_High_DDR(SEVENSEG1_1_COM_PORT, SEVENSEG1_1_COM_TRIS, SEVENSEG1_1_COM_PIN);		//common cathode
		#endif

}

#include "C:\Program Files (x86)\Flowcode\v5\CAL\includes.c"

//Macro implementations


void FCM_RANDOMIZER()
{

	//Calculation
	//Calculation:
	//  COUNTER0 = 0
	FCV_COUNTER0 = 0;

	//Loop
	//Loop: While COUNTER0 = 250 AND FLAG0 = 1
	while (1)
	{

		//Calculation
		//Calculation:
		//  R_BYTE = R_BYTE + 1
		FCV_R_BYTE = FCV_R_BYTE + 1;

		//Input
		//Input: A2 -> SW0
		trisa = trisa | 0x04;
		FCV_SW0 = ((porta & 0x04) == 0x04);

		//Decision
		//Decision: SW0 = 0?
		if (FCV_SW0 == 0)
		{

			//Calculation
			//Calculation:
			//  FLAG0 = 1
			//  COUNTER0 = 0
			FCV_FLAG0 = 1;
			FCV_COUNTER0 = 0;

			//Loop
			//Loop: Loop 10 times
			for (FCLV_LOOP4=0; FCLV_LOOP4<10; FCLV_LOOP4++)
			{

				//Calculation
				//Calculation:
				//  DIGIT = DIGIT + 1
				FCV_DIGIT = FCV_DIGIT + 1;

				//Decision
				//Decision: DIGIT > 6?
				if (FCV_DIGIT > 6)
				{

					//Calculation
					//Calculation:
					//  DIGIT = 1
					FCV_DIGIT = 1;

				// } else {

				}

				//Call Component Macro
				//Call Component Macro: ShowDigit(DIGIT, 0)
				FCD_led7seg0_ShowDigit(FCV_DIGIT, 0);

				//Delay
				//Delay: 20 ms
				delay_ms(20);


			}

			//Loop
			//Loop: Loop 5 times
			for (FCLV_LOOP5=0; FCLV_LOOP5<5; FCLV_LOOP5++)
			{

				//Calculation
				//Calculation:
				//  DIGIT = DIGIT + 1
				FCV_DIGIT = FCV_DIGIT + 1;

				//Decision
				//Decision: DIGIT > 6?
				if (FCV_DIGIT > 6)
				{

					//Calculation
					//Calculation:
					//  DIGIT = 1
					FCV_DIGIT = 1;

				// } else {

				}

				//Call Component Macro
				//Call Component Macro: ShowDigit(DIGIT, 0)
				FCD_led7seg0_ShowDigit(FCV_DIGIT, 0);

				//Delay
				//Delay: 50 ms
				delay_ms(50);


			}

			//Loop
			//Loop: Loop 5 times
			for (FCLV_LOOP6=0; FCLV_LOOP6<5; FCLV_LOOP6++)
			{

				//Calculation
				//Calculation:
				//  DIGIT = DIGIT + 1
				FCV_DIGIT = FCV_DIGIT + 1;

				//Decision
				//Decision: DIGIT > 6?
				if (FCV_DIGIT > 6)
				{

					//Calculation
					//Calculation:
					//  DIGIT = 1
					FCV_DIGIT = 1;

				// } else {

				}

				//Call Component Macro
				//Call Component Macro: ShowDigit(DIGIT, 0)
				FCD_led7seg0_ShowDigit(FCV_DIGIT, 0);

				//Delay
				//Delay: 100 ms
				delay_ms(100);


			}

			//Loop
			//Loop: While SW0 = 0
			while (1)
			{

				//Input
				//Input: A2 -> SW0
				trisa = trisa | 0x04;
				FCV_SW0 = ((porta & 0x04) == 0x04);


				if ((FCV_SW0 == 0) == 0) break;
			}

			//Delay
			//Delay: 1 ms
			delay_ms(1);

			//Calculation
			//Calculation:
			//  SHOW_DIG = R_BYTE
			FCV_SHOW_DIG = FCV_R_BYTE;

			//Calculation
			//Calculation:
			//  SHOW_DIG = SHOW_DIG AND 0b00000111
			FCV_SHOW_DIG = FCV_SHOW_DIG & 7;

			//Decision
			//Decision: SHOW_DIG = 0?
			if (FCV_SHOW_DIG == 0)
			{

				//Calculation
				//Calculation:
				//  SHOW_DIG = 1
				FCV_SHOW_DIG = 1;

			// } else {

			}

			//Decision
			//Decision: SHOW_DIG = 7?
			if (FCV_SHOW_DIG == 7)
			{

				//Calculation
				//Calculation:
				//  SHOW_DIG = 6
				FCV_SHOW_DIG = 6;

			// } else {

			}

			//Call Component Macro
			//Call Component Macro: ShowDigit(SHOW_DIG, 0)
			FCD_led7seg0_ShowDigit(FCV_SHOW_DIG, 0);

		// } else {

		}

		//Delay
		//Delay: 50 ms
		delay_ms(50);

		//Calculation
		//Calculation:
		//  COUNTER0 = COUNTER0 + 1
		FCV_COUNTER0 = FCV_COUNTER0 + 1;


		if ((FCV_COUNTER0 == 250 & FCV_FLAG0 == 1) != 0) break;
	}

	//Call Component Macro
	//Call Component Macro: ClearDigit()
	FCD_led7seg0_ClearDigit();

	//C Code
	//C Code:
	/*
	  Enter C code below this comment
	*/
	sleep();

}



void main()
{
	//Initialization
	ansel = 0;
anselh = 0;


	//Interrupt initialization code
	option_reg = 0xC0;


	//Interrupt
	//Interrupt: Enable GP2INT
	st_bit(option_reg,INTEDG);
	st_bit(intcon,GIE);
	st_bit(intcon, INTE);

	//Loop
	//Loop: While COUNTER0 = 100 AND FLAG0 = 1
	while (1)
	{

		//Calculation
		//Calculation:
		//  R_BYTE = R_BYTE + 1
		FCV_R_BYTE = FCV_R_BYTE + 1;

		//Input
		//Input: A2 -> SW0
		trisa = trisa | 0x04;
		FCV_SW0 = ((porta & 0x04) == 0x04);

		//Decision
		//Decision: SW0 = 0?
		if (FCV_SW0 == 0)
		{

			//Calculation
			//Calculation:
			//  FLAG0 = 1
			//  COUNTER0 = 0
			FCV_FLAG0 = 1;
			FCV_COUNTER0 = 0;

			//Loop
			//Loop: Loop 10 times
			for (FCLV_LOOP1=0; FCLV_LOOP1<10; FCLV_LOOP1++)
			{

				//Calculation
				//Calculation:
				//  DIGIT = DIGIT + 1
				FCV_DIGIT = FCV_DIGIT + 1;

				//Decision
				//Decision: DIGIT > 6?
				if (FCV_DIGIT > 6)
				{

					//Calculation
					//Calculation:
					//  DIGIT = 1
					FCV_DIGIT = 1;

				// } else {

				}

				//Call Component Macro
				//Call Component Macro: ShowDigit(DIGIT, 0)
				FCD_led7seg0_ShowDigit(FCV_DIGIT, 0);

				//Delay
				//Delay: 20 ms
				delay_ms(20);


			}

			//Loop
			//Loop: Loop 5 times
			for (FCLV_LOOP2=0; FCLV_LOOP2<5; FCLV_LOOP2++)
			{

				//Calculation
				//Calculation:
				//  DIGIT = DIGIT + 1
				FCV_DIGIT = FCV_DIGIT + 1;

				//Decision
				//Decision: DIGIT > 6?
				if (FCV_DIGIT > 6)
				{

					//Calculation
					//Calculation:
					//  DIGIT = 1
					FCV_DIGIT = 1;

				// } else {

				}

				//Call Component Macro
				//Call Component Macro: ShowDigit(DIGIT, 0)
				FCD_led7seg0_ShowDigit(FCV_DIGIT, 0);

				//Delay
				//Delay: 50 ms
				delay_ms(50);


			}

			//Loop
			//Loop: Loop 5 times
			for (FCLV_LOOP3=0; FCLV_LOOP3<5; FCLV_LOOP3++)
			{

				//Calculation
				//Calculation:
				//  DIGIT = DIGIT + 1
				FCV_DIGIT = FCV_DIGIT + 1;

				//Decision
				//Decision: DIGIT > 6?
				if (FCV_DIGIT > 6)
				{

					//Calculation
					//Calculation:
					//  DIGIT = 1
					FCV_DIGIT = 1;

				// } else {

				}

				//Call Component Macro
				//Call Component Macro: ShowDigit(DIGIT, 0)
				FCD_led7seg0_ShowDigit(FCV_DIGIT, 0);

				//Delay
				//Delay: 100 ms
				delay_ms(100);


			}

			//Loop
			//Loop: While SW0 = 0
			while (1)
			{

				//Input
				//Input: A2 -> SW0
				trisa = trisa | 0x04;
				FCV_SW0 = ((porta & 0x04) == 0x04);


				if ((FCV_SW0 == 0) == 0) break;
			}

			//Delay
			//Delay: 1 ms
			delay_ms(1);

			//Calculation
			//Calculation:
			//  SHOW_DIG = R_BYTE
			FCV_SHOW_DIG = FCV_R_BYTE;

			//Calculation
			//Calculation:
			//  SHOW_DIG = SHOW_DIG AND 0b00000111
			FCV_SHOW_DIG = FCV_SHOW_DIG & 7;

			//Decision
			//Decision: SHOW_DIG = 0?
			if (FCV_SHOW_DIG == 0)
			{

				//Calculation
				//Calculation:
				//  SHOW_DIG = 1
				FCV_SHOW_DIG = 1;

			// } else {

			}

			//Decision
			//Decision: SHOW_DIG = 7?
			if (FCV_SHOW_DIG == 7)
			{

				//Calculation
				//Calculation:
				//  SHOW_DIG = 6
				FCV_SHOW_DIG = 6;

			// } else {

			}

			//Call Component Macro
			//Call Component Macro: ShowDigit(SHOW_DIG, 0)
			FCD_led7seg0_ShowDigit(FCV_SHOW_DIG, 0);

		// } else {

		}

		//Delay
		//Delay: 50 ms
		delay_ms(50);

		//Calculation
		//Calculation:
		//  COUNTER0 = COUNTER0 + 1
		FCV_COUNTER0 = FCV_COUNTER0 + 1;


		if ((FCV_COUNTER0 == 100 & FCV_FLAG0 == 1) != 0) break;
	}

	//Call Component Macro
	//Call Component Macro: ClearDigit()
	FCD_led7seg0_ClearDigit();

	//C Code
	//C Code:
	/*
	  Enter C code below this comment
	*/
	sleep();

	mainendloop: goto mainendloop;
}

void MX_INTERRUPT_MACRO(void)
{
	//Handler code for [GP2INT]
	#ifndef MX_INTHANDLER_intcon_INTF
	#define MX_INTHANDLER_intcon_INTF
	if (ts_bit(intcon, INTF) && ts_bit(intcon, INTE))
	{
		#ifdef USE_FLOWCODE_ICD
			extern char ICD_Interrupt_Enable = 1;
		#endif	
		FCM_RANDOMIZER();
		cr_bit(intcon, INTF);
		#ifdef USE_FLOWCODE_ICD
			extern char ICD_Interrupt_Enable = 0;
		#endif	
	}
	#else
	#warning "This interrupt has previously been enabled, so the macro <RANDOMIZER> may never get called."
	#endif


}



