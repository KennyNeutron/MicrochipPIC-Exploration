//************************************************************************************
//**  
//**  File name:     C:\Users\gerpe\OneDrive\GER-PER 2016\Documents\KennyNeutron\2020\Thermometer\Flowcode\distance_test.c
//**  Title:         
//**  Description:   
//**  
//**  Generated by:  Flowcode v5.2.0.0
//**  Date:          Saturday, July 11, 2020 16:30:57
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
#define MX_USES_UINT32 1
//Defines for microcontroller
#define P16F873A
#define FC_CAL_PIC
#define MX_ADC
#define MX_ADC_TYPE_1
#define MX_ADC_BITS_10
#define MX_EE
#define MX_EE_TYPE2
#define MX_EE_SIZE 128
#define MX_SPI_1
#define MX_SPI_1_MISO_PORT portc
#define MX_SPI_1_MISO_TRIS trisc
#define MX_SPI_1_MISO_PIN 4
#define MX_SPI_1_MOSI_PORT portc
#define MX_SPI_1_MOSI_TRIS trisc
#define MX_SPI_1_MOSI_PIN 5
#define MX_SPI_1_CLK_PORT portc
#define MX_SPI_1_CLK_TRIS trisc
#define MX_SPI_1_CLK_PIN 3
#define MX_SPI_1_SS_PORT portc
#define MX_SPI_1_SS_TRIS trisc
#define MX_UART_1
#define MX_UART_1_TX_PORT portc
#define MX_UART_1_TX_TRIS trisc
#define MX_UART_1_TX_PIN 6
#define MX_UART_1_RX_PORT portc
#define MX_UART_1_RX_TRIS trisc
#define MX_UART_1_RX_PIN 7
#define MX_I2C
#define MX_MI2C
#define MX_I2C_1
#define MX_I2C_1_SDA_PORT portc
#define MX_I2C_1_SDA_TRIS trisc
#define MX_I2C_1_SDA_PIN 4
#define MX_I2C_1_SCL_PORT portc
#define MX_I2C_1_SCL_TRIS trisc
#define MX_I2C_1_SCL_PIN 3
#define MX_PWM
#define MX_PWM_CNT 2
#define MX_PWM_PSCA1
#define MX_PWM_PSCA4
#define MX_PWM_PSCA16
#define MX_PWM_1_PORT portc
#define MX_PWM_1_TRIS trisc
#define MX_PWM_1_PIN 2
#define MX_PWM_2_PORT portc
#define MX_PWM_2_TRIS trisc
#define MX_PWM_2_PIN 1

//Functions
#define MX_CLK_SPEED 3276800
#ifdef _BOOSTC
#include <system.h>
#endif
#ifdef HI_TECH_C
#include <pic.h>
#endif

//Configuration data
#ifdef _BOOSTC
#pragma DATA 0x2007, 0x1e7a
#endif
#ifdef HI_TECH_C
__CONFIG(0x1e7a);
#endif

//Internal functions
#include "C:\Program Files (x86)\Flowcode\v5\FCD\internals.c"

//Macro function declarations


//Variable declarations
#define FCV_TRUE (1)
#define FCV_FALSE (0)
MX_UINT32 FCV_DURATION = (0x0);
MX_BOOL FCV_ECHO = (0);
MX_BOOL FCV_TRIG = (0);




//LCDDisplay(0): //Defines:

