// ******************************************************************************
// Filename:    EquipmentUtils.cpp
// Project:     Vox
// Author:      Steven Ball
//
// Purpose:
//   Utility functionality for equipment, mostly a way to associate equipment
//   enums with data like the friendly names and display strings.
//
// Revision History:
//   Initial Revision - 12/04/14
//
// Copyright (c) 2005-2016, Steven Ball
// ******************************************************************************

#include "Item.h"

string GetEquipmentTitleForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "Normal Pickaxe"; } break;
		case eEquipment_Torch:				{ return "Torch"; } break;
		case eEquipment_Hammer:				{ return "Hammer"; } break;
		case eEquipment_MageStaff:			{ return "Mage Staff"; } break;
		case eEquipment_NecroStaff:			{ return "Necro Staff"; } break;
		case eEquipment_PriestStaff:		{ return "Priest Staff"; } break;
		case eEquipment_DruidStaff:			{ return "Druid Staff"; } break;
		case eEquipment_2HandedSword:		{ return "Two Handed Sword"; } break;
		case eEquipment_Boomerang:			{ return "Boomerang"; } break;
		case eEquipment_Bomb:				{ return "Bomb"; } break;
		case eEquipment_KnifeLeft:			{ return "Knife"; } break;
		case eEquipment_KnifeRight:			{ return "Knife"; } break;
		case eEquipment_FireballHandLeft:	{ return "Fireball Hands"; } break;
		case eEquipment_FireballHandRight:	{ return "Fireball Hands"; } break;
		case eEquipment_WoodenSword:		{ return "Wooden Sword"; } break;
		case eEquipment_WoodenShield:		{ return "Wooden Shield"; } break;
		case eEquipment_WoodenBow:			{ return "Wooden Bow"; } break;
		case eEquipment_WoodenHelm:			{ return "Wooden Helm"; } break;
		case eEquipment_WoodenArmor:		{ return "Wooden Armor"; } break;
		case eEquipment_WoodenPants:		{ return "Wooden Pants"; } break;
		case eEquipment_WoodenGloves:		{ return "Wooden Gloves"; } break;
		case eEquipment_WoodenBoots:		{ return "Wooden Boots"; } break;
		case eEquipment_WoodenShoulders:	{ return "Wooden Shoulders"; } break;
		case eEquipment_IronSword:			{ return "Iron Sword"; } break;
		case eEquipment_IronShield:			{ return "Iron Shield"; } break;
		case eEquipment_IronHelm:			{ return "Iron Helm"; } break;
		case eEquipment_IronArmor:			{ return "Iron Armor"; } break;
		case eEquipment_IronPants:			{ return "Iron Pants"; } break;
		case eEquipment_IronGloves:			{ return "Iron Gloves"; } break;
		case eEquipment_IronBoots:			{ return "Iron Boots"; } break;
		case eEquipment_IronShoulders:		{ return "Iron Shoulders"; } break;
	}

	return "";
}

string GetEquipmentDescriptionForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "Used for mining and digging the world."; } break;
		case eEquipment_Torch:				{ return "A torch to light up the darkness."; } break;
		case eEquipment_Hammer:				{ return "A hammer to smite your foes."; } break;
		case eEquipment_MageStaff:			{ return "A staff that contains powerful magic."; } break;
		case eEquipment_NecroStaff:			{ return "A necromancer staff once used by powerful mages of undeath."; } break;
		case eEquipment_PriestStaff:		{ return "A holy staff of pure energy."; } break;
		case eEquipment_DruidStaff:			{ return "A staff that is engraved with nature."; } break;
		case eEquipment_2HandedSword:		{ return "A sword that requires both hands to wield."; } break;
		case eEquipment_Boomerang:			{ return "Once thrown, the boomerang returns to you."; } break;
		case eEquipment_Bomb:				{ return "An explosive bomb, can destroy enemies and the landscape."; } break;
		case eEquipment_KnifeLeft:			{ return "A stabbing knife."; } break;
		case eEquipment_KnifeRight:			{ return "A stabbing knife."; } break;
		case eEquipment_FireballHandLeft:	{ return "Cast powerful spells using only your hands."; } break;
		case eEquipment_FireballHandRight:	{ return "Cast powerful spells using only your hands."; } break;
		case eEquipment_WoodenSword:		{ return "A wooden sword, not very good in combat."; } break;
		case eEquipment_WoodenShield:		{ return "A wooden shield, cannnot protect against much."; } break;
		case eEquipment_WoodenBow:			{ return "A wooden bow, made for shooting arrows."; } break;
		case eEquipment_WoodenHelm:			{ return "Wooden helm."; } break;
		case eEquipment_WoodenArmor:		{ return "Wooden armor."; } break;
		case eEquipment_WoodenPants:		{ return "Wooden pants."; } break;
		case eEquipment_WoodenGloves:		{ return "Wooden gloves."; } break;
		case eEquipment_WoodenBoots:		{ return "Wooden boots."; } break;
		case eEquipment_WoodenShoulders:	{ return "Wooden shoulders."; } break;
		case eEquipment_IronSword:			{ return "A sturdy sword made of iron."; } break;
		case eEquipment_IronShield:			{ return "A shield of pure iron."; } break;
		case eEquipment_IronHelm:			{ return "Iron helm."; } break;
		case eEquipment_IronArmor:			{ return "Iron armor."; } break;
		case eEquipment_IronPants:			{ return "Iron pants."; } break;
		case eEquipment_IronGloves:			{ return "Iron gloves."; } break;
		case eEquipment_IronBoots:			{ return "Iron boots."; } break;
		case eEquipment_IronShoulders:		{ return "Iron shoulders."; } break;
	}

	return "";
}

string GetEquipmentFilenameForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "media/gamedata/weapons/Pickaxe/Pickaxe.weapon"; } break;
		case eEquipment_Torch:				{ return "media/gamedata/weapons/Torch/Torch.weapon"; } break;
		case eEquipment_Hammer:				{ return "media/gamedata/weapons/Hammer/Hammer.weapon"; } break;
		case eEquipment_MageStaff:			{ return "media/gamedata/weapons/Staff/Staff.weapon"; } break;
		case eEquipment_NecroStaff:			{ return "media/gamedata/weapons/NecroStaff/NecroStaff.weapon"; } break;
		case eEquipment_PriestStaff:		{ return "media/gamedata/weapons/PriestStaff/PriestStaff.weapon"; } break;
		case eEquipment_DruidStaff:			{ return "media/gamedata/weapons/DruidStaff/DruidStaff.weapon"; } break;
		case eEquipment_2HandedSword:		{ return "media/gamedata/weapons/2HandedSword/2HandedSword.weapon"; } break;
		case eEquipment_Boomerang:			{ return "media/gamedata/weapons/Boomerang/Boomerang.weapon"; } break;
		case eEquipment_Bomb:				{ return "media/gamedata/items/Bomb/Bomb.item"; } break;
		case eEquipment_KnifeLeft:			{ return "media/gamedata/weapons/Knife/Knife.weapon"; } break;
		case eEquipment_KnifeRight:			{ return "media/gamedata/weapons/Knife/Knife.weapon"; } break;
		case eEquipment_FireballHandLeft:	{ return "media/gamedata/weapons/FireballHands/FireballHandsLeft.weapon"; } break;
		case eEquipment_FireballHandRight:	{ return "media/gamedata/weapons/FireballHands/FireballHandsRight.weapon"; } break;
		case eEquipment_WoodenSword:		{ return "media/gamedata/weapons/WoodenSword/WoodenSword.weapon"; } break;
		case eEquipment_WoodenShield:		{ return "media/gamedata/weapons/WoodenShield/WoodenShield.weapon"; } break;
		case eEquipment_WoodenBow:			{ return "media/gamedata/weapons/WoodenBow/WoodenBow.weapon"; } break;
		case eEquipment_WoodenHelm:			{ return "media/gamedata/equipment/WoodHelm/WoodHelm.equipment"; } break;
		case eEquipment_WoodenArmor:		{ return "media/gamedata/equipment/WoodBody/WoodBody.equipment"; } break;
		case eEquipment_WoodenPants:		{ return "media/gamedata/equipment/WoodPants/WoodPants.equipment"; } break;
		case eEquipment_WoodenGloves:		{ return "media/gamedata/equipment/WoodGloves/WoodGloves.equipment"; } break;
		case eEquipment_WoodenBoots:		{ return "media/gamedata/equipment/WoodBoots/WoodBoots.equipment"; } break;
		case eEquipment_WoodenShoulders:	{ return "media/gamedata/equipment/WoodShoulders/WoodShoulders.equipment"; } break;
		case eEquipment_IronSword:			{ return "media/gamedata/weapons/IronSword/IronSword.weapon"; } break;
		case eEquipment_IronShield:			{ return "media/gamedata/weapons/IronShield/IronShield.weapon"; } break;
		case eEquipment_IronHelm:			{ return "media/gamedata/equipment/IronHelm/IronHelm.equipment"; } break;
		case eEquipment_IronArmor:			{ return "media/gamedata/equipment/IronBody/IronBody.equipment"; } break;
		case eEquipment_IronPants:			{ return "media/gamedata/equipment/IronPants/IronPants.equipment"; } break;
		case eEquipment_IronGloves:			{ return "media/gamedata/equipment/IronGloves/IronGloves.equipment"; } break;
		case eEquipment_IronBoots:			{ return "media/gamedata/equipment/IronBoots/IronBoots.equipment"; } break;
		case eEquipment_IronShoulders:		{ return "media/gamedata/equipment/IronShoulders/IronShoulders.equipment"; } break;
	}

	return "";
}

string GetEquipmentTextureForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "media/textures/items/pickaxe.tga"; } break;
		case eEquipment_Torch:				{ return "media/textures/items/torch.tga"; } break;
		case eEquipment_Hammer:				{ return "media/textures/items/hammer.tga"; } break;
		case eEquipment_MageStaff:			{ return "media/textures/items/staff.tga"; } break;
		case eEquipment_NecroStaff:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_PriestStaff:		{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_DruidStaff:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_2HandedSword:		{ return "media/textures/items/2handed_sword.tga"; } break;
		case eEquipment_Boomerang:			{ return "media/textures/items/boomerang.tga"; } break;
		case eEquipment_Bomb:				{ return "media/textures/items/bomb.tga"; } break;
		case eEquipment_KnifeLeft:			{ return "media/textures/items/knife.tga"; } break;
		case eEquipment_KnifeRight:			{ return "media/textures/items/knife.tga"; } break;
		case eEquipment_FireballHandLeft:	{ return "media/textures/items/fireball_hand.tga"; } break;
		case eEquipment_FireballHandRight:	{ return "media/textures/items/fireball_hand.tga"; } break;
		case eEquipment_WoodenSword:		{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_WoodenShield:		{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_WoodenBow:			{ return "media/textures/items/wooden_bow.tga"; } break;
		case eEquipment_WoodenHelm:			{ return "media/textures/items/wood_helm.tga"; } break;
		case eEquipment_WoodenArmor:		{ return "media/textures/items/wood_armor.tga"; } break;
		case eEquipment_WoodenPants:		{ return "media/textures/items/wood_pants.tga"; } break;
		case eEquipment_WoodenGloves:		{ return "media/textures/items/wood_gloves.tga"; } break;
		case eEquipment_WoodenBoots:		{ return "media/textures/items/wood_boots.tga"; } break;
		case eEquipment_WoodenShoulders:	{ return "media/textures/items/wood_shoulders.tga"; } break;
		case eEquipment_IronSword:			{ return "media/textures/items/iron_sword.tga"; } break;
		case eEquipment_IronShield:			{ return "media/textures/items/iron_shield.tga"; } break;
		case eEquipment_IronHelm:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_IronArmor:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_IronPants:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_IronGloves:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_IronBoots:			{ return "media/textures/items/question_mark.tga"; } break;
		case eEquipment_IronShoulders:		{ return "media/textures/items/question_mark.tga"; } break;
	}

	return "";
}

InventoryType GetInventoryTypeForEquipment(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return InventoryType_Nothing; } break;
		case eEquipment_NormalPickaxe:		{ return InventoryType_Weapon_Pickaxe; } break;
		case eEquipment_Torch:				{ return InventoryType_Weapon_Torch; } break;
		case eEquipment_Hammer:				{ return InventoryType_Weapon_Hammer; } break;
		case eEquipment_MageStaff:			{ return InventoryType_Weapon_Staff; } break;
		case eEquipment_NecroStaff:			{ return InventoryType_Weapon_Staff; } break;
		case eEquipment_PriestStaff:		{ return InventoryType_Weapon_Staff; } break;
		case eEquipment_DruidStaff:			{ return InventoryType_Weapon_Staff; } break;
		case eEquipment_2HandedSword:		{ return InventoryType_Weapon_2HandedSword; } break;
		case eEquipment_Boomerang:			{ return InventoryType_Weapon_Boomerang; } break;
		case eEquipment_Bomb:				{ return InventoryType_Weapon_Bomb; } break;
		case eEquipment_KnifeLeft:			{ return InventoryType_Weapon_Dagger; } break;
		case eEquipment_KnifeRight:			{ return InventoryType_Weapon_Dagger; } break;
		case eEquipment_FireballHandLeft:	{ return InventoryType_Weapon_SpellHands; } break;
		case eEquipment_FireballHandRight:	{ return InventoryType_Weapon_SpellHands; } break;
		case eEquipment_WoodenSword:		{ return InventoryType_Weapon_Sword; } break;
		case eEquipment_WoodenShield:		{ return InventoryType_Weapon_Shield; } break;
		case eEquipment_WoodenBow:			{ return InventoryType_Weapon_Bow; } break;
		case eEquipment_WoodenHelm:			{ return InventoryType_Clothing; } break;
		case eEquipment_WoodenArmor:		{ return InventoryType_Clothing; } break;
		case eEquipment_WoodenPants:		{ return InventoryType_Clothing; } break;
		case eEquipment_WoodenGloves:		{ return InventoryType_Clothing; } break;
		case eEquipment_WoodenBoots:		{ return InventoryType_Clothing; } break;
		case eEquipment_WoodenShoulders:	{ return InventoryType_Clothing; } break;
		case eEquipment_IronSword:			{ return InventoryType_Weapon_Sword; } break;
		case eEquipment_IronShield:			{ return InventoryType_Weapon_Shield; } break;
		case eEquipment_IronHelm:			{ return InventoryType_Clothing; } break;
		case eEquipment_IronArmor:			{ return InventoryType_Clothing; } break;
		case eEquipment_IronPants:			{ return InventoryType_Clothing; } break;
		case eEquipment_IronGloves:			{ return InventoryType_Clothing; } break;
		case eEquipment_IronBoots:			{ return InventoryType_Clothing; } break;
		case eEquipment_IronShoulders:		{ return InventoryType_Clothing; } break;
	}

	return InventoryType_Nothing;
}

