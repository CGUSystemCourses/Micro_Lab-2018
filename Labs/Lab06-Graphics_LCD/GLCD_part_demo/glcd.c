/*******************************************************************************
 *
 * file: [glcd.c]
 *
 ******************************************************************************/

#include "C8051F040.h"
#include "glcd.h"


/*******************************************************************************
 *
 * functions for configuring the hardware
 *
 ******************************************************************************/

void
set_GLCD_WriteMode ()
{
	P4MDOUT = 0xff;
}//end of function set_GLCD_WriteMode


void
set_GLCD_ReadMode ()
{
	P4MDOUT = 0x00;
	P4 = 0xff;
}//end of function set_GLCD_ReadMode

void
system_init_config ()
{
	//turn-off the watch-dog timer
	WDTCN = 0xde;
	WDTCN = 0xad;

	//initialize SFR setup page
	SFRPAGE = CONFIG_PAGE;		// Switch to configuration page

	//setup the cross-bar and configure the I/O ports
	XBR2 = 0xc0;
	P2MDOUT = 0xff;
}//end of function system_init_config


/*******************************************************************************
 *
 * functions to drive hardware signals
 *
 ******************************************************************************/

//
// this part is removed
//


/*******************************************************************************
 *
 * GLCD read operations
 *
 ******************************************************************************/

//
// this part is removed
//


/*******************************************************************************
 *
 * functions to send commands and data to GLCD
 *
 ******************************************************************************/

//
// this part is removed
//



/*******************************************************************************
 *
 * the main drawing function
 *
 ******************************************************************************/

main ()
{
	char status;
	int i, j;

	system_init_config ();

/*
	GLCD_Reset ();
	Set_DisplayOn ();
	status = GLCD_ReadStatus ();
*/


/*
	Set_DisplayStartLine (0);
	Set_Yaddr (0);
	Set_Xaddr (0);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0xaa);

	Set_Xaddr (1);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0xaa);

	Set_Xaddr (2);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0xbb);

	Set_Xaddr (3);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0x0f);

	Set_Xaddr (4);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0x6a);

	Set_Xaddr (5);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0x30);

	Set_Xaddr (6);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0xcc);

	Set_Xaddr (7);
	for (i=0;i<64;i++)
		Send_Data (0x00);
	for (i=0;i<64;i++)
		Send_Data (0xbb);
*/


	while (1);
}//end of function main








