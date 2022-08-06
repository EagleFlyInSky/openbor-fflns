/*
 * OpenBOR - http://www.LavaLit.com
 * -
 ----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include "List.h"

typedef enum levelOrderCommand
{
    CMD_LEVELORDER_BGICON = 1,
    CMD_LEVELORDER_BLENDFX,
    CMD_LEVELORDER_BRANCH,
    CMD_LEVELORDER_CANSAVE,
    CMD_LEVELORDER_CLEARBONUS,
    CMD_LEVELORDER_COMPLETEBG,
    CMD_LEVELORDER_CONTINUESCORE,
    CMD_LEVELORDER_CREDITS,
    CMD_LEVELORDER_CUSTFADE,
    CMD_LEVELORDER_DISABLEGAMEOVER,
    CMD_LEVELORDER_DISABLEHOF,
    CMD_LEVELORDER_E1ICON,
    CMD_LEVELORDER_E1LIFE,
    CMD_LEVELORDER_E1NAME,
    CMD_LEVELORDER_E2ICON,
    CMD_LEVELORDER_E2LIFE,
    CMD_LEVELORDER_E2NAME,
    CMD_LEVELORDER_E3ICON,
    CMD_LEVELORDER_E3LIFE,
    CMD_LEVELORDER_E3NAME,
    CMD_LEVELORDER_E4ICON,
    CMD_LEVELORDER_E4LIFE,
    CMD_LEVELORDER_E4NAME,
    CMD_LEVELORDER_END,
    CMD_LEVELORDER_EQUALAIRPAUSE,
    CMD_LEVELORDER_FILE,
    CMD_LEVELORDER_GRAVITY,
    CMD_LEVELORDER_HISCOREBG,
    CMD_LEVELORDER_IFCOMPLETE,
    CMD_LEVELORDER_LBARSIZE,
    CMD_LEVELORDER_LBARTEXT,
    CMD_LEVELORDER_LIFEBONUS,
    CMD_LEVELORDER_LIVES,
    CMD_LEVELORDER_LOADINGBG,
    CMD_LEVELORDER_LOADINGBG2,
    CMD_LEVELORDER_LOADINGMUSIC,
    CMD_LEVELORDER_MAXENTITIES,
    CMD_LEVELORDER_MAXPLAYERS,
    CMD_LEVELORDER_MAXWALLHEIGHT,
    CMD_LEVELORDER_MP1ICON,
    CMD_LEVELORDER_MP2ICON,
    CMD_LEVELORDER_MP3ICON,
    CMD_LEVELORDER_MP4ICON,
    CMD_LEVELORDER_MPBARSIZE,
    CMD_LEVELORDER_MPBARTEXT,
    CMD_LEVELORDER_MUSICOVERLAP,
    CMD_LEVELORDER_NEXT,
    CMD_LEVELORDER_NOSAME,
    CMD_LEVELORDER_NOSHARE,
    CMD_LEVELORDER_NOSHOWCOMPLETE,
    CMD_LEVELORDER_NOSLOWFX,
    CMD_LEVELORDER_OLBARSIZE,
    CMD_LEVELORDER_OLICON,
    CMD_LEVELORDER_P1ICON,
    CMD_LEVELORDER_P1ICONW,
    CMD_LEVELORDER_P1LIFE,
    CMD_LEVELORDER_P1LIFEN,
    CMD_LEVELORDER_P1LIFEX,
    CMD_LEVELORDER_P1MP,
    CMD_LEVELORDER_P1NAMEJ,
    CMD_LEVELORDER_P1RUSH,
    CMD_LEVELORDER_P1SCORE,
    CMD_LEVELORDER_P1SHOOT,
    CMD_LEVELORDER_P1SMENU,
    CMD_LEVELORDER_P2ICON,
    CMD_LEVELORDER_P2ICONW,
    CMD_LEVELORDER_P2LIFE,
    CMD_LEVELORDER_P2LIFEN,
    CMD_LEVELORDER_P2LIFEX,
    CMD_LEVELORDER_P2MP,
    CMD_LEVELORDER_P2NAMEJ,
    CMD_LEVELORDER_P2RUSH,
    CMD_LEVELORDER_P2SCORE,
    CMD_LEVELORDER_P2SHOOT,
    CMD_LEVELORDER_P2SMENU,
    CMD_LEVELORDER_P3ICON,
    CMD_LEVELORDER_P3ICONW,
    CMD_LEVELORDER_P3LIFE,
    CMD_LEVELORDER_P3LIFEN,
    CMD_LEVELORDER_P3LIFEX,
    CMD_LEVELORDER_P3MP,
    CMD_LEVELORDER_P3NAMEJ,
    CMD_LEVELORDER_P3RUSH,
    CMD_LEVELORDER_P3SCORE,
    CMD_LEVELORDER_P3SHOOT,
    CMD_LEVELORDER_P3SMENU,
    CMD_LEVELORDER_P4ICON,
    CMD_LEVELORDER_P4ICONW,
    CMD_LEVELORDER_P4LIFE,
    CMD_LEVELORDER_P4LIFEN,
    CMD_LEVELORDER_P4LIFEX,
    CMD_LEVELORDER_P4MP,
    CMD_LEVELORDER_P4NAMEJ,
    CMD_LEVELORDER_P4RUSH,
    CMD_LEVELORDER_P4SCORE,
    CMD_LEVELORDER_P4SHOOT,
    CMD_LEVELORDER_P4SMENU,
    CMD_LEVELORDER_PAUSEOFFSET,
    CMD_LEVELORDER_RUSH,
    CMD_LEVELORDER_RUSHBONUS,
    CMD_LEVELORDER_SCBONUSES,
    CMD_LEVELORDER_SCENE,
    CMD_LEVELORDER_SCOREFORMAT,
    CMD_LEVELORDER_SELECT,
    CMD_LEVELORDER_SET,
    CMD_LEVELORDER_SHOWCOMPLETE,
    CMD_LEVELORDER_SHOWRUSHBONUS,
    CMD_LEVELORDER_SINGLE,
    CMD_LEVELORDER_SKIPSELECT,
    CMD_LEVELORDER_SKIPTOSET,
    CMD_LEVELORDER_SPAWNOVERRIDE,
    CMD_LEVELORDER_TIMEICON,
    CMD_LEVELORDER_TIMELOC,
    CMD_LEVELORDER_TOTALSCORE,
    CMD_LEVELORDER_TYPEMP,
    CMD_LEVELORDER_UNLOCKBG,
    CMD_LEVELORDER_Z,
} levelOrderCommands;

typedef enum levelCommand
{
    CMD_LEVEL_2PHEALTH = 1,
    CMD_LEVEL_2PITEM,
    CMD_LEVEL_2PSPAWN,
    CMD_LEVEL_3PHEALTH,
    CMD_LEVEL_3PITEM,
    CMD_LEVEL_3PSPAWN,
    CMD_LEVEL_4PHEALTH,
    CMD_LEVEL_4PITEM,
    CMD_LEVEL_4PSPAWN,
    CMD_LEVEL_AGGRESSION,
    CMD_LEVEL_ALIAS,
    CMD_LEVEL_ALLOWSELECT,
    CMD_LEVEL_ALPHA,
    CMD_LEVEL_ALPHAMASK,
    CMD_LEVEL_AT,
    CMD_LEVEL_AT_SCRIPT,
    CMD_LEVEL_BACKGROUND,
    CMD_LEVEL_BASEMAP,
    CMD_LEVEL_BGLAYER,
    CMD_LEVEL_BGSPEED,
    CMD_LEVEL_BLOCKADE,
    CMD_LEVEL_BLOCKED,
    CMD_LEVEL_BOSS,
    CMD_LEVEL_BOSSMUSIC,
    CMD_LEVEL_CAMERAOFFSET,
    CMD_LEVEL_CAMERATYPE,
    CMD_LEVEL_CANJOIN,
    CMD_LEVEL_COORDS,
    CMD_LEVEL_CREDIT,
    CMD_LEVEL_DIRECTION,
    CMD_LEVEL_DYING,
    CMD_LEVEL_ENDHOLE,
    CMD_LEVEL_ENDLEVELSCRIPT,
    CMD_LEVEL_FACING,
    CMD_LEVEL_FGLAYER,
    CMD_LEVEL_FLIP,
    CMD_LEVEL_FRONTPANEL,
    CMD_LEVEL_GRAVITY,
    CMD_LEVEL_GROUP,
    CMD_LEVEL_HEALTH,
    CMD_LEVEL_HOLE,
    CMD_LEVEL_ITEM,
    CMD_LEVEL_ITEMALIAS,
    CMD_LEVEL_ITEMALPHA,
    CMD_LEVEL_ITEMHEALTH,
    CMD_LEVEL_ITEMMAP,
    CMD_LEVEL_ITEMTRANS,
    CMD_LEVEL_KEYSCRIPT,
    CMD_LEVEL_LAYER,
    CMD_LEVEL_LEVELSCRIPT,
    CMD_LEVEL_LIGHT,
    CMD_LEVEL_LOAD,
    CMD_LEVEL_LOADINGBG,
    CMD_LEVEL_MAP,
    CMD_LEVEL_MAXFALLSPEED,
    CMD_LEVEL_MAXTOSSSPEED,
    CMD_LEVEL_MIRROR,
    CMD_LEVEL_MP,
    CMD_LEVEL_MUSIC,
    CMD_LEVEL_MUSICFADE,
    CMD_LEVEL_NOFADEOUT,
    CMD_LEVEL_NOHIT,
    CMD_LEVEL_NOJOIN,
    CMD_LEVEL_NOLIFE,
    CMD_LEVEL_NOPAUSE,
    CMD_LEVEL_NORESET,
    CMD_LEVEL_NOSAVE,
    CMD_LEVEL_NOSCREENSHOT,
    CMD_LEVEL_NOSLOW,
    CMD_LEVEL_NOTIME,
    CMD_LEVEL_ORDER,
    CMD_LEVEL_PALETTE,
    CMD_LEVEL_PANEL,
    CMD_LEVEL_ROCK,
    CMD_LEVEL_SCORE,
    CMD_LEVEL_SCROLLSPEED,
    CMD_LEVEL_SCROLLX,
    CMD_LEVEL_SCROLLZ,
    CMD_LEVEL_SETPALETTE,
    CMD_LEVEL_SETTIME,
    CMD_LEVEL_SETWEAP,
    CMD_LEVEL_SHADOWALPHA,
    CMD_LEVEL_SHADOWCOLOR,
    CMD_LEVEL_SHADOWOPACITY,
    CMD_LEVEL_SPAWN,
    CMD_LEVEL_SPAWN1,
    CMD_LEVEL_SPAWN2,
    CMD_LEVEL_SPAWN3,
    CMD_LEVEL_SPAWN4,
    CMD_LEVEL_SPAWNSCRIPT,
    CMD_LEVEL_STAGENUMBER,
    CMD_LEVEL_TYPE,
    CMD_LEVEL_UPDATEDSCRIPT,
    CMD_LEVEL_UPDATESCRIPT,
    CMD_LEVEL_VBGSPEED,
    CMD_LEVEL_WAIT,
    CMD_LEVEL_WALL,
    CMD_LEVEL_WATER,
    CMD_LEVEL_WEAPON,
} levelCommands;

typedef enum modelCommand
{
    CMD_MODEL_AGGRESSION = 1,
    CMD_MODEL_AIATTACK,
    CMD_MODEL_AIMOVE,
    CMD_MODEL_AIRONLY,
    CMD_MODEL_ALPHA,
    CMD_MODEL_ALPHAMASK,
    CMD_MODEL_ALTERNATEPAL,
    CMD_MODEL_ANIM,
    CMD_MODEL_ANIMAL,
    CMD_MODEL_ANIMATIONSCRIPT,
    CMD_MODEL_ANIMHEIGHT,
    CMD_MODEL_ANTIGRAB,
    CMD_MODEL_ANTIGRAVITY,
    CMD_MODEL_AT_CMD,
    CMD_MODEL_AT_SCRIPT,
    CMD_MODEL_ATCHAIN,
    CMD_MODEL_COLLISION,
    CMD_MODEL_COLLISION_BLOCK_COST,                    // no_block
    CMD_MODEL_COLLISION_BLOCK_PENETRATE,               // guardcost
    CMD_MODEL_COLLISION_COUNTER,
    CMD_MODEL_COLLISION_DAMAGE_FORCE,
    CMD_MODEL_COLLISION_DAMAGE_LAND_FORCE,
    CMD_MODEL_COLLISION_DAMAGE_LAND_MODE,
    CMD_MODEL_COLLISION_DAMAGE_LETHAL_DISABLE,             // No_kill / Only fall to 1 HP.
    CMD_MODEL_COLLISION_DAMAGE_RECURSIVE_FORCE,
    CMD_MODEL_COLLISION_DAMAGE_RECURSIVE_INDEX,
    CMD_MODEL_COLLISION_DAMAGE_RECURSIVE_MODE,
    CMD_MODEL_COLLISION_DAMAGE_RECURSIVE_TIME_EXPIRE,
    CMD_MODEL_COLLISION_DAMAGE_RECURSIVE_TIME_RATE,
    CMD_MODEL_COLLISION_DAMAGE_STEAL,
    CMD_MODEL_COLLISION_DAMAGE_TYPE,
    CMD_MODEL_COLLISION_EFFECT_BLOCK_FLASH,
    CMD_MODEL_COLLISION_EFFECT_BLOCK_SOUND,
    CMD_MODEL_COLLISION_EFFECT_HIT_FLASH,
    CMD_MODEL_COLLISION_EFFECT_HIT_FLASH_DISABLE,
    CMD_MODEL_COLLISION_EFFECT_HIT_SOUND,
    CMD_MODEL_COLLISION_ETC, // 11 onwards
    CMD_MODEL_COLLISION_GROUND,                        // otg
    CMD_MODEL_COLLISION_INDEX,
    CMD_MODEL_COLLISION_MAP_INDEX,                     // Forcemap.
    CMD_MODEL_COLLISION_MAP_TIME,                      // Forcemap time.
    CMD_MODEL_COLLISION_POSITION_X,
    CMD_MODEL_COLLISION_POSITION_Y,
    CMD_MODEL_COLLISION_REACTION_FALL_FORCE,                    // Knockdown power
    CMD_MODEL_COLLISION_REACTION_FALL_VELOCITY_X,
    CMD_MODEL_COLLISION_REACTION_FALL_VELOCITY_Y,
    CMD_MODEL_COLLISION_REACTION_FALL_VELOCITY_Z,
    CMD_MODEL_COLLISION_REACTION_FREEZE_MODE,
    CMD_MODEL_COLLISION_REACTION_FREEZE_TIME,
    CMD_MODEL_COLLISION_REACTION_INVINCIBLE_TIME,
    CMD_MODEL_COLLISION_REACTION_PAIN_SKIP,            // No reflect / No pain
    CMD_MODEL_COLLISION_REACTION_PAUSE_TIME,           // Pause add
    CMD_MODEL_COLLISION_REACTION_REPOSITION_DIRECTION, // Force direction.
    CMD_MODEL_COLLISION_REACTION_REPOSITION_DISTANCE,  // Grabin distance
    CMD_MODEL_COLLISION_REACTION_REPOSITION_MODE,      // Grabin
    CMD_MODEL_COLLISION_SEAL_COST,
    CMD_MODEL_COLLISION_SEAL_TIME,
    CMD_MODEL_COLLISION_SIZE_X,
    CMD_MODEL_COLLISION_SIZE_Y,
    CMD_MODEL_COLLISION_SIZE_Z_1,
    CMD_MODEL_COLLISION_SIZE_Z_2,
    CMD_MODEL_COLLISION_STAYDOWN_RISE,
    CMD_MODEL_COLLISION_STAYDOWN_RISEATTACK,
    CMD_MODEL_COLLISION_TAG,
    CMD_MODEL_COLLISION1,
    CMD_MODEL_COLLISION10,
    CMD_MODEL_COLLISION2,
    CMD_MODEL_COLLISION3,
    CMD_MODEL_COLLISION4,
    CMD_MODEL_COLLISION5,
    CMD_MODEL_COLLISION6,
    CMD_MODEL_COLLISION7,
    CMD_MODEL_COLLISION8,
    CMD_MODEL_COLLISION9,
    CMD_MODEL_COLLISIONONE,
    CMD_MODEL_ATTACKTHROTTLE,
    CMD_MODEL_COLLISIONZ,
    CMD_MODEL_BACKPAIN,
    CMD_MODEL_BBOX,
    CMD_MODEL_BBOX_INDEX,
    CMD_MODEL_BBOX_POSITION_X,
    CMD_MODEL_BBOX_POSITION_Y,
    CMD_MODEL_BBOX_SIZE_X,
    CMD_MODEL_BBOX_SIZE_Y,
    CMD_MODEL_BBOX_SIZE_Z_1,
    CMD_MODEL_BBOX_SIZE_Z_2,
    CMD_MODEL_BBOXZ,
    CMD_MODEL_BFLASH,
    CMD_MODEL_BLAST,
    CMD_MODEL_BLOCKBACK,
    CMD_MODEL_BLOCKFLASH,
    CMD_MODEL_BLOCKFX,
    CMD_MODEL_BLOCKODDS,
    CMD_MODEL_BLOCKPAIN,
    CMD_MODEL_BOMB,
    CMD_MODEL_BOOMERANG,
    CMD_MODEL_BOOMERANGVALUES,
    CMD_MODEL_BOUNCE,
    CMD_MODEL_BOUNCEFACTOR,
    CMD_MODEL_BRANCH,
    CMD_MODEL_BURN,
    CMD_MODEL_CANCEL,
    CMD_MODEL_CANDAMAGE,
    CMD_MODEL_CANTGRAB,
    CMD_MODEL_CHARGERATE,
    CMD_MODEL_CHARGETIME,
    CMD_MODEL_COM,
    CMD_MODEL_COMBOSTYLE,
    CMD_MODEL_COUNTER,
    CMD_MODEL_COUNTERATTACK,
    CMD_MODEL_COUNTERRANGE,
    CMD_MODEL_CREDIT,
    CMD_MODEL_CUSTBOMB,
    CMD_MODEL_CUSTENTITY,
    CMD_MODEL_CUSTKNIFE,
    CMD_MODEL_CUSTBOOMERANG,
    CMD_MODEL_CUSTPBOMB,
    CMD_MODEL_CUSTPSHOT,
    CMD_MODEL_CUSTPSHOTNO,
    CMD_MODEL_CUSTPSHOTW,
    CMD_MODEL_CUSTSTAR,
    CMD_MODEL_DAMAGEONLANDING,
    CMD_MODEL_DEATH,
    CMD_MODEL_DEFENSE,
    CMD_MODEL_DELAY,
    CMD_MODEL_DIDBLOCKSCRIPT,
    CMD_MODEL_DIDHITSCRIPT,
    CMD_MODEL_DIESOUND,
    CMD_MODEL_DIVE,
    CMD_MODEL_DIVE1,
    CMD_MODEL_DIVE2,
    CMD_MODEL_DOT,
    CMD_MODEL_DRAWMETHOD,
    CMD_MODEL_DROPFRAME,
    CMD_MODEL_DROPV,
    CMD_MODEL_DUST,
    CMD_MODEL_EDELAY,
    CMD_MODEL_EDGERANGE,
    CMD_MODEL_ENERGYCOST,
    CMD_MODEL_ESCAPEHITS,
    CMD_MODEL_FACING,
    CMD_MODEL_FALLDIE,
    CMD_MODEL_FASTATTACK,
    CMD_MODEL_FIREB,
    CMD_MODEL_FLASH,
    CMD_MODEL_FLIPFRAME,
    CMD_MODEL_FMAP,
    CMD_MODEL_FOLLOWANIM,
    CMD_MODEL_FOLLOWCOND,
    CMD_MODEL_FORCEDIRECTION,
    CMD_MODEL_FORCEMAP,
    CMD_MODEL_FRAME,
    CMD_MODEL_FREEZE,
    CMD_MODEL_FSHADOW,
    CMD_MODEL_GFXSHADOW,
    CMD_MODEL_GLOBALMAP,
    CMD_MODEL_GRABBACK,
    CMD_MODEL_GRABDISTANCE,
    CMD_MODEL_GRABFINISH,
    CMD_MODEL_GRABFLIP,
    CMD_MODEL_GRABFORCE,
    CMD_MODEL_GRABIN,
    CMD_MODEL_GRABTURN,
    CMD_MODEL_GRABWALK,
    CMD_MODEL_GUARDCOST,
    CMD_MODEL_GUARDPOINTS,
    CMD_MODEL_GUARDRATE,
    CMD_MODEL_HEALTH,
    CMD_MODEL_HEIGHT,
    CMD_MODEL_HITENEMY,
    CMD_MODEL_HITFLASH,
    CMD_MODEL_HITFX,
    CMD_MODEL_HITWALLTYPE,
    CMD_MODEL_HITZ,
    CMD_MODEL_HMAP,
    CMD_MODEL_HOLDBLOCK,
    CMD_MODEL_HOSTILE,
    CMD_MODEL_ICON,
    CMD_MODEL_ICONDIE,
    CMD_MODEL_ICONGET,
    CMD_MODEL_ICONMPHALF,
    CMD_MODEL_ICONMPHIGH,
    CMD_MODEL_ICONMPLOW,
    CMD_MODEL_ICONPAIN,
    CMD_MODEL_ICONPOSITION,
    CMD_MODEL_ICONW,
    CMD_MODEL_IDLE,
    CMD_MODEL_IGNOREATTACKID,
    CMD_MODEL_IGNOREPROJECTILEWALLCOLLISION,
    CMD_MODEL_INHOLESCRIPT,
    CMD_MODEL_INSTANTITEMDEATH,
    CMD_MODEL_ITEMBOX,
    CMD_MODEL_JUGGLECOST,
    CMD_MODEL_JUGGLEPOINTS,
    CMD_MODEL_JUMPFRAME,
    CMD_MODEL_JUMPHEIGHT,
    CMD_MODEL_JUMPMOVE,
    CMD_MODEL_JUMPSPEED,
    CMD_MODEL_JUMPSPEEDF,
    CMD_MODEL_KEYSCRIPT,
    CMD_MODEL_KNIFE,
    CMD_MODEL_KNOCKDOWNCOUNT,
    CMD_MODEL_KOMAP,
    CMD_MODEL_LANDFRAME,
    CMD_MODEL_LIFEBARSTATUS,
    CMD_MODEL_LIFEPOSITION,
    CMD_MODEL_LIFESPAN,
    CMD_MODEL_LOAD,
    CMD_MODEL_LOOP,
    CMD_MODEL_LOSE,
    CMD_MODEL_MAKEINV,
    CMD_MODEL_MODELFLAG,
    CMD_MODEL_MOVE,
    CMD_MODEL_MOVEA,
    CMD_MODEL_MOVEZ,
    CMD_MODEL_MP,
    CMD_MODEL_MPCOST,
    CMD_MODEL_MPONLY,
    CMD_MODEL_MPRATE,
    CMD_MODEL_MPSET,
    CMD_MODEL_NAME,
    CMD_MODEL_NAMEPOSITION,
    CMD_MODEL_NO_ADJUST_BASE,
    CMD_MODEL_NOATFLASH,
    CMD_MODEL_NODIEBLINK,
    CMD_MODEL_NODRAWMETHOD,
    CMD_MODEL_NODROP,
    CMD_MODEL_NOEXPLODE,
    CMD_MODEL_NOGRAB,
    CMD_MODEL_NOHITHEAD,
    CMD_MODEL_NOKILL,
    CMD_MODEL_NOLIFE,
    CMD_MODEL_NOMOVE,
    CMD_MODEL_NOPAIN,
    CMD_MODEL_NOPASSIVEBLOCK,
    CMD_MODEL_NOQUAKE,
    CMD_MODEL_NOREFLECT,
    CMD_MODEL_NOTGRAB,
    CMD_MODEL_OFFENSE,
    CMD_MODEL_OFFSCREENKILL,
    CMD_MODEL_ONAF,
    CMD_MODEL_OFFSET,
    CMD_MODEL_ONBLOCKASCRIPT,
    CMD_MODEL_ONBLOCKOSCRIPT,
    CMD_MODEL_ONBLOCKPSCRIPT,
    CMD_MODEL_ONBLOCKSSCRIPT,
    CMD_MODEL_ONBLOCKWSCRIPT,
    CMD_MODEL_ONBLOCKZSCRIPT,
    CMD_MODEL_ONDEATHSCRIPT,
    CMD_MODEL_ONDOATTACKSCRIPT,
    CMD_MODEL_ONDRAWSCRIPT,
    CMD_MODEL_ONFALLSCRIPT,
    CMD_MODEL_ONKILLSCRIPT,
    CMD_MODEL_ONMODELCOPYSCRIPT,
    CMD_MODEL_ONMOVEASCRIPT,
    CMD_MODEL_ONMOVEXSCRIPT,
    CMD_MODEL_ONMOVEZSCRIPT,
    CMD_MODEL_ONPAINSCRIPT,
    CMD_MODEL_ONSPAWNSCRIPT,
    CMD_MODEL_OTG,
    CMD_MODEL_PAINGRAB,
    CMD_MODEL_PALETTE,
    CMD_MODEL_PARROW,
    CMD_MODEL_PARROW2,
    CMD_MODEL_PARROW3,
    CMD_MODEL_PARROW4,
    CMD_MODEL_PATHFINDSTEP,
    CMD_MODEL_PBOMBFRAME,
    CMD_MODEL_PLATFORM,
    CMD_MODEL_PLAYBOMB,
    CMD_MODEL_PLAYSHOT,
    CMD_MODEL_PLAYSHOTNO,
    CMD_MODEL_PLAYSHOTW,
    CMD_MODEL_PRIORITY,
    CMD_MODEL_PROJECT,
    CMD_MODEL_PROJECTILEHIT,
    CMD_MODEL_PSHOTFRAME,
    CMD_MODEL_PSHOTFRAMENO,
    CMD_MODEL_PSHOTFRAMEW,
    CMD_MODEL_QUAKEFRAME,
    CMD_MODEL_RANGE,
    CMD_MODEL_RANGEA,
    CMD_MODEL_RANGEB,
    CMD_MODEL_RANGEZ,
    CMD_MODEL_RELOAD,
    CMD_MODEL_REMAP,
    CMD_MODEL_REMOVE,
    CMD_MODEL_RIDER,
    CMD_MODEL_RISEATTACKTYPE,
    CMD_MODEL_RISEINV,
    CMD_MODEL_RISETIME,
    CMD_MODEL_RUNNING,
    CMD_MODEL_RUNNING_CONTINUE,
    CMD_MODEL_RUNNING_JUMP_VELOCITY_X,
    CMD_MODEL_RUNNING_JUMP_VELOCITY_Y,
    CMD_MODEL_RUNNING_SPEED,
    CMD_MODEL_RUNNING_Z_MOVE,
    CMD_MODEL_SCORE,
    CMD_MODEL_SCRIPT,
    CMD_MODEL_SCROLL,
    CMD_MODEL_SEAL,
    CMD_MODEL_SECRET,
	CMD_MODEL_SELECTCOL,
    CMD_MODEL_SETA,
    CMD_MODEL_SETLAYER,
    CMD_MODEL_SHADOW,
    CMD_MODEL_SHADOWCOORDS,
    CMD_MODEL_SHOCK,
    CMD_MODEL_SHOOTFRAME,
    CMD_MODEL_SHOOTNUM,
    CMD_MODEL_SLEEPWAIT,
    CMD_MODEL_SMARTBOMB,
    CMD_MODEL_SOUND,
    CMD_MODEL_SPAWNFRAME,
    CMD_MODEL_SPEED,
    CMD_MODEL_SPEEDF,
    CMD_MODEL_STAR,
    CMD_MODEL_STAR_VELOCITY,
    CMD_MODEL_STATS,
    CMD_MODEL_STAYDOWN,
    CMD_MODEL_STEAL,
    CMD_MODEL_STEALTH,
    CMD_MODEL_STUN,
    CMD_MODEL_SUBCLASS,
    CMD_MODEL_SUBENTITY,
    CMD_MODEL_SUBJECT_TO_BASEMAP,
    CMD_MODEL_SUBJECT_TO_GRAVITY,
    CMD_MODEL_SUBJECT_TO_HOLE,
    CMD_MODEL_SUBJECT_TO_MAXZ,
    CMD_MODEL_SUBJECT_TO_MINZ,
    CMD_MODEL_SUBJECT_TO_OBSTACLE,
    CMD_MODEL_SUBJECT_TO_PLATFORM,
    CMD_MODEL_SUBJECT_TO_SCREEN,
    CMD_MODEL_SUBJECT_TO_WALL,
    CMD_MODEL_SUBTYPE,
    CMD_MODEL_SUMMONFRAME,
    CMD_MODEL_SUMMONKILL,
    CMD_MODEL_SYNC,
    CMD_MODEL_TAKEDAMAGESCRIPT,
    CMD_MODEL_THINKSCRIPT,
    CMD_MODEL_THOLD,
    CMD_MODEL_THROW,
    CMD_MODEL_THROWDAMAGE,
    CMD_MODEL_THROWFRAME,
    CMD_MODEL_THROWFRAMEWAIT,
    CMD_MODEL_TOFLIP,
    CMD_MODEL_TOSSFRAME,
    CMD_MODEL_TURNDELAY,
    CMD_MODEL_TYPE,
    CMD_MODEL_TYPESHOT,
    CMD_MODEL_UNSUMMONFRAME,
    CMD_MODEL_WALKOFFMOVE,
    CMD_MODEL_WEAPLOSS,
    CMD_MODEL_WEAPNUM,
    CMD_MODEL_WEAPONFRAME,
    CMD_MODEL_WEAPONS,

} modelCommands;

typedef enum
{
    CMD_MODELSTXT_AJSPECIAL = 1,
    CMD_MODELSTXT_AUTOLAND,
    CMD_MODELSTXT_BLOCKRATIO,
    CMD_MODELSTXT_COLOURSELECT,
    CMD_MODELSTXT_COMBODELAY,
    CMD_MODELSTXT_CREDSCORE,
    CMD_MODELSTXT_DEBUG_ANAF,
    CMD_MODELSTXT_DEBUG_GNAF,
    CMD_MODELSTXT_DEBUG_MAXNA,
    CMD_MODELSTXT_DEBUG_MINNA,
    CMD_MODELSTXT_DEBUG_MNAF,
    CMD_MODELSTXT_DEBUG_NAD,
    CMD_MODELSTXT_DEBUG_OSNAF,
    CMD_MODELSTXT_DROPV,
    CMD_MODELSTXT_GRABDISTANCE,
    CMD_MODELSTXT_JUMPHEIGHT,
    CMD_MODELSTXT_JUMPSPEED,
    CMD_MODELSTXT_KNOW,
    CMD_MODELSTXT_LIFESCORE,
    CMD_MODELSTXT_LOAD,
    CMD_MODELSTXT_MAX_COLLISIONS,
    CMD_MODELSTXT_MAXATTACKS,
    CMD_MODELSTXT_MAXATTACKTYPES,
    CMD_MODELSTXT_MAXBACKWALKS,
    CMD_MODELSTXT_MAXDOWNS,
    CMD_MODELSTXT_MAXFOLLOWS,
    CMD_MODELSTXT_MAXFREESPECIALS,
    CMD_MODELSTXT_MAXIDLES,
    CMD_MODELSTXT_MAXUPS,
    CMD_MODELSTXT_MAXWALKS,
    CMD_MODELSTXT_MPBLOCK,
    CMD_MODELSTXT_MUSIC,
    CMD_MODELSTXT_NOAIRCANCEL,
    CMD_MODELSTXT_NOCHEATS,
    CMD_MODELSTXT_NOCHIPDEATH,
    CMD_MODELSTXT_NOCOST,
    CMD_MODELSTXT_NODEBUG,
    CMD_MODELSTXT_NODROPEN,
    CMD_MODELSTXT_NODROPSPAWN,
    CMD_MODELSTXT_NOLOST,
    CMD_MODELSTXT_NOMAXRUSHRESET,
    CMD_MODELSTXT_SPDIRECTION,
    CMD_MODELSTXT_VERSUSDAMAGE,
    CMD_MODELSTXT_THE_END,
} modelstxtCommands;

void freeCommandList(List *list);

List *createModelCommandList(void);
modelCommands getModelCommand(List *list, char *usercommand);

List *createModelstxtCommandList(void);
modelstxtCommands getModelstxtCommand(List *list, char *usercommand);

List *createLevelCommandList(void);
levelCommands getLevelCommand(List *list, char *usercommand);

List *createLevelOrderCommandList(void);
levelOrderCommands getLevelOrderCommand(List *list, char *usercommand);

#endif

