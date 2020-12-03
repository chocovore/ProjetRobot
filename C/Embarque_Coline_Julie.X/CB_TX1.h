//#ifndef CB_TX1_H

#ifndef CB_TX1_H
#define	CB_TX1_H

void SendMessage (unsigned char* , int );
void CB_TX1_Add(unsigned char ) ;
unsigned char CB_TX1_Get(void);
void __attribute__ ((interrupt, no_auto_psv)) _U1TXInterrupt (void);
void SendOne ( );
unsigned char CB_TX1_IsTransmitting ( void);
int CB_TX1_RemainingSize (void);
int CB_TX1_GetDataSize(void);

#endif  /* CB_TX1_H */