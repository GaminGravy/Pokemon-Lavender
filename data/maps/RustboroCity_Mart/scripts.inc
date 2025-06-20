# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Mart/scripts.pory"

# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Mart/scripts.pory"

# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 34 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 45 "data/maps/RustboroCity_Mart/scripts.pory"

# 46 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Mart/scripts.pory"

# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 58 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 59 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 60 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 62 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 63 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 64 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 65 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 66 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 67 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 70 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 71 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 76 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 78 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 79 "data/maps/RustboroCity_Mart/scripts.pory"

# 80 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 82 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 83 "data/maps/RustboroCity_Mart/scripts.pory"

# 84 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 85 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Mart/scripts.pory"

# 88 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 89 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 90 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 91 "data/maps/RustboroCity_Mart/scripts.pory"

# 92 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 96 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 97 "data/maps/RustboroCity_Mart/scripts.pory"

# 98 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 103 "data/maps/RustboroCity_Mart/scripts.pory"

# 104 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"