/**** Macro Substitutions ****
a = Unique Component Reference Number
b = D1 Port Letter
c = D2 Port Letter
d = D3 Port Letter
e = D4 Port Letter
f = RS Port Letter
g = E Port Letter
h = Data 1_Pin
i = Data 2 Pin
j = Data 3 Pin
k = Data 4 Pin
l = RS Pin
m = Enable Pin
n = Row Count
o = Column Count
******************************/

	//component connections
	#define LCD_1__PORT0    porta
	#define LCD_1__PORT1    porta
	#define LCD_1__PORT2    porta
	#define LCD_1__PORT3    porta
	#define LCD_1__PORT4    porta
	#define LCD_1__PORT5    porta
	#define LCD_1__TRIS0    trisa
	#define LCD_1__TRIS1    trisa
	#define LCD_1__TRIS2    trisa
	#define LCD_1__TRIS3    trisa
	#define LCD_1__TRIS4    trisa
	#define LCD_1__TRIS5    trisa
	#define LCD_1__BIT0    	0
	#define LCD_1__BIT1    	1
	#define LCD_1__BIT2    	2
	#define LCD_1__BIT3    	3
	#define LCD_1__RS      	4
	#define LCD_1__E       	5
	#define LCD_1__ROWCNT	4
	#define LCD_1__COLCNT	16

	#ifdef _BOOSTC
	  #define LCD_1__DELAY   delay_10us(10)
	#endif
	#ifdef _C2C_
	  #define LCD_1__DELAY   delay_us(100)
	#endif
	#ifdef HI_TECH_C
	  #define LCD_1__DELAY   __delay_us(120)
	#endif
	#ifndef LCD_1__DELAY
	  #define LCD_1__DELAY   delay_us(100)
	#endif




//LCDDisplay(0): //Macro function declarations

void FCD_LCDDisplay0_RawSend(MX_UINT8 in, MX_UINT8 mask);
void FCD_LCDDisplay0_Start();
void FCD_LCDDisplay0_Clear();
void FCD_LCDDisplay0_PrintASCII(MX_UINT8 Character);
void FCD_LCDDisplay0_Command(MX_UINT8 in);
void FCD_LCDDisplay0_Cursor(MX_UINT8 x, MX_UINT8 y);
void FCD_LCDDisplay0_PrintNumber(MX_SINT16 Number);
void FCD_LCDDisplay0_PrintString(MX_STRING String, MX_UINT8 MSZ_String);
void FCD_LCDDisplay0_ScrollDisplay(MX_UINT8 Direction, MX_UINT8 Num_Positions);
void FCD_LCDDisplay0_ClearLine(MX_UINT8 Line);
void FCD_LCDDisplay0_RAM_Write(MX_UINT8 nIdx, MX_UINT8 d0, MX_UINT8 d1, MX_UINT8 d2, MX_UINT8 d3, MX_UINT8 d4, MX_UINT8 d5, MX_UINT8 d6, MX_UINT8 d7);



//LCDDisplay(0): //Macro implementations


void FCD_LCDDisplay0_RawSend(MX_UINT8 in, MX_UINT8 mask)
{
	
		MX_UINT8 pt;

		FC_CAL_Bit_Low(LCD_1__PORT0, LCD_1__BIT0);
		FC_CAL_Bit_Low(LCD_1__PORT1, LCD_1__BIT1);
		FC_CAL_Bit_Low(LCD_1__PORT2, LCD_1__BIT2);
		FC_CAL_Bit_Low(LCD_1__PORT3, LCD_1__BIT3);
		FC_CAL_Bit_Low(LCD_1__PORT4, LCD_1__RS);
		FC_CAL_Bit_Low(LCD_1__PORT5, LCD_1__E);
		pt = ((in >> 4) & 0x0f);
		if (pt & 0x01)
		    FC_CAL_Bit_High(LCD_1__PORT0, LCD_1__BIT0);
		if (pt & 0x02)
		    FC_CAL_Bit_High(LCD_1__PORT1, LCD_1__BIT1);
		if (pt & 0x04)
		    FC_CAL_Bit_High(LCD_1__PORT2, LCD_1__BIT2);
		if (pt & 0x08)
		    FC_CAL_Bit_High(LCD_1__PORT3, LCD_1__BIT3);
		if (mask)
		    FC_CAL_Bit_High(LCD_1__PORT4, LCD_1__RS);
		LCD_1__DELAY;
		FC_CAL_Bit_High (LCD_1__PORT5, LCD_1__E);
		LCD_1__DELAY;
		FC_CAL_Bit_Low (LCD_1__PORT5, LCD_1__E);
		pt = (in & 0x0f);
		LCD_1__DELAY;
		FC_CAL_Bit_Low(LCD_1__PORT0, LCD_1__BIT0);
		FC_CAL_Bit_Low(LCD_1__PORT1, LCD_1__BIT1);
		FC_CAL_Bit_Low(LCD_1__PORT2, LCD_1__BIT2);
		FC_CAL_Bit_Low(LCD_1__PORT3, LCD_1__BIT3);
		FC_CAL_Bit_Low(LCD_1__PORT4, LCD_1__RS);
		FC_CAL_Bit_Low(LCD_1__PORT5, LCD_1__E);
		if (pt & 0x01)
		    FC_CAL_Bit_High(LCD_1__PORT0, LCD_1__BIT0);
		if (pt & 0x02)
		    FC_CAL_Bit_High(LCD_1__PORT1, LCD_1__BIT1);
		if (pt & 0x04)
		    FC_CAL_Bit_High(LCD_1__PORT2, LCD_1__BIT2);
		if (pt & 0x08)
		    FC_CAL_Bit_High(LCD_1__PORT3, LCD_1__BIT3);
		if (mask)
		    FC_CAL_Bit_High(LCD_1__PORT4, LCD_1__RS);
		LCD_1__DELAY;
		FC_CAL_Bit_High (LCD_1__PORT5, LCD_1__E);
		LCD_1__DELAY;
		FC_CAL_Bit_Low (LCD_1__PORT5, LCD_1__E);
		LCD_1__DELAY;

}

