
//Подключённые типы для интелекта

//Игрок
#include "Loc_ai\types\LAi_player.c"
//Офицер
#include "Loc_ai\types\LAi_officer.c"
//Горожанин
#include "Loc_ai\types\LAi_citizen.c"
//Охраник
#include "Loc_ai\types\LAi_guardian.c"
//Патруль
#include "Loc_ai\types\LAi_patrol.c"
//Воин
#include "Loc_ai\types\LAi_warrior.c"
//Торговец
#include "Loc_ai\types\LAi_merchant.c"
//Стоячий человек
#include "Loc_ai\types\LAi_stay.c"
//Сидячий человек
#include "Loc_ai\types\LAi_sit.c"
//Бармен
#include "Loc_ai\types\LAi_barman.c"
//Официантка
#include "Loc_ai\types\LAi_waitress.c"
//Нищий
#include "Loc_ai\types\LAi_poor.c"
//Губернатор, сидячий на месте
#include "Loc_ai\types\LAi_huber.c"
//Губернатор, ходячий по помещению
#include "Loc_ai\types\LAi_huberstay.c"
//Священик
#include "Loc_ai\types\LAi_priest.c"
//Актёр
#include "Loc_ai\types\LAi_actor.c"
//Обезьяна-монстр
#include "Loc_ai\types\LAi_monkey.c"


//------------------------------------------------------------------------------------------
//Player
//------------------------------------------------------------------------------------------

//Установить персонажу тип игрока
void LAi_SetPlayerType(aref chr)
{
	//Тип персонажа по умолчанию
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	//Шаблон специальный
	LAi_type_player_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_PLAYER);
}

//------------------------------------------------------------------------------------------
//Officer
//------------------------------------------------------------------------------------------

//Установить персонажу тип офицера
void LAi_SetOfficerType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_officer_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_PLAYER);
}

//------------------------------------------------------------------------------------------
//Citizen
//------------------------------------------------------------------------------------------

//Установить персонажу тип горожанина
void LAi_SetCitizenType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_citizen_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип горожанина, без перемещения в группу
void LAi_SetCitizenTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_citizen_Init(chr);
}

//------------------------------------------------------------------------------------------
//Guardian
//------------------------------------------------------------------------------------------

//Установить персонажу тип стражника
void LAi_SetGuardianType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_guardian_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_GUARDS);
}

//Установить персонажу тип стражника, без перемещения в группу
void LAi_SetGuardianTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_guardian_Init(chr);
}

//------------------------------------------------------------------------------------------
//Patrol
//------------------------------------------------------------------------------------------

//Установить персонажу тип патруля
void LAi_SetPatrolType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_SetPatrolTypeNoGroup(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_GUARDS);
}

//Установить персонажу тип патруля, без перемещения в группу
void LAi_SetPatrolTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_patrol_Init(chr);
}

//------------------------------------------------------------------------------------------
//Warrior
//------------------------------------------------------------------------------------------

//Установить персонажу тип война
void LAi_SetWarriorType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_warrior_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_GUARDS);
}

//Установить персонажу тип война, без перемещения в группу
void LAi_SetWarriorTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_warrior_Init(chr);
}


//------------------------------------------------------------------------------------------
//Merchant
//------------------------------------------------------------------------------------------

//Установить персонажу тип торговца
void LAi_SetMerchantType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_merchant_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип торговца, без перемещения в группу
void LAi_SetMerchantTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_merchant_Init(chr);
}

//------------------------------------------------------------------------------------------
//Stay
//------------------------------------------------------------------------------------------

//Установить персонажу тип стоячего
void LAi_SetStayType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_stay_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип стоячего, без перемещения в группу
void LAi_SetStayTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_stay_Init(chr);
}

//------------------------------------------------------------------------------------------
//Sit
//------------------------------------------------------------------------------------------

//Установить персонажу тип сидячего
void LAi_SetSitType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_sit_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип сидячего, без перемещения в группу
void LAi_SetSitTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_sit_Init(chr);
}


//------------------------------------------------------------------------------------------
//Barmen
//------------------------------------------------------------------------------------------

//Установить персонажу тип бармена (only man)
void LAi_SetBarmanType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_barman_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип официантки, без перемещения в группу (only man)
void LAi_SetBarmanTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_barman_Init(chr);
}

//------------------------------------------------------------------------------------------
//Waitress
//------------------------------------------------------------------------------------------

//Установить персонажу тип официантки (only woman)
void LAi_SetWaitressType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_waitress_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип официантки, без перемещения в группу (only woman)
void LAi_SetWaitressTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_waitress_Init(chr);
}


//------------------------------------------------------------------------------------------
//Poor
//------------------------------------------------------------------------------------------

//Установить персонажу тип бедника
void LAi_SetPoorType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_poor_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип бедника, без перемещения в группу
void LAi_SetPoorTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_poor_Init(chr);
}

//------------------------------------------------------------------------------------------
//Huber
//------------------------------------------------------------------------------------------

//Установить персонажу тип губернатора
void LAi_SetHuberType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_huber_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_HUBER);
}

//Установить персонажу тип губернатора, без перемещения в группу
void LAi_SetHuberTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_huber_Init(chr);
}

//------------------------------------------------------------------------------------------
//HuberStay
//------------------------------------------------------------------------------------------

//Установить персонажу тип губернатора, ходячего по комнате
void LAi_SetHuberStayType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_huberstay_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_HUBER);
}

//Установить персонажу тип губернатора, ходячего по комнате, без перемещения в группу
void LAi_SetHuberStayTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_huberstay_Init(chr);
}

//------------------------------------------------------------------------------------------
//Priest
//------------------------------------------------------------------------------------------

//Установить персонажу тип священика
void LAi_SetPriestType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_huberstay_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_DEFAULT_GROUP);
}

//Установить персонажу тип священика, без перемещения в группу
void LAi_SetPriestTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_huberstay_Init(chr);
}


//------------------------------------------------------------------------------------------
//Actor
//------------------------------------------------------------------------------------------

//Установить персонажу тип актёра
void LAi_SetActorType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_actor_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_ACTOR);
}

//Установить персонажу тип актёра, без перемещения в группу
void LAi_SetActorTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_actor_Init(chr);
}

//------------------------------------------------------------------------------------------
//Monkey
//------------------------------------------------------------------------------------------

//Установить персонажу тип обезьяны-монстра
void LAi_SetMonkeyType(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_monkey_Init(chr);
	LAi_group_MoveCharacter(chr, LAI_GROUP_MONSTERS);
}

//Установить персонажу тип обезьяны-монстра, без перемещения в группу
void LAi_SetMonkeyTypeNoGroup(aref chr)
{
	chr.chr_ai.type = LAI_DEFAULT_TYPE;
	LAi_type_monkey_Init(chr);
}