EquipSlot GetEquipSlotForEquipment(eEquipment type)
{
	switch (type)
	{
		case eEquipment_None:				{ return EquipSlot_NoSlot; } break;
		case eEquipment_NormalPickaxe:		{ return EquipSlot_RightHand; } break;
		case eEquipment_Torch:				{ return EquipSlot_LeftHand; } break;
		case eEquipment_Hammer:				{ return EquipSlot_RightHand; } break;
		case eEquipment_MageStaff:			{ return EquipSlot_RightHand; } break;
		case eEquipment_NecroStaff:			{ return EquipSlot_RightHand; } break;
		case eEquipment_PriestStaff:		{ return EquipSlot_RightHand; } break;
		case eEquipment_DruidStaff:			{ return EquipSlot_RightHand; } break;
		case eEquipment_2HandedSword:		{ return EquipSlot_RightHand; } break;
		case eEquipment_Boomerang:			{ return EquipSlot_RightHand; } break;
		case eEquipment_Bomb:				{ return EquipSlot_RightHand; } break;
		case eEquipment_KnifeLeft:			{ return EquipSlot_LeftHand; } break;
		case eEquipment_KnifeRight:			{ return EquipSlot_RightHand; } break;
		case eEquipment_FireballHandLeft:	{ return EquipSlot_LeftHand; } break;
		case eEquipment_FireballHandRight:	{ return EquipSlot_RightHand; } break;
		case eEquipment_WoodenSword:		{ return EquipSlot_RightHand; } break;
		case eEquipment_WoodenShield:		{ return EquipSlot_LeftHand; } break;
		case eEquipment_WoodenBow:			{ return EquipSlot_LeftHand; } break;
		case eEquipment_WoodenHelm:			{ return EquipSlot_Head; } break;
		case eEquipment_WoodenArmor:		{ return EquipSlot_Body; } break;
		case eEquipment_WoodenPants:		{ return EquipSlot_Legs; } break;
		case eEquipment_WoodenGloves:		{ return EquipSlot_Hand; } break;
		case eEquipment_WoodenBoots:		{ return EquipSlot_Feet; } break;
		case eEquipment_WoodenShoulders:	{ return EquipSlot_Shoulders; } break;
		case eEquipment_IronSword:			{ return EquipSlot_RightHand; } break;
		case eEquipment_IronShield:			{ return EquipSlot_LeftHand; } break;
		case eEquipment_IronHelm:			{ return EquipSlot_Head; } break;
		case eEquipment_IronArmor:			{ return EquipSlot_Body; } break;
		case eEquipment_IronPants:			{ return EquipSlot_Legs; } break;
		case eEquipment_IronGloves:			{ return EquipSlot_Hand; } break;
		case eEquipment_IronBoots:			{ return EquipSlot_Feet; } break;
		case eEquipment_IronShoulders:		{ return EquipSlot_Shoulders; } break;
	}

	return EquipSlot_NoSlot;
}

