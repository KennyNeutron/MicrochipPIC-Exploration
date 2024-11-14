;/////////////////////////////////////////////////////////////////////////////////
;// Code Generator: BoostC Compiler - http://www.sourceboost.com
;// Version       : 7.03
;// License Type  : Pro License
;// Limitations   : PIC12,PIC16 max code size:Unlimited, max RAM banks:Unlimited
;/////////////////////////////////////////////////////////////////////////////////

	include "P16F690.inc"
; Heap block 0, size:95 (0x000000A0 - 0x000000FE)
__HEAP_BLOCK0_BANK               EQU	0x00000001
__HEAP_BLOCK0_START_OFFSET       EQU	0x00000020
__HEAP_BLOCK0_END_OFFSET         EQU	0x0000007E
; Heap block 1, size:80 (0x00000120 - 0x0000016F)
__HEAP_BLOCK1_BANK               EQU	0x00000002
__HEAP_BLOCK1_START_OFFSET       EQU	0x00000020
__HEAP_BLOCK1_END_OFFSET         EQU	0x0000006F
; Heap block 2, size:22 (0x0000005A - 0x0000006F)
__HEAP_BLOCK2_BANK               EQU	0x00000000
__HEAP_BLOCK2_START_OFFSET       EQU	0x0000005A
__HEAP_BLOCK2_END_OFFSET         EQU	0x0000006F
; Heap block 3, size:0 (0x00000000 - 0x00000000)
__HEAP_BLOCK3_BANK               EQU	0x00000000
__HEAP_BLOCK3_START_OFFSET       EQU	0x00000000
__HEAP_BLOCK3_END_OFFSET         EQU	0x00000000
gbl_status                       EQU	0x00000003 ; bytes:1
gbl_14_LSR                       EQU	0x00000034 ; bytes:4
gbl_float_detect_tininess        EQU	0x0000004D ; bytes:1
gbl_float_rounding_mode          EQU	0x0000004E ; bytes:1
gbl_float_exception_flags        EQU	0x0000004F ; bytes:1
gbl_15_gbl_aSig                  EQU	0x00000038 ; bytes:4
gbl_15_gbl_bSig                  EQU	0x0000003C ; bytes:4
gbl_15_gbl_zSig                  EQU	0x00000040 ; bytes:4
gbl_15_gbl_aExp                  EQU	0x00000050 ; bytes:1
gbl_15_gbl_bExp                  EQU	0x00000051 ; bytes:1
gbl_15_gbl_zExp                  EQU	0x0000004B ; bytes:2
gbl_15_gbl_aSign                 EQU	0x00000052 ; bytes:1
gbl_15_gbl_bSign                 EQU	0x00000053 ; bytes:1
gbl_15_gbl_zSign                 EQU	0x00000054 ; bytes:1
gbl_15_gbl_zSigZero              EQU	0x00000055 ; bytes:1
gbl_15_gbl_ret                   EQU	0x00000044 ; bytes:4
gbl_indf                         EQU	0x00000000 ; bytes:1
gbl_tmr0                         EQU	0x00000001 ; bytes:1
gbl_pcl                          EQU	0x00000002 ; bytes:1
gbl_fsr                          EQU	0x00000004 ; bytes:1
gbl_porta                        EQU	0x00000005 ; bytes:1
gbl_portb                        EQU	0x00000006 ; bytes:1
gbl_portc                        EQU	0x00000007 ; bytes:1
gbl_pclath                       EQU	0x0000000A ; bytes:1
gbl_intcon                       EQU	0x0000000B ; bytes:1
gbl_pir1                         EQU	0x0000000C ; bytes:1
gbl_pir2                         EQU	0x0000000D ; bytes:1
gbl_tmr1l                        EQU	0x0000000E ; bytes:1
gbl_tmr1h                        EQU	0x0000000F ; bytes:1
gbl_t1con                        EQU	0x00000010 ; bytes:1
gbl_tmr2                         EQU	0x00000011 ; bytes:1
gbl_t2con                        EQU	0x00000012 ; bytes:1
gbl_sspbuf                       EQU	0x00000013 ; bytes:1
gbl_sspcon                       EQU	0x00000014 ; bytes:1
gbl_ccpr1l                       EQU	0x00000015 ; bytes:1
gbl_ccpr1h                       EQU	0x00000016 ; bytes:1
gbl_ccp1con                      EQU	0x00000017 ; bytes:1
gbl_rcsta                        EQU	0x00000018 ; bytes:1
gbl_txreg                        EQU	0x00000019 ; bytes:1
gbl_rcreg                        EQU	0x0000001A ; bytes:1
gbl_pwm1con                      EQU	0x0000001C ; bytes:1
gbl_eccpas                       EQU	0x0000001D ; bytes:1
gbl_adresh                       EQU	0x0000001E ; bytes:1
gbl_adcon0                       EQU	0x0000001F ; bytes:1
gbl_option_reg                   EQU	0x00000081 ; bytes:1
gbl_trisa                        EQU	0x00000085 ; bytes:1
gbl_trisb                        EQU	0x00000086 ; bytes:1
gbl_trisc                        EQU	0x00000087 ; bytes:1
gbl_pie1                         EQU	0x0000008C ; bytes:1
gbl_pie2                         EQU	0x0000008D ; bytes:1
gbl_pcon                         EQU	0x0000008E ; bytes:1
gbl_osccon                       EQU	0x0000008F ; bytes:1
gbl_osctune                      EQU	0x00000090 ; bytes:1
gbl_pr2                          EQU	0x00000092 ; bytes:1
gbl_sspadd                       EQU	0x00000093 ; bytes:1
gbl_msk                          EQU	0x00000093 ; bytes:1
gbl_sspmsk                       EQU	0x00000093 ; bytes:1
gbl_sspstat                      EQU	0x00000094 ; bytes:1
gbl_wpu                          EQU	0x00000095 ; bytes:1
gbl_wpua                         EQU	0x00000095 ; bytes:1
gbl_ioc                          EQU	0x00000096 ; bytes:1
gbl_ioca                         EQU	0x00000096 ; bytes:1
gbl_wdtcon                       EQU	0x00000097 ; bytes:1
gbl_txsta                        EQU	0x00000098 ; bytes:1
gbl_spbrg                        EQU	0x00000099 ; bytes:1
gbl_spbrgh                       EQU	0x0000009A ; bytes:1
gbl_baudctl                      EQU	0x0000009B ; bytes:1
gbl_adresl                       EQU	0x0000009E ; bytes:1
gbl_adcon1                       EQU	0x0000009F ; bytes:1
gbl_eedata                       EQU	0x0000010C ; bytes:1
gbl_eeadr                        EQU	0x0000010D ; bytes:1
gbl_eedath                       EQU	0x0000010E ; bytes:1
gbl_eeadrh                       EQU	0x0000010F ; bytes:1
gbl_wpub                         EQU	0x00000115 ; bytes:1
gbl_iocb                         EQU	0x00000116 ; bytes:1
gbl_vrcon                        EQU	0x00000118 ; bytes:1
gbl_cm1con0                      EQU	0x00000119 ; bytes:1
gbl_cm2con0                      EQU	0x0000011A ; bytes:1
gbl_cm2con1                      EQU	0x0000011B ; bytes:1
gbl_ansel                        EQU	0x0000011E ; bytes:1
gbl_anselh                       EQU	0x0000011F ; bytes:1
gbl_eecon1                       EQU	0x0000018C ; bytes:1
gbl_eecon2                       EQU	0x0000018D ; bytes:1
gbl_pstrcon                      EQU	0x0000019D ; bytes:1
gbl_srcon                        EQU	0x0000019E ; bytes:1
gbl_FCV_SEND_STRING              EQU	0x00000020 ; bytes:20
FC_CAL_SPI_00053_arg_DataOut     EQU	0x00000057 ; bytes:1
CompTempVarRet2188               EQU	0x00000059 ; bytes:1
FC_CAL_SPI_00053_1_retVal        EQU	0x00000058 ; bytes:1
FCD_SPI_Le_00056_arg_Char        EQU	0x00000056 ; bytes:1
CompTempVar2201                  EQU	0x00000056 ; bytes:1
delay_us_00000_arg_del           EQU	0x00000056 ; bytes:1
Int1Context                      EQU	0x0000007F ; bytes:1
Int1BContext                     EQU	0x00000048 ; bytes:3
	ORG 0x00000000
	GOTO	_startup
	ORG 0x00000004
	MOVWF Int1Context
	SWAPF STATUS, W
	BCF STATUS, RP0
	BCF STATUS, RP1
	MOVWF Int1BContext
	SWAPF PCLATH, W
	MOVWF Int1BContext+D'1'
	SWAPF FSR, W
	MOVWF Int1BContext+D'2'
	BCF PCLATH,3
	BCF PCLATH,4
	GOTO	interrupt
	ORG 0x00000010
