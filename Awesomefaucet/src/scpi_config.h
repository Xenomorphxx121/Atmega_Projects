#ifndef SCPI_CONFIG_H_
#define SCPI_CONFIG_H_

/**************************************************************************
*  Define size of commands array                                          *
***************************************************************************/
	#define COMMAND_ARRAY_SIZE	25
/**************************************************************************
*  Define max input string length                                         *
***************************************************************************/
	#define MAX_IN_STR_LEN		260
/**************************************************************************
*  Define max command length                                              *
***************************************************************************/
	#define MAX_TOKEN_LEN		13
/**************************************************************************
*  Define max command error queue depth                                   *
***************************************************************************/
	#define ERROR_QUEUE_LEN		2
/**************************************************************************
*  Define max command error queues length                                 *
***************************************************************************/
	#define ERROR_MESSAGE_LEN	24 //100
/**************************************************************************
*  Define max token count                                                 *
***************************************************************************/
	#define MAX_TOKEN_COUNT		16
/**************************************************************************
*  Define max argument length                                             *
***************************************************************************/
	#define MAX_ARG_LEN			16
/**************************************************************************
*  Define max argument length                                             *
***************************************************************************/
    #define MAX_DARKNESS_CHARS 2
    #define MAX_IIR_CHARS 3
/**************************************************************************
*  VERSIONS                                                               *
***************************************************************************/
	#define FIRMWARE_VERSION	"FIRMWARE REV 2.1"
	
#endif // SCPI_CONFIG_H_
