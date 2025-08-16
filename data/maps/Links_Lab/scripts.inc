Links_Lab_MapScripts::
	.byte 0


Bound_by_Trade::
# 4 "data/maps/Links_Lab/scripts.pory"
	lockall
# 5 "data/maps/Links_Lab/scripts.pory"
	msgbox Bound_by_Trade_Text_0, MSGBOX_YESNO
# 10 "data/maps/Links_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Bound_by_Trade_2
Bound_by_Trade_1:
# 36 "data/maps/Links_Lab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Bound_by_Trade_4
	return

Bound_by_Trade_2:
# 11 "data/maps/Links_Lab/scripts.pory"
	startquest QUEST_6
# 12 "data/maps/Links_Lab/scripts.pory"
	checkspecies SPECIES_MACHOP, OPEN_PARTY_SCREEN
# 13 "data/maps/Links_Lab/scripts.pory"
	checkspecies SPECIES_ABRA, OPEN_PARTY_SCREEN
# 14 "data/maps/Links_Lab/scripts.pory"
	checkspecies SPECIES_GEODUDE, OPEN_PARTY_SCREEN
# 15 "data/maps/Links_Lab/scripts.pory"
	msgbox Bound_by_Trade_Text_1
# 17 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 18 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 19 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_DRAGON_SCALE
# 20 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_DUBIOUS_DISC
# 21 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_ELECTIRIZER
# 22 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_MAGMARIZER
# 23 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 24 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_METAL_COAT
# 25 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 26 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_PROTECTOR
# 27 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 28 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_SACHET
# 29 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_UPGRADE
# 30 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_WHIPPED_DREAM
# 31 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_LINKING_CORD
# 32 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_LINKING_CORD
# 33 "data/maps/Links_Lab/scripts.pory"
	giveitem ITEM_LINKING_CORD
# 34 "data/maps/Links_Lab/scripts.pory"
	completequest QUEST_6
	goto Bound_by_Trade_1

Bound_by_Trade_4:
# 37 "data/maps/Links_Lab/scripts.pory"
	msgbox Bound_by_Trade_Text_2
# 38 "data/maps/Links_Lab/scripts.pory"
	releaseall
	return


Bound_by_Trade_Text_0:
# 5 "data/maps/Links_Lab/scripts.pory"
	.string "Hello my name is Proffesor Link. My job\n"
	.string "is to research Pokemon trade evolution.\l"
	.string "The problem is that I'm far too weak to\l"
	.string "go out and look at pokemon that evolve\l"
	.string "in such ways. Would you be willing to\l"
	.string "show me a Machop, Abra, and a Geodude?$"

Bound_by_Trade_Text_1:
# 15 "data/maps/Links_Lab/scripts.pory"
	.string "Thank you seeing these pokemon will\n"
	.string "help with my research immensely. Let me\l"
	.string "repay your hard work with some tokens\l"
	.string "of my appreciation.$"

Bound_by_Trade_Text_2:
# 37 "data/maps/Links_Lab/scripts.pory"
	.string "I really need my grant...$"
