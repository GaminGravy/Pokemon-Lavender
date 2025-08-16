CaveofAwakening_MapScripts::
	.byte 0


Echoes_of_Evolution_Trigger::
# 4 "data/maps/CaveofAwakening/scripts.pory"
	lockall
# 5 "data/maps/CaveofAwakening/scripts.pory"
	applymovement 1, Trigger1Movement
# 6 "data/maps/CaveofAwakening/scripts.pory"
	waitmovement 0
# 7 "data/maps/CaveofAwakening/scripts.pory"
	msgbox Echoes_of_Evolution_Trigger_Text_0, MSGBOX_YESNO
# 12 "data/maps/CaveofAwakening/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Echoes_of_Evolution_Trigger_2
Echoes_of_Evolution_Trigger_1:
# 15 "data/maps/CaveofAwakening/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Echoes_of_Evolution_Trigger_5
Echoes_of_Evolution_Trigger_4:
	end

Echoes_of_Evolution_Trigger_2:
# 13 "data/maps/CaveofAwakening/scripts.pory"
	call Echoes_of_Evolution_Start
	goto Echoes_of_Evolution_Trigger_1

Echoes_of_Evolution_Trigger_5:
# 16 "data/maps/CaveofAwakening/scripts.pory"
	call Echoes_of_Evolution_Dont_Start
	goto Echoes_of_Evolution_Trigger_4


Echoes_of_Evolution_Start::
# 22 "data/maps/CaveofAwakening/scripts.pory"
	msgbox Echoes_of_Evolution_Start_Text_0
# 23 "data/maps/CaveofAwakening/scripts.pory"
	setflag FLAG_ECHOES_of_EVOLUTION_0x02D
# 24 "data/maps/CaveofAwakening/scripts.pory"
	startquest QUEST_5
# 25 "data/maps/CaveofAwakening/scripts.pory"
	releaseall
	return


Echoes_of_Evolution_Dont_Start::
# 29 "data/maps/CaveofAwakening/scripts.pory"
	msgbox Echoes_of_Evolution_Dont_Start_Text_0
# 32 "data/maps/CaveofAwakening/scripts.pory"
	releaseall
	return


# 35 "data/maps/CaveofAwakening/scripts.pory"
Trigger1Movement:
# 36 "data/maps/CaveofAwakening/scripts.pory"
	walk_right
# 36 "data/maps/CaveofAwakening/scripts.pory"
	walk_right
# 36 "data/maps/CaveofAwakening/scripts.pory"
	walk_right
	step_end

Echoes_of_Evolution_Restart::
# 40 "data/maps/CaveofAwakening/scripts.pory"
	lockall
# 41 "data/maps/CaveofAwakening/scripts.pory"
	msgbox Echoes_of_Evolution_Restart_Text_0, MSGBOX_YESNO
# 42 "data/maps/CaveofAwakening/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Echoes_of_Evolution_Restart_2
Echoes_of_Evolution_Restart_1:
# 45 "data/maps/CaveofAwakening/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Echoes_of_Evolution_Restart_5
Echoes_of_Evolution_Restart_4:
	end

Echoes_of_Evolution_Restart_2:
# 43 "data/maps/CaveofAwakening/scripts.pory"
	call Echoes_of_Evolution_Start
	goto Echoes_of_Evolution_Restart_1

Echoes_of_Evolution_Restart_5:
# 46 "data/maps/CaveofAwakening/scripts.pory"
	call Echoes_of_Evolution_Dont_Start
	goto Echoes_of_Evolution_Restart_4


TR_SAND_ECH::
# 53 "data/maps/CaveofAwakening/scripts.pory"
	goto_if_set FLAG_ECHOES_of_EVOLUTION_0x02D, TR_SAND_ECH_2
# 62 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SAND_ECH_Text_0
# 63 "data/maps/CaveofAwakening/scripts.pory"
	releaseall
TR_SAND_ECH_1:
	end

TR_SAND_ECH_2:
# 55 "data/maps/CaveofAwakening/scripts.pory"
	trainerbattle_single TRAINER_SAND, TR_SAND_ECH_Intro, TR_SAND_ECH_Outro
# 56 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SAND_ECH_PostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/CaveofAwakening/scripts.pory"
	trainerbattle_single TRAINER_SAND, TR_SAND_ECH_Intro, TR_SAND_ECH_Outro
# 58 "data/maps/CaveofAwakening/scripts.pory"
	setflag FLAG_SAND_0x031
# 59 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SAND_ECH_PostBattle, MSGBOX_AUTOCLOSE
	goto TR_SAND_ECH_1


TR_RAIN_ECH::
# 82 "data/maps/CaveofAwakening/scripts.pory"
	goto_if_set FLAG_SAND_0x031, TR_RAIN_ECH_2
# 90 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SAND_ECH_Text_0
# 91 "data/maps/CaveofAwakening/scripts.pory"
	releaseall
TR_RAIN_ECH_1:
	end

TR_RAIN_ECH_2:
# 84 "data/maps/CaveofAwakening/scripts.pory"
	checkflag FLAG_ECHOES_of_EVOLUTION_0x02D
# 85 "data/maps/CaveofAwakening/scripts.pory"
	trainerbattle_single TRAINER_RAIN TR_RAIN_ECH_Intro, TR_RAIN_ECH_Outro
# 86 "data/maps/CaveofAwakening/scripts.pory"
	setflag FLAG_RAIN_0x032
# 87 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_RAIN_ECH_PostBattle, MSGBOX_AUTOCLOSE
	goto TR_RAIN_ECH_1


