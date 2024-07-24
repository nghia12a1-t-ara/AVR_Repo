#include "EEP.h"
#include <eeprom.h>
#include <string.h>

void Write_Pass_toEEP(uint8_t send[6])
{
    eeprom_write_block(send, 0, strlen(send));
}
void Read_Pass_fromEEP(uint8_t rec[6])
{
	eeprom_read_block(rec, 0, strlen(rec));
}

