# 1 "data/maps/GraniteCave_B2F/scripts.pory"

# 2 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0

GraniteCave_B2F_EventScript_NewSign::
# 7 "data/maps/GraniteCave_B2F/scripts.pory"
	lockall
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_NewSign_Text_0
# 12 "data/maps/GraniteCave_B2F/scripts.pory"
	releaseall
	return


GraniteCave_B2F_EventScript_NewSign_Text_0:
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Encounters: Zubat, Aron, Nosepass,\n"
	.string "Abra, Larvitar, Sableye, Dunsparce,\l"
	.string "Mawile, Cyndaquil. CATCH EM ALL.$"