ItemQuality GetItemQualityForEquipment(eEquipment type)
{
	switch (type)
	{
		case eEquipment_None:				{ return ItemQuality_Common; } break;
		case eEquipment_NormalPickaxe:		{ return ItemQuality_Common; } break;
		case eEquipment_Torch:				{ return ItemQuality_Common; } break;
		case eEquipment_Hammer:				{ return ItemQuality_Common; } break;
		case eEquipment_MageStaff:			{ return ItemQuality_Common; } break;
		case eEquipment_NecroStaff:			{ return ItemQuality_Common; } break;
		case eEquipment_PriestStaff:		{ return ItemQuality_Common; } break;
		case eEquipment_DruidStaff:			{ return ItemQuality_Common; } break;
		case eEquipment_2HandedSword:		{ return ItemQuality_Common; } break;
		case eEquipment_Boomerang:			{ return ItemQuality_Common; } break;
		case eEquipment_Bomb:				{ return ItemQuality_Common; } break;
		case eEquipment_KnifeLeft:			{ return ItemQuality_Common; } break;
		case eEquipment_KnifeRight:			{ return ItemQuality_Common; } break;
		case eEquipment_FireballHandLeft:	{ return ItemQuality_Common; } break;
		case eEquipment_FireballHandRight:	{ return ItemQuality_Common; } break;
		case eEquipment_WoodenSword:		{ return ItemQuality_Common; } break;
		case eEquipment_WoodenShield:		{ return ItemQuality_Common; } break;
		case eEquipment_WoodenBow:			{ return ItemQuality_Common; } break;
		case eEquipment_WoodenHelm:			{ return ItemQuality_Uncommon; } break;
		case eEquipment_WoodenArmor:		{ return ItemQuality_Uncommon; } break;
		case eEquipment_WoodenPants:		{ return ItemQuality_Uncommon; } break;
		case eEquipment_WoodenGloves:		{ return ItemQuality_Uncommon; } break;
		case eEquipment_WoodenBoots:		{ return ItemQuality_Uncommon; } break;
		case eEquipment_WoodenShoulders:	{ return ItemQuality_Uncommon; } break;
		case eEquipment_IronSword:			{ return ItemQuality_Common; } break;
		case eEquipment_IronShield:			{ return ItemQuality_Common; } break;
		case eEquipment_IronHelm:			{ return ItemQuality_Uncommon; } break;
		case eEquipment_IronArmor:			{ return ItemQuality_Uncommon; } break;
		case eEquipment_IronPants:			{ return ItemQuality_Uncommon; } break;
		case eEquipment_IronGloves:			{ return ItemQuality_Uncommon; } break;
		case eEquipment_IronBoots:			{ return ItemQuality_Uncommon; } break;
		case eEquipment_IronShoulders:		{ return ItemQuality_Uncommon; } break;
	}

	return ItemQuality_Common;
}