delay_us_00000
; { delay_us ; function begin
label1
	NOP
	NOP
	DECFSZ delay_us_00000_arg_del, F
	GOTO	label1
	RETURN
; } delay_us function end

	ORG 0x00000015
FC_CAL_SPI_00053
; { FC_CAL_SPI_Master_Byte_1 ; function begin
	CLRF FC_CAL_SPI_00053_1_retVal
	MOVF FC_CAL_SPI_00053_arg_DataOut, W
	MOVWF gbl_sspbuf
label2
	BSF STATUS, RP0
	BTFSS gbl_sspstat,0
	GOTO	label2
	BCF STATUS, RP0
	MOVF gbl_sspbuf, W
	MOVWF FC_CAL_SPI_00053_1_retVal
	MOVF FC_CAL_SPI_00053_1_retVal, W
	MOVWF CompTempVarRet2188
	RETURN
; } FC_CAL_SPI_Master_Byte_1 function end

	ORG 0x00000021
FC_CAL_SPI_00051
; { FC_CAL_SPI_Master_Init_1 ; function begin
	BSF STATUS, RP0
	BCF STATUS, RP1
	BCF gbl_trisc,7
	BCF STATUS, RP0
	BSF gbl_portc,7
	BSF STATUS, RP0
	BSF gbl_trisb,4
	BCF gbl_trisb,6
	BCF STATUS, RP0
	BCF gbl_portb,6
	MOVLW 0x01
	MOVWF gbl_sspcon
	BCF gbl_sspcon,4
	BSF STATUS, RP0
	BSF gbl_sspstat,6
	BSF gbl_sspstat,7
	BCF STATUS, RP0
	BSF gbl_sspcon,5
	RETURN
; } FC_CAL_SPI_Master_Init_1 function end

	ORG 0x00000034
