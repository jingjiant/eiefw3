/**********************************************************************************************************************
File: anttt.h                                                                
**********************************************************************************************************************/

#ifndef __ANTTTT_H
#define __ANTTTT_H



/**********************************************************************************************************************
Constants / Definitions
**********************************************************************************************************************/
/* ANTTT Communication Protocol */
#define ANTTT_COMMAND_SIZE              (u8)3
#define ANTTT_COMMAND_ID_OFFSET         (u8)0x00
#define ANTTT_COMMAND_POSITION_OFFSET   (u8)0x01
#define ANTTT_COMMAND_UNUSED_OFFSET     (u8)0x02

#define ANTTT_COMMAND_ID_MOVE           (u8)0xCC
#define ANTTT_COMMAND_ID_MOVE_RESP      (u8)0xAC   



/**********************************************************************************************************************
Type Definitions
**********************************************************************************************************************/


/**********************************************************************************************************************
Function Declarations
**********************************************************************************************************************/

/*--------------------------------------------------------------------------------------------------------------------*/
/* Public functions                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------*/
/* Protected functions                                                                                                */
/*--------------------------------------------------------------------------------------------------------------------*/
void AntttInitialize(void);
void AntttRunActiveState(void);


/*--------------------------------------------------------------------------------------------------------------------*/
/* Private functions                                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------*/
/* SM functions                                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/
static void AntttSM_Idle(void);



#endif /* __ANTTT_H */


/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/
