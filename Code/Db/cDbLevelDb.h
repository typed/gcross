#ifndef _cross_db_cdbleveldb_h
#define _cross_db_cdbleveldb_h

#include "iDb.h"

#if USE_LEVELDB

namespace cross
{

class cDbLevelDb :
	public iDb
{
public:
	cDbLevelDb();
	~cDbLevelDb();
	void Release() {delete this;}
	cpstr GetLastError() const {return m_sLastError.c_str();}
	bool OpenDb(std::string);
	bool IsOpened();
	void CloseDb();
	bool Set(std::string vKey, std::string vValue);
	bool SetSync(std::string vKey, std::string vValue);
	bool Get(std::string vKey, std::string& vValue);
	bool Del(std::string vKey);
private:
	pvd				m_pLevelDb;
	std::string		m_sLastError;
};

}

#endif

#endif