LittlerootTown_Mart_MapScripts::
	.byte 0

LittlerootTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_PlayerWhatCanIDoForYou
	waitmessage
	pokemart LittlerootTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LittlerootTown_Mart_Pokemart_Basic:
	.2byte ITEM_MAX_POTION
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_MAX_REVIVE
	.2byte ITEM_PP_MAX
	.2byte ITEM_POKEMON_BOX_LINK
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

LittlerootTown_Mart_EventScript_Boy::
	msgbox LittlerootTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end	

LittlerootTown_Mart_Text_RestoreHPWithPotion:
	.string "If a POKéMON gets hurt and loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your POKéMON from fainting,\n"
	.string "restore its HP with a POTION.$"