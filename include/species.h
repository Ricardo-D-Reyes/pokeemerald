#ifndef GUARD_SPECIES_H
#define GUARD_SPECIES_H

enum
{
    SPECIES_NONE,       // 0x000
    SPECIES_BULBASAUR,  // 0x001
    SPECIES_IVYSAUR,    // 0x002
    SPECIES_VENUSAUR,   // 0x003
    SPECIES_CHARMANDER, // 0x004
    SPECIES_CHARMELEON, // 0x005
    SPECIES_CHARIZARD,  // 0x006
    SPECIES_SQUIRTLE,   // 0x007
    SPECIES_WARTORTLE,  // 0x008
    SPECIES_BLASTOISE,  // 0x009
    SPECIES_CATERPIE,   // 0x00a
    SPECIES_METAPOD,    // 0x00b
    SPECIES_BUTTERFREE, // 0x00c
    SPECIES_WEEDLE,     // 0x00d
    SPECIES_KAKUNA,     // 0x00e
    SPECIES_BEEDRILL,   // 0x00f
    SPECIES_PIDGEY,     // 0x010
    SPECIES_PIDGEOTTO,  // 0x011
    SPECIES_PIDGEOT,    // 0x012
    SPECIES_RATTATA,    // 0x013
    SPECIES_RATICATE,   // 0x014
    SPECIES_SPEAROW,    // 0x015
    SPECIES_FEAROW,     // 0x016
    SPECIES_EKANS,      // 0x017
    SPECIES_ARBOK,      // 0x018
    SPECIES_PIKACHU,    // 0x019
    SPECIES_RAICHU,     // 0x01a
    SPECIES_SANDSHREW,  // 0x01b
    SPECIES_SANDSLASH,  // 0x01c
    SPECIES_NIDORAN_F,  // 0x01d
    SPECIES_NIDORINA,   // 0x01e
    SPECIES_NIDOQUEEN,  // 0x01f
    SPECIES_NIDORAN_M,  // 0x020
    SPECIES_NIDORINO,   // 0x021
    SPECIES_NIDOKING,   // 0x022
    SPECIES_CLEFAIRY,   // 0x023
    SPECIES_CLEFABLE,   // 0x024
    SPECIES_VULPIX,     // 0x025
    SPECIES_NINETALES,  // 0x026
    SPECIES_JIGGLYPUFF, // 0x027
    SPECIES_WIGGLYTUFF, // 0x028
    SPECIES_ZUBAT,      // 0x029
    SPECIES_GOLBAT,     // 0x02a
    SPECIES_ODDISH,     // 0x02b
    SPECIES_GLOOM,      // 0x02c
    SPECIES_VILEPLUME,  // 0x02d
    SPECIES_PARAS,      // 0x02e
    SPECIES_PARASECT,   // 0x02f
    SPECIES_VENONAT,    // 0x030
    SPECIES_VENOMOTH,   // 0x031
    SPECIES_DIGLETT,    // 0x032
    SPECIES_DUGTRIO,    // 0x033
    SPECIES_MEOWTH,     // 0x034
    SPECIES_PERSIAN,    // 0x035
    SPECIES_PSYDUCK,    // 0x036
    SPECIES_GOLDUCK,    // 0x037
    SPECIES_MANKEY,     // 0x038
    SPECIES_PRIMEAPE,   // 0x039
    SPECIES_GROWLITHE,  // 0x03a
    SPECIES_ARCANINE,   // 0x03b
    SPECIES_POLIWAG,    // 0x03c
    SPECIES_POLIWHIRL,  // 0x03d
    SPECIES_POLIWRATH,  // 0x03e
    SPECIES_ABRA,       // 0x03f
    SPECIES_KADABRA,    // 0x040
    SPECIES_ALAKAZAM,   // 0x041
    SPECIES_MACHOP,     // 0x042
    SPECIES_MACHOKE,    // 0x043
    SPECIES_MACHAMP,    // 0x044
    SPECIES_BELLSPROUT, // 0x045
    SPECIES_WEEPINBELL, // 0x046
    SPECIES_VICTREEBEL, // 0x047
    SPECIES_TENTACOOL,  // 0x048
    SPECIES_TENTACRUEL, // 0x049
    SPECIES_GEODUDE,    // 0x04a
    SPECIES_GRAVELER,   // 0x04b
    SPECIES_GOLEM,      // 0x04c
    SPECIES_PONYTA,     // 0x04d
    SPECIES_RAPIDASH,   // 0x04e
    SPECIES_SLOWPOKE,   // 0x04f
    SPECIES_SLOWBRO,    // 0x050
    SPECIES_MAGNEMITE,  // 0x051
    SPECIES_MAGNETON,   // 0x052
    SPECIES_FARFETCHD,  // 0x053
    SPECIES_DODUO,      // 0x054
    SPECIES_DODRIO,     // 0x055
    SPECIES_SEEL,       // 0x056
    SPECIES_DEWGONG,    // 0x057
    SPECIES_GRIMER,     // 0x058
    SPECIES_MUK,        // 0x059
    SPECIES_SHELLDER,   // 0x05a
    SPECIES_CLOYSTER,   // 0x05b
    SPECIES_GASTLY,     // 0x05c
    SPECIES_HAUNTER,    // 0x05d
    SPECIES_GENGAR,     // 0x05e
    SPECIES_ONIX,       // 0x05f
    SPECIES_DROWZEE,    // 0x060
    SPECIES_HYPNO,      // 0x061
    SPECIES_KRABBY,     // 0x062
    SPECIES_KINGLER,    // 0x063
    SPECIES_VOLTORB,    // 0x064
    SPECIES_ELECTRODE,  // 0x065
    SPECIES_EXEGGCUTE,  // 0x066
    SPECIES_EXEGGUTOR,  // 0x067
    SPECIES_CUBONE,     // 0x068
    SPECIES_MAROWAK,    // 0x069
    SPECIES_HITMONLEE,  // 0x06a
    SPECIES_HITMONCHAN, // 0x06b
    SPECIES_LICKITUNG,  // 0x06c
    SPECIES_KOFFING,    // 0x06d
    SPECIES_WEEZING,    // 0x06e
    SPECIES_RHYHORN,    // 0x06f
    SPECIES_RHYDON,     // 0x070
    SPECIES_CHANSEY,    // 0x071
    SPECIES_TANGELA,    // 0x072
    SPECIES_KANGASKHAN, // 0x073
    SPECIES_HORSEA,     // 0x074
    SPECIES_SEADRA,     // 0x075
    SPECIES_GOLDEEN,    // 0x076
    SPECIES_SEAKING,    // 0x077
    SPECIES_STARYU,     // 0x078
    SPECIES_STARMIE,    // 0x079
    SPECIES_MR_MIME,    // 0x07a
    SPECIES_SCYTHER,    // 0x07b
    SPECIES_JYNX,       // 0x07c
    SPECIES_ELECTABUZZ, // 0x07d
    SPECIES_MAGMAR,     // 0x07e
    SPECIES_PINSIR,     // 0x07f
    SPECIES_TAUROS,     // 0x080
    SPECIES_MAGIKARP,   // 0x081
    SPECIES_GYARADOS,   // 0x082
    SPECIES_LAPRAS,     // 0x083
    SPECIES_DITTO,      // 0x084
    SPECIES_EEVEE,      // 0x085
    SPECIES_VAPOREON,   // 0x086
    SPECIES_JOLTEON,    // 0x087
    SPECIES_FLAREON,    // 0x088
    SPECIES_PORYGON,    // 0x089
    SPECIES_OMANYTE,    // 0x08a
    SPECIES_OMASTAR,    // 0x08b
    SPECIES_KABUTO,     // 0x08c
    SPECIES_KABUTOPS,   // 0x08d
    SPECIES_AERODACTYL, // 0x08e
    SPECIES_SNORLAX,    // 0x08f
    SPECIES_ARTICUNO,   // 0x090
    SPECIES_ZAPDOS,     // 0x091
    SPECIES_MOLTRES,    // 0x092
    SPECIES_DRATINI,    // 0x093
    SPECIES_DRAGONAIR,  // 0x094
    SPECIES_DRAGONITE,  // 0x095
    SPECIES_MEWTWO,     // 0x096
    SPECIES_MEW,        // 0x097
    SPECIES_CHIKORITA,  // 0x098
    SPECIES_BAYLEEF,    // 0x099
    SPECIES_MEGANIUM,   // 0x09a
    SPECIES_CYNDAQUIL,  // 0x09b
    SPECIES_QUILAVA,    // 0x09c
    SPECIES_TYPHLOSION, // 0x09d
    SPECIES_TOTODILE,   // 0x09e
    SPECIES_CROCONAW,   // 0x09f
    SPECIES_FERALIGATR, // 0x0a0
    SPECIES_SENTRET,    // 0x0a1
    SPECIES_FURRET,     // 0x0a2
    SPECIES_HOOTHOOT,   // 0x0a3
    SPECIES_NOCTOWL,    // 0x0a4
    SPECIES_LEDYBA,     // 0x0a5
    SPECIES_LEDIAN,     // 0x0a6
    SPECIES_SPINARAK,   // 0x0a7
    SPECIES_ARIADOS,    // 0x0a8
    SPECIES_CROBAT,     // 0x0a9
    SPECIES_CHINCHOU,   // 0x0aa
    SPECIES_LANTURN,    // 0x0ab
    SPECIES_PICHU,      // 0x0ac
    SPECIES_CLEFFA,     // 0x0ad
    SPECIES_IGGLYBUFF,  // 0x0ae
    SPECIES_TOGEPI,     // 0x0af
    SPECIES_TOGETIC,    // 0x0b0
    SPECIES_NATU,       // 0x0b1
    SPECIES_XATU,       // 0x0b2
    SPECIES_MAREEP,     // 0x0b3
    SPECIES_FLAAFFY,    // 0x0b4
    SPECIES_AMPHAROS,   // 0x0b5
    SPECIES_BELLOSSOM,  // 0x0b6
    SPECIES_MARILL,     // 0x0b7
    SPECIES_AZUMARILL,  // 0x0b8
    SPECIES_SUDOWOODO,  // 0x0b9
    SPECIES_POLITOED,   // 0x0ba
    SPECIES_HOPPIP,     // 0x0bb
    SPECIES_SKIPLOOM,   // 0x0bc
    SPECIES_JUMPLUFF,   // 0x0bd
    SPECIES_AIPOM,      // 0x0be
    SPECIES_SUNKERN,    // 0x0bf
    SPECIES_SUNFLORA,   // 0x0c0
    SPECIES_YANMA,      // 0x0c1
    SPECIES_WOOPER,     // 0x0c2
    SPECIES_QUAGSIRE,   // 0x0c3
    SPECIES_ESPEON,     // 0x0c4
    SPECIES_UMBREON,    // 0x0c5
    SPECIES_MURKROW,    // 0x0c6
    SPECIES_SLOWKING,   // 0x0c7
    SPECIES_MISDREAVUS, // 0x0c8
    SPECIES_UNOWN,      // 0x0c9
    SPECIES_WOBBUFFET,  // 0x0ca
    SPECIES_GIRAFARIG,  // 0x0cb
    SPECIES_PINECO,     // 0x0cc
    SPECIES_FORRETRESS, // 0x0cd
    SPECIES_DUNSPARCE,  // 0x0ce
    SPECIES_GLIGAR,     // 0x0cf
    SPECIES_STEELIX,    // 0x0d0
    SPECIES_SNUBBULL,   // 0x0d1
    SPECIES_GRANBULL,   // 0x0d2
    SPECIES_QWILFISH,   // 0x0d3
    SPECIES_SCIZOR,     // 0x0d4
    SPECIES_SHUCKLE,    // 0x0d5
    SPECIES_HERACROSS,  // 0x0d6
    SPECIES_SNEASEL,    // 0x0d7
    SPECIES_TEDDIURSA,  // 0x0d8
    SPECIES_URSARING,   // 0x0d9
    SPECIES_SLUGMA,     // 0x0da
    SPECIES_MAGCARGO,   // 0x0db
    SPECIES_SWINUB,     // 0x0dc
    SPECIES_PILOSWINE,  // 0x0dd
    SPECIES_CORSOLA,    // 0x0de
    SPECIES_REMORAID,   // 0x0df
    SPECIES_OCTILLERY,  // 0x0e0
    SPECIES_DELIBIRD,   // 0x0e1
    SPECIES_MANTINE,    // 0x0e2
    SPECIES_SKARMORY,   // 0x0e3
    SPECIES_HOUNDOUR,   // 0x0e4
    SPECIES_HOUNDOOM,   // 0x0e5
    SPECIES_KINGDRA,    // 0x0e6
    SPECIES_PHANPY,     // 0x0e7
    SPECIES_DONPHAN,    // 0x0e8
    SPECIES_PORYGON2,   // 0x0e9
    SPECIES_STANTLER,   // 0x0ea
    SPECIES_SMEARGLE,   // 0x0eb
    SPECIES_TYROGUE,    // 0x0ec
    SPECIES_HITMONTOP,  // 0x0ed
    SPECIES_SMOOCHUM,   // 0x0ee
    SPECIES_ELEKID,     // 0x0ef
    SPECIES_MAGBY,      // 0x0f0
    SPECIES_MILTANK,    // 0x0f1
    SPECIES_BLISSEY,    // 0x0f2
    SPECIES_RAIKOU,     // 0x0f3
    SPECIES_ENTEI,      // 0x0f4
    SPECIES_SUICUNE,    // 0x0f5
    SPECIES_LARVITAR,   // 0x0f6
    SPECIES_PUPITAR,    // 0x0f7
    SPECIES_TYRANITAR,  // 0x0f8
    SPECIES_LUGIA,      // 0x0f9
    SPECIES_HO_OH,      // 0x0fa
    SPECIES_CELEBI,     // 0x0fb

