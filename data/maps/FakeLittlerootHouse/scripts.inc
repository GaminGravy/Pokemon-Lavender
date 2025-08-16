FakeLittlerootHouse_MapScripts::
	.byte 0


Daughter::
# 4 "data/maps/FakeLittlerootHouse/scripts.pory"
	faceplayer
# 5 "data/maps/FakeLittlerootHouse/scripts.pory"
	goto_if_set FLAG_ZIGZAGOON_0x036, Daughter_1
# 21 "data/maps/FakeLittlerootHouse/scripts.pory"
	msgbox Daughter_Text_1
# 30 "data/maps/FakeLittlerootHouse/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 10
# 31 "data/maps/FakeLittlerootHouse/scripts.pory"
	releaseall
	return

Daughter_1:
# 7 "data/maps/FakeLittlerootHouse/scripts.pory"
	msgbox Daughter_Text_0
# 10 "data/maps/FakeLittlerootHouse/scripts.pory"
	setflag FLAG_DAUGHTER_0x039
# 11 "data/maps/FakeLittlerootHouse/scripts.pory"
	applymovement 1, DaughterLeave
# 12 "data/maps/FakeLittlerootHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/FakeLittlerootHouse/scripts.pory"
	removeobject 1
# 14 "data/maps/FakeLittlerootHouse/scripts.pory"
	setflag FLAG_WIFE_0x03A
# 15 "data/maps/FakeLittlerootHouse/scripts.pory"
	applymovement 2, WifeLeave
# 16 "data/maps/FakeLittlerootHouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/FakeLittlerootHouse/scripts.pory"
	removeobject 2
# 18 "data/maps/FakeLittlerootHouse/scripts.pory"
	releaseall
	return


Wife::
# 36 "data/maps/FakeLittlerootHouse/scripts.pory"
	faceplayer
# 37 "data/maps/FakeLittlerootHouse/scripts.pory"
	msgbox Wife_Text_0
# 43 "data/maps/FakeLittlerootHouse/scripts.pory"
	releaseall
	return


# 46 "data/maps/FakeLittlerootHouse/scripts.pory"
DaughterLeave:
# 47 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_up
# 47 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_up
# 47 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_up
# 48 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 48 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 48 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 49 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/FakeLittlerootHouse/scripts.pory"
WifeLeave:
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 57 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_right
# 58 "data/maps/FakeLittlerootHouse/scripts.pory"
	walk_up
	step_end

Zigzagoon::
# 62 "data/maps/FakeLittlerootHouse/scripts.pory"
	faceplayer
# 63 "data/maps/FakeLittlerootHouse/scripts.pory"
	lockall
# 64 "data/maps/FakeLittlerootHouse/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 65 "data/maps/FakeLittlerootHouse/scripts.pory"
	waitmoncry
# 66 "data/maps/FakeLittlerootHouse/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 5, ITEM_NONE
# 67 "data/maps/FakeLittlerootHouse/scripts.pory"
	dowildbattle
# 68 "data/maps/FakeLittlerootHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/FakeLittlerootHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Zigzagoon_1
	return

Zigzagoon_1:
# 70 "data/maps/FakeLittlerootHouse/scripts.pory"
	call Caught_Zigzagoon
	return


Caught_Zigzagoon::
# 74 "data/maps/FakeLittlerootHouse/scripts.pory"
	removeobject 1
# 75 "data/maps/FakeLittlerootHouse/scripts.pory"
	setflag FLAG_ZIGZAGOON_0x036
	return


Gengar_MEGA::
# 79 "data/maps/FakeLittlerootHouse/scripts.pory"
	faceplayer
# 80 "data/maps/FakeLittlerootHouse/scripts.pory"
	setflag FLAG_NOCATCH_0x027
# 81 "data/maps/FakeLittlerootHouse/scripts.pory"
	playmoncry SPECIES_GENGAR_MEGA, CRY_MODE_ENCOUNTER
# 82 "data/maps/FakeLittlerootHouse/scripts.pory"
	waitmoncry