void GetItemSidesForEquipment(eEquipment type, bool *left, bool *right)
{
	switch (type)
	{
		case eEquipment_None:				{ *left = false; *right = false; } break;
		case eEquipment_NormalPickaxe:		{ *left = false; *right = true; } break;
		case eEquipment_Torch:				{ *left = true; *right = false; } break;
		case eEquipment_Hammer:				{ *left = false; *right = true; } break;
		case eEquipment_MageStaff:			{ *left = true; *right = true; } break;
		case eEquipment_NecroStaff:			{ *left = true; *right = true; } break;
		case eEquipment_PriestStaff:		{ *left = true; *right = true; } break;
		case eEquipment_DruidStaff:			{ *left = true; *right = true; } break;
		case eEquipment_2HandedSword:		{ *left = true; *right = true; } break;
		case eEquipment_Boomerang:			{ *left = false; *right = true; } break;
		case eEquipment_Bomb:				{ *left = false; *right = true; } break;
		case eEquipment_KnifeLeft:			{ *left = true; *right = false; } break;
		case eEquipment_KnifeRight:			{ *left = false; *right = true; } break;
		case eEquipment_FireballHandLeft:	{ *left = true; *right = false; } break;
		case eEquipment_FireballHandRight:	{ *left = false; *right = true; } break;
		case eEquipment_WoodenSword:		{ *left = false; *right = true; } break;
		case eEquipment_WoodenShield:		{ *left = true; *right = false; } break;
		case eEquipment_WoodenBow:			{ *left = true; *right = true; } break;
		case eEquipment_WoodenHelm:			{ *left = false; *right = false; } break;
		case eEquipment_WoodenArmor:		{ *left = false; *right = false; } break;
		case eEquipment_WoodenPants:		{ *left = false; *right = false; } break;
		case eEquipment_WoodenGloves:		{ *left = true; *right = true; } break;
		case eEquipment_WoodenBoots:		{ *left = true; *right = true; } break;
		case eEquipment_WoodenShoulders:	{ *left = true; *right = true; } break;
		case eEquipment_IronSword:			{ *left = false; *right = true; } break;
		case eEquipment_IronShield:			{ *left = true; *right = false; } break;
		case eEquipment_IronHelm:			{ *left = false; *right = false; } break;
		case eEquipment_IronArmor:			{ *left = false; *right = false; } break;
		case eEquipment_IronPants:			{ *left = false; *right = false; } break;
		case eEquipment_IronGloves:			{ *left = true; *right = true; } break;
		case eEquipment_IronBoots:			{ *left = true; *right = true; } break;
		case eEquipment_IronShoulders:		{ *left = true; *right = true; } break;
	}
}