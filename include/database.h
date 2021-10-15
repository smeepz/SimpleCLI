#ifndef __TK1104_DATABASE_H__
#define __TK1104_DATABASE_H__
void createDatabase(int iType);
void addEntry(char *entry);
char * getElement(int index);
void deleteEntry(int index);
int getEntryCount();
#endif // __TK1104_DATABASE_H__