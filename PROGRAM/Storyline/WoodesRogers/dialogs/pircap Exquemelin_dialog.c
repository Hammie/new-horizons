//#include "DIALOGS\Church crew_dialog.h"
void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, Diag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(Diag, NPChar.Dialog);

	ref PChar;
	PChar = GetMainCharacter();


	switch(Dialog.CurrentNode)
	{
		// -----------------------------------Диалог первый - первая встреча
		case "First time":

			Dialog.defAni = "dialog_stay1";
			Dialog.defCam = "1";
			Dialog.defSnd = "dialogs\0\017";
			Dialog.defLinkAni = "dialog_1";
			Dialog.defLinkCam = "1";
			Dialog.defLinkSnd = "dialogs\woman\024";
			Dialog.ani = "dialog_stay2";
			Dialog.cam = "1";
			Dialog.snd = "voice\THDI\THDI001";

			PlaySound("VOICE\ENGLISH\Fre_m_a_010.wav");

			if(CheckAttribute(Pchar,"quest.pircaps_status") && Pchar.quest.pircaps_status == "drunk")
			{
				dialog.text = DLG_TEXT[4];
				link.l1 = DLG_TEXT[5];
				
				if(CheckAttribute(Pchar,"quest.Vane_attic_hint") && Pchar.quest.Vane_attic_hint == "done")
				{
					link.l1.go = "exit";
				}
				else
				{
					link.l1.go = "Vane_attic";
				}
			}
			else
			{
				if(CheckAttribute(Pchar,"quest.pircap_perks") && Pchar.quest.pircap_perks == "coins_instead")
				{
					if(CheckAttribute(Pchar, "quest.coin_collection") && Pchar.quest.coin_collection == "7")
					{
						dialog.text = DLG_TEXT[8];
						link.l1 = DLG_TEXT[9];
						link.l1.go = "exit";
					}
					else
					{
						if(CheckCharacterItem(NPchar,"coin9") || CheckCharacterItem(NPchar,"coin10") || CheckCharacterItem(NPchar,"coin11"))
						{
							dialog.text = DLG_TEXT[2];
							link.l1 = DLG_TEXT[3];
							link.l1.go = "coins";
						}
						else
						{
							dialog.text = DLG_TEXT[6];
							link.l1 = DLG_TEXT[7];
							link.l1.go = "exit";
						}
					}
				}
				else
				{
					dialog.text = DLG_TEXT[0];
					link.l1 = DLG_TEXT[1];
					link.l1.go = "exit";
				}
			}

			Diag.TempNode = "first time";
		break;
	
		case "Vane_attic":
			Pchar.quest.Vane_attic_hint = "done";
			PlaySound("VOICE\ENGLISH\Fre_m_a_011.wav");
			dialog.text = DLG_TEXT[10];
			link.l1 = DLG_TEXT[11];
			link.l1.go = "exit";
			AddQuestRecord("Charles_Vanes_quest", "10");
		break;

		case "coins":
			string	itmid;
		
			itmid = "coin9";
			if(CheckCharacterItem(NPchar,"coin9"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}
		
			itmid = "coin10";
			if(CheckCharacterItem(NPchar,"coin10"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}

			itmid = "coin11";
			if(CheckCharacterItem(NPchar,"coin11"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}

			Diag.CurrentNode = Diag.TempNode;
			DialogExit();
			LaunchItemsTrade(NPChar);

			LAi_QuestDelay("coins_collection_check", 0.1);
		break;

		case "Exit":
			DialogExit();
			Diag.CurrentNode = Diag.TempNode;
		break;
	}
}
