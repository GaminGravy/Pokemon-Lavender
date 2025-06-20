# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_B1F_EventScript_NewSign::
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
	lockall
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_NewSign_Text_0
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	releaseall
	return


GraniteCave_B1F_EventScript_NewSign_Text_0:
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Encounters: Zubat, Aron, Onix,\n"
	.string "Nosepass, Abra, Carbink, Woobat,\l"
	.string "Sableye, Drilbur, Mawile, Cyndaquil.\l"
	.string "CATCH EM ALL.$"