TR_SNOW_ECH::
# 109 "data/maps/CaveofAwakening/scripts.pory"
	goto_if_set FLAG_RAIN_0x032, TR_SNOW_ECH_2
# 117 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SAND_ECH_Text_0
# 118 "data/maps/CaveofAwakening/scripts.pory"
	releaseall
TR_SNOW_ECH_1:
	end

TR_SNOW_ECH_2:
# 111 "data/maps/CaveofAwakening/scripts.pory"
	checkflag FLAG_ECHOES_of_EVOLUTION_0x02D
# 112 "data/maps/CaveofAwakening/scripts.pory"
	trainerbattle_single TRAINER_SNOW, TR_SNOW_ECH_Intro, TR_SNOW_ECH_Outro
# 113 "data/maps/CaveofAwakening/scripts.pory"
	setflag FLAG_SNOW_0x033
# 114 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SNOW_ECH_PostBattle, MSGBOX_AUTOCLOSE
	goto TR_SNOW_ECH_1


TR_SUN_ECH::
# 136 "data/maps/CaveofAwakening/scripts.pory"
	goto_if_set FLAG_SNOW_0x033, TR_SUN_ECH_2
# 143 "data/maps/CaveofAwakening/scripts.pory"
	msgbox TR_SUN_ECH_Text_0
TR_SUN_ECH_1:
	end

TR_SUN_ECH_2:
# 138 "data/maps/CaveofAwakening/scripts.pory"
	checkflag FLAG_ECHOES_of_EVOLUTION_0x02D
# 139 "data/maps/CaveofAwakening/scripts.pory"
	trainerbattle_single TRAINER_SUN, TR_SUN_ECH_Intro, TR_SUN_ECH_Outro
# 140 "data/maps/CaveofAwakening/scripts.pory"
	call Echoes_of_Evolution_Complete
	goto TR_SUN_ECH_1


Echoes_of_Evolution_Complete::
# 157 "data/maps/CaveofAwakening/scripts.pory"
	msgbox Echoes_of_Evolution_Complete_Text_0
# 159 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 160 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_WATER_STONE
# 161 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 162 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_LEAF_STONE
# 163 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_MOON_STONE
# 164 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_SUN_STONE
# 165 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_SHINY_STONE
# 166 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 167 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 168 "data/maps/CaveofAwakening/scripts.pory"
	giveitem ITEM_ICE_STONE
# 169 "data/maps/CaveofAwakening/scripts.pory"
	completequest QUEST_5
	return


Echoes_of_Evolution_Trigger_Text_0:
# 7 "data/maps/CaveofAwakening/scripts.pory"
	.string "Welcome to the Cave of Awakening,\n"
	.string "Pokemon come here to evolve. Pass the\l"
	.string "trial and you'll earn relics to guide\l"
	.string "evolution. Fail, and the cavern shall\l"
	.string "await your return. Will you attempt the\l"
	.string "trial?$"

Echoes_of_Evolution_Start_Text_0:
# 22 "data/maps/CaveofAwakening/scripts.pory"
	.string "Please show us your bond.$"

Echoes_of_Evolution_Dont_Start_Text_0:
# 29 "data/maps/CaveofAwakening/scripts.pory"
	.string "Very well. Please return when you and\n"
	.string "your pokemon are ready.$"

Echoes_of_Evolution_Restart_Text_0:
# 41 "data/maps/CaveofAwakening/scripts.pory"
	.string "Are you finally ready to take the trial?$"

TR_SAND_ECH_Text_0:
# 62 "data/maps/CaveofAwakening/scripts.pory"
	.string "Please start the trial.$"

TR_SUN_ECH_Text_0:
# 143 "data/maps/CaveofAwakening/scripts.pory"
	.string "Please start the trial$"

Echoes_of_Evolution_Complete_Text_0:
# 157 "data/maps/CaveofAwakening/scripts.pory"
	.string "You've done well to complete these\n"
	.string "trials for braving the challenge and\l"
	.string "coming out on top I will give you these\l"
	.string "rewards.$"

TR_SAND_ECH_Intro::
# 68 "data/maps/CaveofAwakening/scripts.pory"
	.string "Don't get sand in your eyes!$"

TR_SAND_ECH_Outro::
# 72 "data/maps/CaveofAwakening/scripts.pory"
	.string "No fair I got sand in my eyes.$"

TR_SAND_ECH_PostBattle::
# 76 "data/maps/CaveofAwakening/scripts.pory"
	.string "Move on to the next trial.$"

TR_RAIN_ECH_Intro::
# 96 "data/maps/CaveofAwakening/scripts.pory"
	.string "Don't drown in our awesomeness!$"

TR_RAIN_ECH_Outro::
# 100 "data/maps/CaveofAwakening/scripts.pory"
	.string "You swamped me.$"

TR_RAIN_ECH_PostBattle::
# 104 "data/maps/CaveofAwakening/scripts.pory"
	.string "Move on to the next trial.$"

TR_SNOW_ECH_Intro::
# 123 "data/maps/CaveofAwakening/scripts.pory"
	.string "Careful not to get frostbitten!$"

TR_SNOW_ECH_Outro::
# 127 "data/maps/CaveofAwakening/scripts.pory"
	.string "I need some more layers on.$"

TR_SNOW_ECH_PostBattle::
# 131 "data/maps/CaveofAwakening/scripts.pory"
	.string "Move on to the next trial.$"

TR_SUN_ECH_Intro::
# 148 "data/maps/CaveofAwakening/scripts.pory"
	.string "Can you handle the heat?$"

TR_SUN_ECH_Outro::
# 152 "data/maps/CaveofAwakening/scripts.pory"
	.string "Wheres the thermostat?$"
