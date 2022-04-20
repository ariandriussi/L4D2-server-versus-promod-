/**
 * vim: set ts=4 :
 * =============================================================================
 * Left 4 Downtown SourceMod Extension
 * Copyright (C) 2009 Igor "Downtown1" Smirnov.
 * =============================================================================
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, AlliedModders LLC gives you permission to link the
 * code of this program (as well as its derivative works) to "Half-Life 2," the
 * "Source Engine," the "SourcePawn JIT," and any Game MODs that run on software
 * by the Valve Corporation.  You must obey the GNU General Public License in
 * all respects for all other code used.  Additionally, AlliedModders LLC grants
 * this exception to all derivative works.  AlliedModders LLC defines further
 * exceptions, found in LICENSE.txt (as of this writing, version JULY-31-2007),
 * or <http://www.sourcemod.net/license.php>.
 *
 * Version: $Id$
 */
 
#if defined _healthbonus_included
 #endinput
#endif
#define _healthbonus_included

/**
 * @brief 	Called whenever CTerrorGameRules:RecomputeTeamScores(void) is invoked
 * @remarks	This is called whenever the scores on the scoreboard or end of round need to be computed.
 *		Usually called by CTerrorPlayer:RecalculateVersusScore(void)
 *
 * @return	Pl_Handled to block round scores from being computed.
*/
forward Action:L4D_OnRecomputeTeamScore();

/**
 * @brief 	Called whenever CGameRulesProxy:NotifyNetworkStateChanged(void) is invoked
 * @remarks	This is called whenever a networked property on the GameRules object is modified.
 *
 * @return	Pl_Handled to block clients from being notified of a change.
*/
forward Action:L4D_OnGameRulesNetworkChanged();

/**
 * @brief 	Called whenever CTerrorPlayer:RecalculateVersusScore(void) is invoked
 * @remarks	Calculates an individual survivors health bonus from their current health and status.
 *
 * @return	Pl_Handled to block health bonus from being calculated.
*/
forward Action:L4D_OnRecalculateVersusScore(client);

/**
 * @broken?
 * 
*/
forward Action:L4D_OnSetMapScores(&map, &scoreA, &scoreB);

/**
 * @brief 		Get the clients health bonus.
 * @remarks		Survivors health bonuses are 0 until CTerrorPlayer:RecalculateVersusScore(void) calculates it.
 *
 * @param client	Index of the client whose health bonus is to be returned.
 * @return		Int value of the survivors health bonus.
*/
native L4D_GetSurvivorHealthBonus(client);

/**
 * @brief 		Sets the clients health bonus.
 * @remarks		This doesn't modify the total health bonus until CTerrorGameRules:RecomputeTeamScores(void) is invoked,
			at which point the sum of each survivors health bonus is set and updated as the total health bonus.
 *
 * @param client	Index of the client whose health bonus is to be returned.
 * @param healthbonus	The integer value to be set as the survivors new health bonus
 * @param recompute	When set to 1 CTerrorGameRules:RecomputeTeamScores(void) is called after the health bonus has been set
 * @param 		1 always
*/
native L4D_SetSurvivorHealthBonus(client, healthbonus, recompute);
