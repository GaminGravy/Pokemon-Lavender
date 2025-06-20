# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 35 "data/maps/OldaleTown_Mart/scripts.pory"

# 36 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 41 "data/maps/OldaleTown_Mart/scripts.pory"

# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 61 "data/maps/OldaleTown_Mart/scripts.pory"

# 62 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 69 "data/maps/OldaleTown_Mart/scripts.pory"

# 70 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 74 "data/maps/OldaleTown_Mart/scripts.pory"

# 75 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 78 "data/maps/OldaleTown_Mart/scripts.pory"

# 79 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 82 "data/maps/OldaleTown_Mart/scripts.pory"

# 83 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 86 "data/maps/OldaleTown_Mart/scripts.pory"

# 87 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 88 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 89 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 90 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"
