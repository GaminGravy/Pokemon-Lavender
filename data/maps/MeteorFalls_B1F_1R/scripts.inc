# 1 "data/maps/MeteorFalls_B1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
MeteorFalls_B1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.byte 0

MeteorFalls_B1F_1R_EventScript_NewSign::
# 7 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lockall
# 8 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox MeteorFalls_B1F_1R_EventScript_NewSign_Text_0
# 12 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	releaseall
	return


MeteorFalls_B1F_1R_EventScript_NewSign_Text_0:
# 8 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "Encounters: Munna, Sigilyph, Solosis,\n"
	.string "Gothita, Varoom, Solrock, Lunatone,\l"
	.string "Goomy, Axew, Bagon, Froakie CATCH EM\l"
	.string "ALL.$"
