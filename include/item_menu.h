#ifndef GUARD_item_menu_H
#define GUARD_item_menu_H

#include "item.h"

#define RETURN_LOCATION_FIELD 0
#define RETURN_LOCATION_BATTLE 1
#define RETURN_LOCATION_POKEMON_LIST 2
#define RETURN_LOCATION_SHOP 3
#define RETURN_LOCATION_FIELD_2 4
#define RETURN_LOCATION_FIELD_3 5
#define RETURN_LOCATION_PC 6
#define RETURN_LOCATION_FIELD_4 7
#define RETURN_LOCATION_FIELD_5 8
#define RETURN_LOCATION_FIELD_6 9
#define RETURN_LOCATION_BATTLE_2 10
#define RETURN_LOCATION_PC_2 11
#define RETURN_LOCATION_UNCHANGED 12

// Exported type declarations
struct BagStruct
{
    void (*bagCallback)(void);
    u8 location;
    u8 pocket;
    u16 unk6;
    u16 cursorPosition[POCKETS_COUNT];
    u16 scrollPosition[POCKETS_COUNT];
};

extern struct BagStruct gUnknown_0203CE58;

struct UnkBagStruct
{
    void (*unk0)(void);
    u8 unk4[0x800];
    u8 unk804[12];
    u8 unk810[7];
    u8 unk817;
    u8 unk818;
    u8 unk819;
    u8 unk81A;
    u8 unk81B:4;
    u8 unk81B_1:2;
    u8 unk81B_3:1;
    u8 unk81B_2:1;
    u8 filler3[2];
    u8 unk81E;
    u8 unk81F;
    const u8* unk820;
    u8 unk824;
    u8 unk825;
    u8 filler[2];
    u8 unk828;
    u8 unk829[POCKETS_COUNT];
    u8 unk82E[6];
    s16 unk834;
    u8 filler4[0xE];
    u8 unk844[32][32];
    u8 filler2[4];
};

extern struct UnkBagStruct *gUnknown_0203CE54;

// Exported RAM declarations

extern u16 gSpecialVar_ItemId;

// Exported ROM declarations
void sub_81AAC14(void);
void sub_81AAC50(void);
void sub_81AAC70(void);
void sub_81AAC28(void);
void bag_menu_mail_related(void);
void CB2_BagMenuFromStartMenu(void);
u8 sub_81ABB2C(u8 pocketId);
bool8 UseRegisteredKeyItemOnField(void);
void CB2_GoToSellMenu(void);

#endif //GUARD_item_menu_H
