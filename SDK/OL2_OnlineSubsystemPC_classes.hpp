#pragma once

// Outlast2 (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemPC.OnlineSubsystemPC
// 0x02B8 (0x04D0 - 0x0218)
class UOnlineSubsystemPC : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0218(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemPC.OnlineSubsystemPC");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
