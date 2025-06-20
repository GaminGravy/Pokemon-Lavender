# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart:
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 33 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 36 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 37 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 38 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemartlistend
# 39 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 40 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 41 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 43 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 44 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 45 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 46 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 47 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 48 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike:
# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Use X SPEED to add to a POKéMON's\n"
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "SPEED in battle.\p"
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "That will help it get in the first\n"
# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "strike--a decided advantage!$"
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 54 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
# 55 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "On MT. CHIMNEY's peak, there's a local\n"
# 56 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "specialty that you can buy only there.\p"
# 57 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Give it to a POKéMON--it will be elated.$"