# 83 "data/maps/FakeLittlerootHouse/scripts.pory"
	setwildbattle SPECIES_GENGAR_MEGA, 65, ITEM_NONE
# 84 "data/maps/FakeLittlerootHouse/scripts.pory"
	dowildbattle
# 85 "data/maps/FakeLittlerootHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 86 "data/maps/FakeLittlerootHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Gengar_MEGA_2
Gengar_MEGA_1:
# 88 "data/maps/FakeLittlerootHouse/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
	return

Gengar_MEGA_2:
# 87 "data/maps/FakeLittlerootHouse/scripts.pory"
	call BEAT_GENGAR
	goto Gengar_MEGA_1


Wife_Daughter::
# 92 "data/maps/FakeLittlerootHouse/scripts.pory"
	lockall
# 93 "data/maps/FakeLittlerootHouse/scripts.pory"
	msgbox Wife_Daughter_Text_0
# 98 "data/maps/FakeLittlerootHouse/scripts.pory"
	completequest QUEST_9
# 99 "data/maps/FakeLittlerootHouse/scripts.pory"
	warpsilent MAP_MT_PYRE_7F, 3, 17
	return


Daughter_2::
# 103 "data/maps/FakeLittlerootHouse/scripts.pory"
	faceplayer
# 104 "data/maps/FakeLittlerootHouse/scripts.pory"
	lockall
# 105 "data/maps/FakeLittlerootHouse/scripts.pory"
	msgbox Daughter_2_Text_0
# 110 "data/maps/FakeLittlerootHouse/scripts.pory"
	releaseall
	return


BEAT_GENGAR::
# 114 "data/maps/FakeLittlerootHouse/scripts.pory"
	clearflag FLAG_NOCATCH_0x027
# 115 "data/maps/FakeLittlerootHouse/scripts.pory"
	setflag FLAG_GENGAR_0x03B
# 116 "data/maps/FakeLittlerootHouse/scripts.pory"
	removeobject 3
# 117 "data/maps/FakeLittlerootHouse/scripts.pory"
	giveitem ITEM_GENGARITE
# 118 "data/maps/FakeLittlerootHouse/scripts.pory"
	releaseall
	return


Daughter_Text_0:
# 7 "data/maps/FakeLittlerootHouse/scripts.pory"
	.string "Thank you so much {PLAYER} you're the\n"
	.string "best parent any girl could ever ask for!\l"
	.string "Me and mom were going to play in my room.\l"
	.string "Can you play with us pleeeeaseee$"

Daughter_Text_1:
# 21 "data/maps/FakeLittlerootHouse/scripts.pory"
	.string "You're finally home. We've missed you so\n"
	.string "much, did you become the Champion like\l"
	.string "you wanted? Can you tuck me into bed at\l"
	.string "night again? Will you have time for me\l"
	.string "and Mom? Mom said when you got back\l"
	.string "you'd catch me my very first pokemon.\l"
	.string "Can you pleeeeaseee? Mom gave me some\l"
	.string "pokeballs in case you dont have any.$"

Wife_Text_0:
# 37 "data/maps/FakeLittlerootHouse/scripts.pory"
	.string "Hey honey! I'm so happy you're back.\n"
	.string "I've missed you so much our daughter\l"
	.string "really wants her first pokemon could\l"
	.string "you please talk to her and catch one\l"
	.string "for her. You are a Pokemon master\l"
	.string "afterall.$"

Wife_Daughter_Text_0:
# 93 "data/maps/FakeLittlerootHouse/scripts.pory"
	.string "Oh... It's fading. Your face.. It's\n"
	.string "getting further away. I'm so glad we met\l"
	.string "here, even for just a moment. Promise\l"
	.string "me.. You'll keep smiling even without\l"
	.string "me... I love you always.$"

Daughter_2_Text_0:
# 105 "data/maps/FakeLittlerootHouse/scripts.pory"
	.string "{PLAYER}... I'm so cold. Can we play\n"
	.string "again tomorrow? ..oh I guess there is no\l"
	.string "tomorrow here. I'll miss you so much$"