    SPECIES_OLD_UNOWN_B,
    SPECIES_OLD_UNOWN_C,
    SPECIES_OLD_UNOWN_D,
    SPECIES_OLD_UNOWN_E,
    SPECIES_OLD_UNOWN_F,
    SPECIES_OLD_UNOWN_G,
    SPECIES_OLD_UNOWN_H,
    SPECIES_OLD_UNOWN_I,
    SPECIES_OLD_UNOWN_J,
    SPECIES_OLD_UNOWN_K,
    SPECIES_OLD_UNOWN_L,
    SPECIES_OLD_UNOWN_M,
    SPECIES_OLD_UNOWN_N,
    SPECIES_OLD_UNOWN_O,
    SPECIES_OLD_UNOWN_P,
    SPECIES_OLD_UNOWN_Q,
    SPECIES_OLD_UNOWN_R,
    SPECIES_OLD_UNOWN_S,
    SPECIES_OLD_UNOWN_T,
    SPECIES_OLD_UNOWN_U,
    SPECIES_OLD_UNOWN_V,
    SPECIES_OLD_UNOWN_W,
    SPECIES_OLD_UNOWN_X,
    SPECIES_OLD_UNOWN_Y,
    SPECIES_OLD_UNOWN_Z,

    SPECIES_TREECKO,    // 0x115
    SPECIES_GROVYLE,    // 0x116
    SPECIES_SCEPTILE,   // 0x117
    SPECIES_TORCHIC,    // 0x118
    SPECIES_COMBUSKEN,  // 0x119
    SPECIES_BLAZIKEN,   // 0x11a
    SPECIES_MUDKIP,     // 0x11b
    SPECIES_MARSHTOMP,  // 0x11c
    SPECIES_SWAMPERT,   // 0x11d
    SPECIES_POOCHYENA,  // 0x11e
    SPECIES_MIGHTYENA,  // 0x11f
    SPECIES_ZIGZAGOON,  // 0x120
    SPECIES_LINOONE,    // 0x121
    SPECIES_WURMPLE,    // 0x122
    SPECIES_SILCOON,    // 0x123
    SPECIES_BEAUTIFLY,  // 0x124
    SPECIES_CASCOON,    // 0x125
    SPECIES_DUSTOX,     // 0x126
    SPECIES_LOTAD,      // 0x127
    SPECIES_LOMBRE,     // 0x128
    SPECIES_LUDICOLO,   // 0x129
    SPECIES_SEEDOT,     // 0x12a
    SPECIES_NUZLEAF,    // 0x12b
    SPECIES_SHIFTRY,    // 0x12c
    SPECIES_NINCADA,    // 0x12d
    SPECIES_NINJASK,    // 0x12e
    SPECIES_SHEDINJA,   // 0x12f
    SPECIES_TAILLOW,    // 0x130
    SPECIES_SWELLOW,    // 0x131
    SPECIES_SHROOMISH,  // 0x132
    SPECIES_BRELOOM,    // 0x133
    SPECIES_SPINDA,     // 0x134
    SPECIES_WINGULL,    // 0x135
    SPECIES_PELIPPER,   // 0x136
    SPECIES_SURSKIT,    // 0x137
    SPECIES_MASQUERAIN, // 0x138
    SPECIES_WAILMER,    // 0x139
    SPECIES_WAILORD,    // 0x13a
    SPECIES_SKITTY,     // 0x13b
    SPECIES_DELCATTY,   // 0x13c
    SPECIES_KECLEON,    // 0x13d
    SPECIES_BALTOY,     // 0x13e
    SPECIES_CLAYDOL,    // 0x13f
    SPECIES_NOSEPASS,   // 0x140
    SPECIES_TORKOAL,    // 0x141
    SPECIES_SABLEYE,    // 0x142
    SPECIES_BARBOACH,   // 0x143
    SPECIES_WHISCASH,   // 0x144
    SPECIES_LUVDISC,    // 0x145
    SPECIES_CORPHISH,   // 0x146
    SPECIES_CRAWDAUNT,  // 0x147
    SPECIES_FEEBAS,     // 0x148
    SPECIES_MILOTIC,    // 0x149
    SPECIES_CARVANHA,   // 0x14a
    SPECIES_SHARPEDO,   // 0x14b
    SPECIES_TRAPINCH,   // 0x14c
    SPECIES_VIBRAVA,    // 0x14d
    SPECIES_FLYGON,     // 0x14e
    SPECIES_MAKUHITA,   // 0x14f
    SPECIES_HARIYAMA,   // 0x150
    SPECIES_ELECTRIKE,  // 0x151
    SPECIES_MANECTRIC,  // 0x152
    SPECIES_NUMEL,      // 0x153
    SPECIES_CAMERUPT,   // 0x154
    SPECIES_SPHEAL,     // 0x155
    SPECIES_SEALEO,     // 0x156
    SPECIES_WALREIN,    // 0x157
    SPECIES_CACNEA,     // 0x158
    SPECIES_CACTURNE,   // 0x159
    SPECIES_SNORUNT,    // 0x15a
    SPECIES_GLALIE,     // 0x15b
    SPECIES_LUNATONE,   // 0x15c
    SPECIES_SOLROCK,    // 0x15d
    SPECIES_AZURILL,    // 0x15e
    SPECIES_SPOINK,     // 0x15f
    SPECIES_GRUMPIG,    // 0x160
    SPECIES_PLUSLE,     // 0x161
    SPECIES_MINUN,      // 0x162
    SPECIES_MAWILE,     // 0x163
    SPECIES_MEDITITE,   // 0x164
    SPECIES_MEDICHAM,   // 0x165
    SPECIES_SWABLU,     // 0x166
    SPECIES_ALTARIA,    // 0x167
    SPECIES_WYNAUT,     // 0x168
    SPECIES_DUSKULL,    // 0x169
    SPECIES_DUSCLOPS,   // 0x16a
    SPECIES_ROSELIA,    // 0x16b
    SPECIES_SLAKOTH,    // 0x16c
    SPECIES_VIGOROTH,   // 0x16d
    SPECIES_SLAKING,    // 0x16e
    SPECIES_GULPIN,     // 0x16f
    SPECIES_SWALOT,     // 0x170
    SPECIES_TROPIUS,    // 0x171
    SPECIES_WHISMUR,    // 0x172
    SPECIES_LOUDRED,    // 0x173
    SPECIES_EXPLOUD,    // 0x174
    SPECIES_CLAMPERL,   // 0x175
    SPECIES_HUNTAIL,    // 0x176
    SPECIES_GOREBYSS,   // 0x177
    SPECIES_ABSOL,      // 0x178
    SPECIES_SHUPPET,    // 0x179
    SPECIES_BANETTE,    // 0x17a
    SPECIES_SEVIPER,    // 0x17b
    SPECIES_ZANGOOSE,   // 0x17c
    SPECIES_RELICANTH,  // 0x17d
    SPECIES_ARON,       // 0x17e
    SPECIES_LAIRON,     // 0x17f
    SPECIES_AGGRON,     // 0x180
    SPECIES_CASTFORM,   // 0x181
    SPECIES_VOLBEAT,    // 0x182
    SPECIES_ILLUMISE,   // 0x183
    SPECIES_LILEEP,     // 0x184
    SPECIES_CRADILY,    // 0x185
    SPECIES_ANORITH,    // 0x186
    SPECIES_ARMALDO,    // 0x187
    SPECIES_RALTS,      // 0x188
    SPECIES_KIRLIA,     // 0x189
    SPECIES_GARDEVOIR,  // 0x18a
    SPECIES_BAGON,      // 0x18b
    SPECIES_SHELGON,    // 0x18c
    SPECIES_SALAMENCE,  // 0x18d
    SPECIES_BELDUM,     // 0x18e
    SPECIES_METANG,     // 0x18f
    SPECIES_METAGROSS,  // 0x190
    SPECIES_REGIROCK,   // 0x191
    SPECIES_REGICE,     // 0x192
    SPECIES_REGISTEEL,  // 0x193
    SPECIES_KYOGRE,     // 0x194
    SPECIES_GROUDON,    // 0x195
    SPECIES_RAYQUAZA,   // 0x196
    SPECIES_LATIAS,     // 0x197
    SPECIES_LATIOS,     // 0x198
    SPECIES_JIRACHI,    // 0x199
    SPECIES_DEOXYS,     // 0x19a
    SPECIES_CHIMECHO,   // 0x19b
    SPECIES_EGG,        // 0x19c

    SPECIES_UNOWN_B,
    SPECIES_UNOWN_C,
    SPECIES_UNOWN_D,
    SPECIES_UNOWN_E,
    SPECIES_UNOWN_F,
    SPECIES_UNOWN_G,
    SPECIES_UNOWN_H,
    SPECIES_UNOWN_I,
    SPECIES_UNOWN_J,
    SPECIES_UNOWN_K,
    SPECIES_UNOWN_L,
    SPECIES_UNOWN_M,
    SPECIES_UNOWN_N,
    SPECIES_UNOWN_O,
    SPECIES_UNOWN_P,
    SPECIES_UNOWN_Q,
    SPECIES_UNOWN_R,
    SPECIES_UNOWN_S,
    SPECIES_UNOWN_T,
    SPECIES_UNOWN_U,
    SPECIES_UNOWN_V,
    SPECIES_UNOWN_W,
    SPECIES_UNOWN_X,
    SPECIES_UNOWN_Y,
    SPECIES_UNOWN_Z,
    SPECIES_UNOWN_EMARK,
    SPECIES_UNOWN_QMARK,
};

#define NUM_SPECIES SPECIES_EGG

#endif // GUARD_SPECIES_H
