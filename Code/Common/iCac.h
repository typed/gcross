#ifndef cross_common_icac_h
#define cross_common_icac_h

#include "Common.h"
#include <string>

namespace cross
{

class iCac
{
public:
	static iCac* Create();
	virtual void Release() = 0;
	virtual bool LoadFromFile(const std::string&) = 0;
	virtual bool Load(const std::string&) = 0;
	virtual bool Load(cpvd, ui32) = 0;
	virtual std::string Save() = 0;
	virtual void Set(std::string vKey, std::string vValue) = 0;
	virtual bool Get(std::string vKey, std::string& vValue) = 0;
	virtual bool Del(std::string vKey) = 0;
	virtual void SetUI32(ui32 vKey, std::string vValue) = 0;
	virtual bool GetUI32(ui32 vKey, std::string& vValue) = 0;
	virtual bool DelUI32(ui32 vKey) = 0;
};

}

#endif