FCD_SPI_Le_00056
; { FCD_SPI_Legacy0_SPI_Send_Char ; function begin
	MOVF FCD_SPI_Le_00056_arg_Char, W
	MOVWF FC_CAL_SPI_00053_arg_DataOut
	CALL FC_CAL_SPI_00053
	RETURN
; } FCD_SPI_Legacy0_SPI_Send_Char function end

	ORG 0x00000038
FCD_SPI_Le_00054
; { FCD_SPI_Legacy0_SPI_Init ; function begin
	BSF STATUS, RP0
	BCF STATUS, RP1
	BCF gbl_trisa,0
	BCF STATUS, RP0
	BSF gbl_porta,0
	BSF STATUS, RP0
	BCF gbl_trisa,0
	BCF STATUS, RP0
	BSF gbl_porta,0
	CALL FC_CAL_SPI_00051
	RETURN
; } FCD_SPI_Legacy0_SPI_Init function end

	ORG 0x00000043
main
; { main ; function begin
	BCF STATUS, RP0
	BSF STATUS, RP1
	CLRF gbl_ansel
	CLRF gbl_anselh
	MOVLW 0xC0
	BSF STATUS, RP0
	BCF STATUS, RP1
	MOVWF gbl_option_reg
	CALL FCD_SPI_Le_00054
label3
	MOVLW 0xBF
	BSF STATUS, RP0
	ANDWF gbl_trisc, W
	MOVWF gbl_trisc
	MOVLW 0xBF
	BCF STATUS, RP0
	ANDWF gbl_portc, W
	MOVWF CompTempVar2201
	MOVLW 0x40
	IORWF CompTempVar2201, W
	MOVWF gbl_portc
	MOVLW 0x0A
	MOVWF delay_us_00000_arg_del
	CALL delay_us_00000
	MOVLW 0xBF
	BSF STATUS, RP0
	ANDWF gbl_trisc, W
	MOVWF gbl_trisc
	MOVLW 0xBF
	BCF STATUS, RP0
	ANDWF gbl_portc, W
	MOVWF gbl_portc
	MOVLW 0x41
	MOVWF FCD_SPI_Le_00056_arg_Char
	CALL FCD_SPI_Le_00056
	MOVLW 0x0A
	MOVWF delay_us_00000_arg_del
	CALL delay_us_00000
	GOTO	label3
; } main function end

	ORG 0x00000069
