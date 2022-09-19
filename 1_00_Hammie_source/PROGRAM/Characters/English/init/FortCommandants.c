
int CreateFortCommandants(int n)
{
	ref ch;

	makeref(ch,Characters[n]);		//Командир гарнизона на Редмонде
	ch.name 	= "Redmond Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "Redmond Commander";
	ch.model	= "Soldier_eng3";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location = "Redmond";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort1";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "None";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "8";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.ship.type = SHIP_FORT;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;

	makeref(ch,Characters[n]);		//Командир гарнизона на Оксбэе
	ch.name 	= "Oxbay Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "Oxbay Commander";
	ch.model	= "Soldier_eng2";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location	= "none";
	ch.location = "Oxbay";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort2";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "None";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "8";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.ship.type = SHIP_FORT;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;

	makeref(ch,Characters[n]);		//Командир гарнизона на Гринфорде
	ch.name 	= "Greenford Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "Greenford Commander";
	ch.model	= "Soldier_eng6";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location = "Oxbay";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort1";
	ch.Dialog.Filename = "Greenford Commander_dialog.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "None";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "8";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.ship.type = SHIP_FORT;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	ch.greeting = "Gr_Greenford Commander";
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;


	makeref(ch,Characters[n]);			// Командир Гарнизона на Фале де Флер
	ch.name 	= "FalaiseDeFleur Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "FalaiseDeFleur Commander";
	ch.model = "Soldier_fra";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location = "FalaiseDeFleur";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort1";
	ch.Dialog.Filename = "FalaiseDeFleur Commander_dialog.c";
	ch.nation = FRANCE;
	ch.rank 	= 1;
	ch.reputation = "65";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "7";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "4";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.money.quest = "0";
	ch.quest.meeting = "0";
	ch.ship.type = SHIP_FORT;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;

	makeref(ch,Characters[n]);			// Командир Гарнизона на Консейсао
	ch.name 	= "Conceicao Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "Conceicao Commander";
	ch.model = "soldier_por";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location = "Conceicao";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort1";
	ch.Dialog.Filename = "FalaiseDeFleur Commander_dialog.c";
	ch.nation = PORTUGAL;
	ch.rank 	= 1;
	ch.reputation = "65";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "7";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "4";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.money.quest = "0";
	ch.quest.meeting = "0";
	ch.ship.type = SHIP_FORT;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;

	makeref(ch,Characters[n]);			// Командир Гарнизона на Дувезене
	ch.name 	= "Douwesen Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "Douwesen Commander";
	ch.model = "Soldier_hol";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location = "Douwesen";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort1";
	ch.Dialog.Filename = "FalaiseDeFleur Commander_dialog.c";
	ch.nation = HOLLAND;
	ch.rank 	= 1;
	ch.reputation = "65";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "7";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "4";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.money.quest = "0";
	ch.quest.meeting = "0";
	ch.ship.type = SHIP_FORT;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;

	makeref(ch,Characters[n]);			// Командир Гарнизона на Исла Муэлье
	ch.name 	= "Isla Muelle Fort";
	ch.lastname 	= "Commandant";
	ch.id		= "IslaMuelle Commander";
	ch.model = "soldier_spa";
	ch.sex = "man";
	ch.act.type = "Soldier";
	ch.location = "IslaMuelle";
	ch.location.group = "reload";
	ch.location.locator = "reload_fort1";
	ch.Dialog.Filename = "FalaiseDeFleur Commander_dialog.c";
	ch.nation = SPAIN;
	ch.rank 	= 1;
	ch.reputation = "65";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "9";
	ch.skill.Cannons = "7";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "4";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.money.quest = "0";
	ch.quest.meeting = "0";
	ch.ship.type = SHIP_FORT;
	ch.ship.crew.quantity = 500;
	ch.Fort.Cannons.Charge.Type = GOOD_BOMBS;
	ch.Fort.Cannons.Type.1 = CANNON_TYPE_CULVERINE_LBS24;
	ch.Fort.Cannons.Type.2 = CANNON_TYPE_CANNON_LBS32;
	LAi_SetHP(ch, 100.0, 100.0);
	n = n + 1;


	return n;
}
