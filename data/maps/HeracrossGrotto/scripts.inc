HeracrossGrotto_MapScripts::
	.byte 0


HeracrossGrotto_EventScript_Mega::
# 6 "data/maps/HeracrossGrotto/scripts.pory"
	lockall
# 7 "data/maps/HeracrossGrotto/scripts.pory"
	playmoncry SPECIES_HERACROSS_MEGA, CRY_MODE_ENCOUNTER
# 8 "data/maps/HeracrossGrotto/scripts.pory"
	waitmoncry
# 9 "data/maps/HeracrossGrotto/scripts.pory"
	setflag FLAG_NOCATCH_0x027
# 10 "data/maps/HeracrossGrotto/scripts.pory"
	setwildbattle SPECIES_HERACROSS_MEGA, 60, ITEM_HERACRONITE
# 11 "data/maps/HeracrossGrotto/scripts.pory"
	dowildbattle
# 12 "data/maps/HeracrossGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/HeracrossGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HeracrossGrotto_EventScript_Mega_2
HeracrossGrotto_EventScript_Mega_1:
# 16 "data/maps/HeracrossGrotto/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
	end

HeracrossGrotto_EventScript_Mega_2:
# 14 "data/maps/HeracrossGrotto/scripts.pory"
	call Defeated_Heracross
	goto HeracrossGrotto_EventScript_Mega_1


Defeated_Heracross::
# 21 "data/maps/HeracrossGrotto/scripts.pory"
	removeobject 1
# 22 "data/maps/HeracrossGrotto/scripts.pory"
	setflag FLAG_HERACROSS_0x028
# 23 "data/maps/HeracrossGrotto/scripts.pory"
	giveitem ITEM_HERACRONITE
# 24 "data/maps/HeracrossGrotto/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
# 25 "data/maps/HeracrossGrotto/scripts.pory"
	waitmessage
# 26 "data/maps/HeracrossGrotto/scripts.pory"
	releaseall
	end

