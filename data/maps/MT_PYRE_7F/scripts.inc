MT_PYRE_7F_MapScripts::
	.byte 0


When_Shadows_Smile::
# 4 "data/maps/MT_PYRE_7F/scripts.pory"
	startquest QUEST_9
# 5 "data/maps/MT_PYRE_7F/scripts.pory"
	playmoncry SPECIES_GENGAR_MEGA, CRY_MODE_ENCOUNTER
# 6 "data/maps/MT_PYRE_7F/scripts.pory"
	waitmoncry
# 7 "data/maps/MT_PYRE_7F/scripts.pory"
	setflag FLAG_NOCATCH_0x027
# 8 "data/maps/MT_PYRE_7F/scripts.pory"
	setwildbattle SPECIES_GENGAR_MEGA, 60, ITEM_HERACRONITE
# 9 "data/maps/MT_PYRE_7F/scripts.pory"
	dowildbattle
# 10 "data/maps/MT_PYRE_7F/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
# 11 "data/maps/MT_PYRE_7F/scripts.pory"
	warpsilent MAP_FAKE_LITTLEROOT_HOUSE, 8, 8
	return