void FCD_LCDDisplay0_Start()
{
	
		FC_CAL_Bit_Low_DDR(LCD_1__PORT0, LCD_1__TRIS0, LCD_1__BIT0);
		FC_CAL_Bit_Low_DDR(LCD_1__PORT1, LCD_1__TRIS1, LCD_1__BIT1);
		FC_CAL_Bit_Low_DDR(LCD_1__PORT2, LCD_1__TRIS2, LCD_1__BIT2);
		FC_CAL_Bit_Low_DDR(LCD_1__PORT3, LCD_1__TRIS3, LCD_1__BIT3);
		FC_CAL_Bit_Low_DDR(LCD_1__PORT4, LCD_1__TRIS4, LCD_1__RS);
		FC_CAL_Bit_Low_DDR(LCD_1__PORT5, LCD_1__TRIS5, LCD_1__E);

		Wdt_Delay_Ms(12);

		FCD_LCDDisplay0_RawSend(0x33, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x33, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x32, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x2c, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x06, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x0c, 0);
		Wdt_Delay_Ms(2);

		//clear the display
		FCD_LCDDisplay0_RawSend(0x01, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x02, 0);
		Wdt_Delay_Ms(2);

}

void FCD_LCDDisplay0_Clear()
{
	
		FCD_LCDDisplay0_RawSend(0x01, 0);
		Wdt_Delay_Ms(2);
		FCD_LCDDisplay0_RawSend(0x02, 0);
		Wdt_Delay_Ms(2);

}

void FCD_LCDDisplay0_PrintASCII(MX_UINT8 Character)
{
	
		FCD_LCDDisplay0_RawSend(Character, 0x10);

}

void FCD_LCDDisplay0_Command(MX_UINT8 in)
{
	
		FCD_LCDDisplay0_RawSend(in, 0);
		Wdt_Delay_Ms(2);

}

void FCD_LCDDisplay0_Cursor(MX_UINT8 x, MX_UINT8 y)
{
	
	  #if (LCD_1__ROWCNT == 1)
	    y=0x80;
	  #endif

	  #if (LCD_1__ROWCNT == 2)
		if (y==0)
			y=0x80;
		else
			y=0xc0;
	  #endif

	  #if (LCD_1__ROWCNT == 4)
		if (y==0)
			y=0x80;
		else if (y==1)
			y=0xc0;

		#if (LCD_1__COLCNT == 16)
			else if (y==2)
				y=0x90;
			else
				y=0xd0;
		#endif

		#if (LCD_1__COLCNT == 20)
			else if (y==2)
				y=0x94;
			else
				y=0xd4;
		#endif
	  #endif

		FCD_LCDDisplay0_RawSend(y+x, 0);
		Wdt_Delay_Ms(2);

}

