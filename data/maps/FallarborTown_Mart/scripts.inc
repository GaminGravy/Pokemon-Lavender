# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
# 42 "data/maps/FallarborTown_Mart/scripts.pory"

# 43 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 46 "data/maps/FallarborTown_Mart/scripts.pory"

# 47 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 50 "data/maps/FallarborTown_Mart/scripts.pory"

# 51 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 55 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 57 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 58 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 60 "data/maps/FallarborTown_Mart/scripts.pory"

# 61 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my SKITTY evolve or not.\p"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this MOON STONE,\n"
# 65 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 66 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 67 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 69 "data/maps/FallarborTown_Mart/scripts.pory"

# 70 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"
# 72 "data/maps/FallarborTown_Mart/scripts.pory"

# 73 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 74 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
# 75 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"