_startup
	MOVLW 0xD5
	BCF STATUS, RP0
	BCF STATUS, RP1
	MOVWF gbl_14_LSR
	MOVLW 0xC4
	MOVWF gbl_14_LSR+D'1'
	MOVLW 0xBB
	MOVWF gbl_14_LSR+D'2'
	MOVLW 0xDC
	MOVWF gbl_14_LSR+D'3'
	CLRF gbl_15_gbl_aSig
	CLRF gbl_15_gbl_aSig+D'1'
	CLRF gbl_15_gbl_aSig+D'2'
	CLRF gbl_15_gbl_aSig+D'3'
	CLRF gbl_15_gbl_bSig
	CLRF gbl_15_gbl_bSig+D'1'
	CLRF gbl_15_gbl_bSig+D'2'
	CLRF gbl_15_gbl_bSig+D'3'
	CLRF gbl_15_gbl_zSig
	CLRF gbl_15_gbl_zSig+D'1'
	CLRF gbl_15_gbl_zSig+D'2'
	CLRF gbl_15_gbl_zSig+D'3'
	CLRF gbl_15_gbl_aExp
	CLRF gbl_15_gbl_bExp
	CLRF gbl_15_gbl_zExp
	CLRF gbl_15_gbl_zExp+D'1'
	CLRF gbl_15_gbl_aSign
	CLRF gbl_15_gbl_bSign
	CLRF gbl_15_gbl_zSign
	CLRF gbl_15_gbl_zSigZero
	CLRF gbl_15_gbl_ret
	CLRF gbl_15_gbl_ret+D'1'
	CLRF gbl_15_gbl_ret+D'2'
	CLRF gbl_15_gbl_ret+D'3'
	CLRF gbl_float_rounding_mode
	CLRF gbl_float_exception_flags
	CLRF gbl_float_detect_tininess
	CLRF gbl_FCV_SEND_STRING
	BCF PCLATH,3
	BCF PCLATH,4
	GOTO	main
	ORG 0x00000092
interrupt
; { interrupt ; function begin
	BCF STATUS, RP0
	BCF STATUS, RP1
	SWAPF Int1BContext+D'2', W
	MOVWF FSR
	SWAPF Int1BContext+D'1', W
	MOVWF PCLATH
	SWAPF Int1BContext, W
	MOVWF STATUS
	SWAPF Int1Context, F
	SWAPF Int1Context, W
	RETFIE
; } interrupt function end

	ORG 0x00002007
	DW 0x30D2
	END
