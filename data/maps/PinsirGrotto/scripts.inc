PinsirGrotto_MapScripts::
	.byte 0


PinsirGrotto_EventScript_Mega::
# 5 "data/maps/PinsirGrotto/scripts.pory"
	lockall
# 6 "data/maps/PinsirGrotto/scripts.pory"
	playmoncry SPECIES_PINSIR_MEGA, CRY_MODE_ENCOUNTER
# 7 "data/maps/PinsirGrotto/scripts.pory"
	waitmoncry
# 8 "data/maps/PinsirGrotto/scripts.pory"
	setflag FLAG_NOCATCH_0x027
# 9 "data/maps/PinsirGrotto/scripts.pory"
	setwildbattle SPECIES_PINSIR_MEGA, 60, ITEM_PINSIRITE
# 10 "data/maps/PinsirGrotto/scripts.pory"
	dowildbattle
# 11 "data/maps/PinsirGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/PinsirGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PinsirGrotto_EventScript_Mega_2
PinsirGrotto_EventScript_Mega_1:
# 15 "data/maps/PinsirGrotto/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
	end

PinsirGrotto_EventScript_Mega_2:
# 13 "data/maps/PinsirGrotto/scripts.pory"
	call Defeated_Pinsir
	goto PinsirGrotto_EventScript_Mega_1


Defeated_Pinsir::
# 20 "data/maps/PinsirGrotto/scripts.pory"
	removeobject 1
# 21 "data/maps/PinsirGrotto/scripts.pory"
	setflag FLAG_PINSIR_0x029
# 22 "data/maps/PinsirGrotto/scripts.pory"
	giveitem ITEM_PINSIRITE
# 23 "data/maps/PinsirGrotto/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
# 24 "data/maps/PinsirGrotto/scripts.pory"
	waitmessage
# 25 "data/maps/PinsirGrotto/scripts.pory"
	releaseall
	end

