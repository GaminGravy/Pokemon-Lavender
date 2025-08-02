BeedrillGrotto_MapScripts::
	.byte 0


BeedrillGrotto_EventScript_Mega::
# 5 "data/maps/BeedrillGrotto/scripts.pory"
	lockall
# 6 "data/maps/BeedrillGrotto/scripts.pory"
	playmoncry SPECIES_BEEDRILL_MEGA, CRY_MODE_ENCOUNTER
# 7 "data/maps/BeedrillGrotto/scripts.pory"
	waitmoncry
# 8 "data/maps/BeedrillGrotto/scripts.pory"
	setflag FLAG_NOCATCH_0x027
# 9 "data/maps/BeedrillGrotto/scripts.pory"
	setwildbattle SPECIES_BEEDRILL_MEGA, 60, ITEM_BEEDRILLITE
# 10 "data/maps/BeedrillGrotto/scripts.pory"
	dowildbattle
# 11 "data/maps/BeedrillGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/BeedrillGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BeedrillGrotto_EventScript_Mega_2
BeedrillGrotto_EventScript_Mega_1:
# 15 "data/maps/BeedrillGrotto/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
	end

BeedrillGrotto_EventScript_Mega_2:
# 13 "data/maps/BeedrillGrotto/scripts.pory"
	call Defeated_Beedrill
	goto BeedrillGrotto_EventScript_Mega_1


Defeated_Beedrill::
# 20 "data/maps/BeedrillGrotto/scripts.pory"
	removeobject 1
# 21 "data/maps/BeedrillGrotto/scripts.pory"
	setflag FLAG_BEEDRILL_0x02A
# 22 "data/maps/BeedrillGrotto/scripts.pory"
	giveitem ITEM_BEEDRILLITE
# 23 "data/maps/BeedrillGrotto/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
# 24 "data/maps/BeedrillGrotto/scripts.pory"
	waitmessage
# 25 "data/maps/BeedrillGrotto/scripts.pory"
	releaseall
	end

