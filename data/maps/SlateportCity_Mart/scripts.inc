# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 31 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 35 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 36 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemartlistend
# 39 "data/maps/SlateportCity_Mart/scripts.pory"

# 40 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 41 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 42 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 43 "data/maps/SlateportCity_Mart/scripts.pory"

# 44 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 45 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 46 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 47 "data/maps/SlateportCity_Mart/scripts.pory"

# 48 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 49 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 52 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a POKéMON MART.$"
# 53 "data/maps/SlateportCity_Mart/scripts.pory"

# 54 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
# 56 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching POKéMON.\p"
# 57 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 58 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive POKéMON…$"
