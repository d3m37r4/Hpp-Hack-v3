#pragma once

#include "Main.h"

namespace Engine
{
	int ResetHUD ( const char *pszName, int iSize, void *pbuf );
	int SetFOV ( const char *pszName, int iSize, void *pbuf );
	int TeamInfo ( const char *pszName, int iSize, void *pbuf );
	int CurWeapon ( const char *pszName, int iSize, void *pbuf );
	int DeathMsg ( const char *pszName, int iSize, void *pbuf );

	extern int PlayerTeam[33];

	extern pfnUserMsgHook pResetHUD;
	extern pfnUserMsgHook pSetFOV;
	extern pfnUserMsgHook pTeamInfo;
	extern pfnUserMsgHook pCurWeapon;
	extern pfnUserMsgHook pDeathMsg;
}