void FCD_LCDDisplay0_PrintNumber(MX_SINT16 Number)
{
	
		MX_SINT16 tmp_int;
		MX_UINT8 tmp_byte;

		if (Number < 0)
		{
			FCD_LCDDisplay0_RawSend('-', 0x10);
			Number = 0 - Number;
		}

		tmp_int = Number;
		if (Number >= 10000)
		{
			tmp_byte = tmp_int / 10000;
			FCD_LCDDisplay0_RawSend('0' + tmp_byte, 0x10);

			while (tmp_byte > 0)
			{
				tmp_int = tmp_int - 10000;
				tmp_byte--;
			}
		}
		if (Number >= 1000)
		{
			tmp_byte = tmp_int / 1000;
			FCD_LCDDisplay0_RawSend('0' + tmp_byte, 0x10);

			while (tmp_byte > 0)
			{
				tmp_int = tmp_int - 1000;
				tmp_byte--;
			}
		}
		if (Number >= 100)
		{
			tmp_byte = tmp_int / 100;
			FCD_LCDDisplay0_RawSend('0' + tmp_byte, 0x10);

			while (tmp_byte > 0)
			{
				tmp_int = tmp_int - 100;
				tmp_byte--;
			}
		}
		if (Number >= 10)
		{
			tmp_byte = tmp_int / 10;
			FCD_LCDDisplay0_RawSend('0' + tmp_byte, 0x10);

			while (tmp_byte > 0)
			{
				tmp_int = tmp_int - 10;
				tmp_byte--;
			}
		}
		FCD_LCDDisplay0_RawSend('0' + tmp_int, 0x10);

}

void FCD_LCDDisplay0_PrintString(MX_STRING String, MX_UINT8 MSZ_String)
{
	
		MX_UINT8 idx = 0;

		for (idx=0; idx<MSZ_String; idx++)
		{
			if (String[idx] == 0)
			{
				break;
			}
			FCD_LCDDisplay0_RawSend(String[idx], 0x10);
		}

}

void FCD_LCDDisplay0_ScrollDisplay(MX_UINT8 Direction, MX_UINT8 Num_Positions)
{
	
		MX_UINT8 cmd = 0;
		MX_UINT8 count;

		//Choose the direction
		switch (Direction)
		{
			case 0:
			case 'l':
			case 'L':

				cmd = 0x18;
				break;

			case 1:
			case 'r':
			case 'R':

				cmd = 0x1C;
				break;

			default:
				break;
		}

		//If direction accepted then scroll the specified amount
		if (cmd)
		{
			for (count = 0; count < Num_Positions; count++)
				FCD_LCDDisplay0_Command(cmd);
		}

}

void FCD_LCDDisplay0_ClearLine(MX_UINT8 Line)
{
	
		MX_UINT8 count;
		MX_UINT8 rowcount;

		//Define number of columns per line
		#if (LCD_1__ROWCNT == 1)
			rowcount=80;
		#endif

		#if (LCD_1__ROWCNT == 2)
			rowcount=40;
		#endif

		#if (LCD_1__ROWCNT == 4)
			#if (LCD_1__COLCNT == 16)
				rowcount=16;
			#endif
			#if (LCD_1__COLCNT == 20)
				rowcount=20;
			#endif
		#endif

		//Start at beginning of the line
		FCD_LCDDisplay0_Cursor (0, Line);

		//Send out spaces to clear line
		for (count = 0; count < rowcount; count++)
			FCD_LCDDisplay0_RawSend(' ', 0x10);

		//Move back to the beginning of the line.
		FCD_LCDDisplay0_Cursor (0, Line);

}

void FCD_LCDDisplay0_RAM_Write(MX_UINT8 nIdx, MX_UINT8 d0, MX_UINT8 d1, MX_UINT8 d2, MX_UINT8 d3, MX_UINT8 d4, MX_UINT8 d5, MX_UINT8 d6, MX_UINT8 d7)
{
	   //set CGRAM address

	   FCD_LCDDisplay0_RawSend(64 + (nIdx << 3), 0);
	   delay_ms(2);

	   //write CGRAM data
	   FCD_LCDDisplay0_RawSend(d0, 0x10);
	   FCD_LCDDisplay0_RawSend(d1, 0x10);
	   FCD_LCDDisplay0_RawSend(d2, 0x10);
	   FCD_LCDDisplay0_RawSend(d3, 0x10);
	   FCD_LCDDisplay0_RawSend(d4, 0x10);
	   FCD_LCDDisplay0_RawSend(d5, 0x10);
	   FCD_LCDDisplay0_RawSend(d6, 0x10);
	   FCD_LCDDisplay0_RawSend(d7, 0x10);

	   //Clear the display
	   FCD_LCDDisplay0_RawSend(0x01, 0);
	   delay_ms(2);
	   FCD_LCDDisplay0_RawSend(0x02, 0);
	   delay_ms(2);

}

