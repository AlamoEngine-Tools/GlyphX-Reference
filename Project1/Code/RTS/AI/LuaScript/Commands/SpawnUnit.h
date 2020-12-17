// $Id: //depot/Projects/StarWars_Steam/FOC/Code/RTS/AI/LuaScript/Commands/SpawnUnit.h#1 $
///////////////////////////////////////////////////////////////////////////////////////////////////
//
// (C) Petroglyph Games, Inc.
//
//
//  *****           **                          *                   *
//  *   **          *                           *                   *
//  *    *          *                           *                   *
//  *    *          *     *                 *   *          *        *
//  *   *     *** ******  * **  ****      ***   * *      * *****    * ***
//  *  **    *  *   *     **   *   **   **  *   *  *    * **   **   **   *
//  ***     *****   *     *   *     *  *    *   *  *   **  *    *   *    *
//  *       *       *     *   *     *  *    *   *   *  *   *    *   *    *
//  *       *       *     *   *     *  *    *   *   * **   *   *    *    *
//  *       **       *    *   **   *   **   *   *    **    *  *     *   *
// **        ****     **  *    ****     *****   *    **    ***      *   *
//                                          *        *     *
//                                          *        *     *
//                                          *       *      *
//                                      *  *        *      *
//                                      ****       *       *
//
///////////////////////////////////////////////////////////////////////////////////////////////////
// C O N F I D E N T I A L   S O U R C E   C O D E -- D O   N O T   D I S T R I B U T E
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//              $File: //depot/Projects/StarWars_Steam/FOC/Code/RTS/AI/LuaScript/Commands/SpawnUnit.h $
//
//    Original Author: Brian Hayes
//
//            $Author: Brian_Hayes $
//
//            $Change: 637819 $
//
//          $DateTime: 2017/03/22 10:16:16 $
//
//          $Revision: #1 $
//
///////////////////////////////////////////////////////////////////////////////////////////////////
/** @file */

#ifndef __SPAWN_UNIT_H___
#define __SPAWN_UNIT_H___

#include "AI/LuaScript/LuaRTSUtilities.h"

class LuaSpawnUnitCommandClass : public LuaUserVar
{
public:
	PG_DECLARE_RTTI();
	virtual LuaTable* Function_Call(LuaScriptClass *script, LuaTable *params);
	LuaTable *Galactic_Spawn_Unit(LuaScriptClass *script, LuaTable *params);
};

class LuaCreateGenericObjectClass : public LuaUserVar
{
public:
	PG_DECLARE_RTTI();
	virtual LuaTable *Function_Call(LuaScriptClass *script, LuaTable *params);
};

#endif //__SPAWN_UNIT_H___