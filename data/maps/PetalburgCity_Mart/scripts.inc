# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"

# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"

# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 77 "data/maps/PetalburgCity_Mart/scripts.pory"

# 78 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"

# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 83 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 84 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 85 "data/maps/PetalburgCity_Mart/scripts.pory"

# 86 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 89 "data/maps/PetalburgCity_Mart/scripts.pory"

# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
# 92 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 93 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 94 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your POKéMON!$"
# 95 "data/maps/PetalburgCity_Mart/scripts.pory"

# 96 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 97 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 98 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps POKéMON away, so it's\l"
# 99 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 100 "data/maps/PetalburgCity_Mart/scripts.pory"

# 101 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 102 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 103 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 104 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 105 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "POKéMON, it will lose HP until it faints.\l"
# 106 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"