#include "C:\Program Files (x86)\Flowcode\v5\CAL\includes.c"

//Macro implementations



void main()
{
	//Initialization
	adcon1 = 0x07;


	//Interrupt initialization code
	option_reg = 0xC0;


	//Call Component Macro
	//Call Component Macro: Start()
	FCD_LCDDisplay0_Start();

	//Call Component Macro
	//Call Component Macro: Clear()
	FCD_LCDDisplay0_Clear();

	//Loop
	//Loop: While 1
	while (1)
	{

		//Output
		//Output: 0 -> C1
		trisc = trisc & 0xFD;
		if ((0))
			portc = (portc & 0xFD) | 0x02;
		else
			portc = portc & 0xFD;

		//Call Component Macro
		//Call Component Macro: Cursor(1, 0)
		FCD_LCDDisplay0_Cursor(1, 0);

		//Call Component Macro
		//Call Component Macro: PrintString("DISTANCE TEST")
		FCD_LCDDisplay0_PrintString("DISTANCE TEST", 13);

		//Output
		//Output: 1 -> C1
		trisc = trisc & 0xFD;
		if ((1))
			portc = (portc & 0xFD) | 0x02;
		else
			portc = portc & 0xFD;

		//Delay
		//Delay: 10 us
		delay_us(10);

		//Output
		//Output: 0 -> C1
		trisc = trisc & 0xFD;
		if ((0))
			portc = (portc & 0xFD) | 0x02;
		else
			portc = portc & 0xFD;

		//Connection Point
		//Connection Point: [A]: A
FCC_Main_A:
;

		//Calculation
		//Calculation:
		//  duration = 0
		FCV_DURATION = 0;

		//Input
		//Input: C2 -> echo
		trisc = trisc | 0x04;
		FCV_ECHO = ((portc & 0x04) == 0x04);

		//Decision
		//Decision: echo = 1?
		if (FCV_ECHO == 1)
		{

			//Loop
			//Loop: While echo = 1
			while (1)
			{

				//Calculation
				//Calculation:
				//  duration = duration + 1
				FCV_DURATION = FCV_DURATION + 1;

				//Input
				//Input: C2 -> echo
				trisc = trisc | 0x04;
				FCV_ECHO = ((portc & 0x04) == 0x04);

				//Delay
				//Delay: 1 us
				delay_us(1);


				if ((FCV_ECHO == 1) == 0) break;
			}

			//Call Component Macro
			//Call Component Macro: ClearLine(3)
			FCD_LCDDisplay0_ClearLine(3);

			//Call Component Macro
			//Call Component Macro: Cursor(0, 3)
			FCD_LCDDisplay0_Cursor(0, 3);

			//Call Component Macro
			//Call Component Macro: PrintString("D=")
			FCD_LCDDisplay0_PrintString("D=", 2);

			//Call Component Macro
			//Call Component Macro: Cursor(2, 3)
			FCD_LCDDisplay0_Cursor(2, 3);

			//Call Component Macro
			//Call Component Macro: PrintNumber(duration)
			FCD_LCDDisplay0_PrintNumber(FCV_DURATION);

			//Call Component Macro
			//Call Component Macro: PrintString("cm")
			FCD_LCDDisplay0_PrintString("cm", 2);

		} else {

			//Goto Connection Point
			//Goto Connection Point: [A]: A
			goto FCC_Main_A;

		}

		//Delay
		//Delay: 1 s
		delay_s(1);


	}

	mainendloop: goto mainendloop;
}

void MX_INTERRUPT_MACRO(void)
{
}



