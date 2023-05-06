#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

#define ITEM_NONE 0

// Poké Balls
#define ITEM_POKE_BALL 1
#define ITEM_GREAT_BALL 2
#define ITEM_ULTRA_BALL 3
#define ITEM_MASTER_BALL 4
#define ITEM_PREMIER_BALL 5
#define ITEM_HEAL_BALL 6
#define ITEM_NET_BALL 7
#define ITEM_NEST_BALL 8
#define ITEM_DIVE_BALL 9
#define ITEM_DUSK_BALL 10
#define ITEM_TIMER_BALL 11
#define ITEM_QUICK_BALL 12
#define ITEM_REPEAT_BALL 13
#define ITEM_LUXURY_BALL 14
#define ITEM_LEVEL_BALL 15
#define ITEM_LURE_BALL 16
#define ITEM_MOON_BALL 17
#define ITEM_FRIEND_BALL 18
#define ITEM_LOVE_BALL 19
#define ITEM_FAST_BALL 20
#define ITEM_HEAVY_BALL 21
#define ITEM_DREAM_BALL 22
#define ITEM_SAFARI_BALL 23
#define ITEM_SPORT_BALL 24
#define ITEM_PARK_BALL 25
#define ITEM_BEAST_BALL 26
#define ITEM_CHERISH_BALL 27

// Note: If moving ball IDs around ITEM_TM updating FIRST_BALL/LAST_BALL is not sufficient
//       Several places expect the ball IDs to be first and contiguous (e.g. MON_DATA_POKEBALL)
//       If adding new balls ITEM_TM it's easiest to insert them after the last ball and increment the below IDs (and removing ITEM_034 for example)
#define FIRST_BALL ITEM_POKE_BALL
#define LAST_BALL  ITEM_CHERISH_BALL

// Medicine
#define ITEM_POTION 28
#define ITEM_SUPER_POTION 29
#define ITEM_HYPER_POTION 30
#define ITEM_MAX_POTION 31
#define ITEM_FULL_RESTORE 32
#define ITEM_REVIVE 33
#define ITEM_MAX_REVIVE 34
#define ITEM_FRESH_WATER 35
#define ITEM_SODA_POP 36
#define ITEM_LEMONADE 37
#define ITEM_MOOMOO_MILK 38
#define ITEM_ENERGY_POWDER 39
#define ITEM_ENERGY_ROOT 40
#define ITEM_HEAL_POWDER 41
#define ITEM_REVIVAL_HERB 42
#define ITEM_ANTIDOTE 43
#define ITEM_PARALYZE_HEAL 44
#define ITEM_BURN_HEAL 45
#define ITEM_ICE_HEAL 46
#define ITEM_AWAKENING 47
#define ITEM_FULL_HEAL 48
#define ITEM_ETHER 49
#define ITEM_MAX_ETHER 50
#define ITEM_ELIXIR 51
#define ITEM_MAX_ELIXIR 52
#define ITEM_BERRY_JUICE 53
#define ITEM_SACRED_ASH 54
#define ITEM_SWEET_HEART 55
#define ITEM_MAX_HONEY 56

// Regional Specialties
#define ITEM_PEWTER_CRUNCHIES 57
#define ITEM_RAGE_CANDY_BAR 58
#define ITEM_LAVA_COOKIE 59
#define ITEM_OLD_GATEAU 60
#define ITEM_CASTELIACONE 61
#define ITEM_LUMIOSE_GALETTE 62
#define ITEM_SHALOUR_SABLE 63
#define ITEM_BIG_MALASADA 64

// Vitamins
#define ITEM_HP_UP 65
#define ITEM_PROTEIN 66
#define ITEM_IRON 67
#define ITEM_CALCIUM 68
#define ITEM_ZINC 69
#define ITEM_CARBOS 70
#define ITEM_PP_UP 71
#define ITEM_PP_MAX 72

// EV Feathers
#define ITEM_HEALTH_FEATHER 73
#define ITEM_MUSCLE_FEATHER 74
#define ITEM_RESIST_FEATHER 75
#define ITEM_GENIUS_FEATHER 76
#define ITEM_CLEVER_FEATHER 77
#define ITEM_SWIFT_FEATHER 78

// Ability Modifiers
#define ITEM_ABILITY_CAPSULE 79
#define ITEM_ABILITY_PATCH 80

// Mints
#define ITEM_LONELY_MINT 81
#define ITEM_ADAMANT_MINT 82
#define ITEM_NAUGHTY_MINT 83
#define ITEM_BRAVE_MINT 84
#define ITEM_BOLD_MINT 85
#define ITEM_IMPISH_MINT 86
#define ITEM_LAX_MINT 87
#define ITEM_RELAXED_MINT 88
#define ITEM_MODEST_MINT 89
#define ITEM_MILD_MINT 90
#define ITEM_RASH_MINT 91
#define ITEM_QUIET_MINT 92
#define ITEM_CALM_MINT 93
#define ITEM_GENTLE_MINT 94
#define ITEM_CAREFUL_MINT 95
#define ITEM_SASSY_MINT 96
#define ITEM_TIMID_MINT 97
#define ITEM_HASTY_MINT 98
#define ITEM_JOLLY_MINT 99
#define ITEM_NAIVE_MINT 100
#define ITEM_SERIOUS_MINT 101

// Candy
#define ITEM_RARE_CANDY 102
#define ITEM_EXP_CANDY_XS 103
#define ITEM_EXP_CANDY_S 104
#define ITEM_EXP_CANDY_M 105
#define ITEM_EXP_CANDY_L 106
#define ITEM_EXP_CANDY_XL 107
#define ITEM_DYNAMAX_CANDY 108

// Medicinal Flutes
#define ITEM_BLUE_FLUTE 109
#define ITEM_YELLOW_FLUTE 110
#define ITEM_RED_FLUTE 111

// Encounter-modifying Flutes
#define ITEM_BLACK_FLUTE 112
#define ITEM_WHITE_FLUTE 113

// Encounter Modifiers
#define ITEM_REPEL 114
#define ITEM_SUPER_REPEL 115
#define ITEM_MAX_REPEL 116
#define ITEM_LURE 117
#define ITEM_SUPER_LURE 118
#define ITEM_MAX_LURE 119

#define ITEM_ESCAPE_ROPE 120

// X Items
#define ITEM_X_ATTACK 121
#define ITEM_X_DEFENSE 122
#define ITEM_X_SP_ATK 123
#define ITEM_X_SP_DEF 124
#define ITEM_X_SPEED 125
#define ITEM_X_ACCURACY 126

#define ITEM_DIRE_HIT 127
#define ITEM_GUARD_SPEC 128

// Escape Items
#define ITEM_POKE_DOLL 129
#define ITEM_FLUFFY_TAIL 130
#define ITEM_POKE_TOY 131

#define ITEM_MAX_MUSHROOMS 132

// Treasures
#define ITEM_BOTTLE_CAP 133
#define ITEM_GOLD_BOTTLE_CAP 134
#define ITEM_NUGGET 135
#define ITEM_BIG_NUGGET 136
#define ITEM_TINY_MUSHROOM 137
#define ITEM_BIG_MUSHROOM 138
#define ITEM_BALM_MUSHROOM 139
#define ITEM_PEARL 140
#define ITEM_BIG_PEARL 141
#define ITEM_PEARL_STRING 142
#define ITEM_STARDUST 143
#define ITEM_STAR_PIECE 144
#define ITEM_COMET_SHARD 145
#define ITEM_SHOAL_SALT 146
#define ITEM_SHOAL_SHELL 147
#define ITEM_RED_SHARD 148
#define ITEM_BLUE_SHARD 149
#define ITEM_YELLOW_SHARD 150
#define ITEM_GREEN_SHARD 151
#define ITEM_HEART_SCALE 152
#define ITEM_HONEY 153
#define ITEM_RARE_BONE 154
#define ITEM_ODD_KEYSTONE 155
#define ITEM_PRETTY_FEATHER 156
#define ITEM_RELIC_COPPER 157
#define ITEM_RELIC_SILVER 158
#define ITEM_RELIC_GOLD 159
#define ITEM_RELIC_VASE 160
#define ITEM_RELIC_BAND 161
#define ITEM_RELIC_STATUE 162
#define ITEM_RELIC_CROWN 163
#define ITEM_STRANGE_SOUVENIR 164

// Fossils
#define ITEM_HELIX_FOSSIL 165
#define ITEM_DOME_FOSSIL 166
#define ITEM_OLD_AMBER 167
#define ITEM_ROOT_FOSSIL 168
#define ITEM_CLAW_FOSSIL 169
#define ITEM_ARMOR_FOSSIL 170
#define ITEM_SKULL_FOSSIL 171
#define ITEM_COVER_FOSSIL 172
#define ITEM_PLUME_FOSSIL 173
#define ITEM_JAW_FOSSIL 174
#define ITEM_SAIL_FOSSIL 175
#define ITEM_FOSSILIZED_BIRD 176
#define ITEM_FOSSILIZED_FISH 177
#define ITEM_FOSSILIZED_DRAKE 178
#define ITEM_FOSSILIZED_DINO 179

// Mulch
#define ITEM_GROWTH_MULCH 180
#define ITEM_DAMP_MULCH 181
#define ITEM_STABLE_MULCH 182
#define ITEM_GOOEY_MULCH 183
#define ITEM_RICH_MULCH 184
#define ITEM_SURPRISE_MULCH 185
#define ITEM_BOOST_MULCH 186
#define ITEM_AMAZE_MULCH 187

// Apricorns
#define ITEM_RED_APRICORN 188
#define ITEM_BLUE_APRICORN 189
#define ITEM_YELLOW_APRICORN 190
#define ITEM_GREEN_APRICORN 191
#define ITEM_PINK_APRICORN 192
#define ITEM_WHITE_APRICORN 193
#define ITEM_BLACK_APRICORN 194

#define ITEM_WISHING_PIECE 195
#define ITEM_GALARICA_TWIG 196
#define ITEM_ARMORITE_ORE 197
#define ITEM_DYNITE_ORE 198

// Mail
#define ITEM_ORANGE_MAIL 199
#define ITEM_HARBOR_MAIL 200
#define ITEM_GLITTER_MAIL 201
#define ITEM_MECH_MAIL 202
#define ITEM_WOOD_MAIL 203
#define ITEM_WAVE_MAIL 204
#define ITEM_BEAD_MAIL 205
#define ITEM_SHADOW_MAIL 206
#define ITEM_TROPIC_MAIL 207
#define ITEM_DREAM_MAIL 208
#define ITEM_FAB_MAIL 209
#define ITEM_RETRO_MAIL 210

#define FIRST_MAIL_INDEX ITEM_ORANGE_MAIL

// Evolution Items
#define ITEM_FIRE_STONE 211
#define ITEM_WATER_STONE 212
#define ITEM_THUNDER_STONE 213
#define ITEM_LEAF_STONE 214
#define ITEM_ICE_STONE 215
#define ITEM_SUN_STONE 216
#define ITEM_MOON_STONE 217
#define ITEM_SHINY_STONE 218
#define ITEM_DUSK_STONE 219
#define ITEM_DAWN_STONE 220
#define ITEM_SWEET_APPLE 221
#define ITEM_TART_APPLE 222
#define ITEM_CRACKED_POT 223
#define ITEM_CHIPPED_POT 224
#define ITEM_GALARICA_CUFF 225
#define ITEM_GALARICA_WREATH 226
#define ITEM_DRAGON_SCALE 227
#define ITEM_UPGRADE 228
#define ITEM_PROTECTOR 229
#define ITEM_ELECTIRIZER 230
#define ITEM_MAGMARIZER 231
#define ITEM_DUBIOUS_DISC 232
#define ITEM_REAPER_CLOTH 233
#define ITEM_PRISM_SCALE 234
#define ITEM_WHIPPED_DREAM 235
#define ITEM_SACHET 236
#define ITEM_OVAL_STONE 237
#define ITEM_STRAWBERRY_SWEET 238
#define ITEM_LOVE_SWEET 239
#define ITEM_BERRY_SWEET 240
#define ITEM_CLOVER_SWEET 241
#define ITEM_FLOWER_SWEET 242
#define ITEM_STAR_SWEET 243
#define ITEM_RIBBON_SWEET 244

#define ITEM_EVERSTONE 245

// Nectars
#define ITEM_RED_NECTAR 246
#define ITEM_YELLOW_NECTAR 247
#define ITEM_PINK_NECTAR 248
#define ITEM_PURPLE_NECTAR 249

// Plates
#define ITEM_FLAME_PLATE 250
#define ITEM_SPLASH_PLATE 251
#define ITEM_ZAP_PLATE 252
#define ITEM_MEADOW_PLATE 253
#define ITEM_ICICLE_PLATE 254
#define ITEM_FIST_PLATE 255
#define ITEM_TOXIC_PLATE 256
#define ITEM_EARTH_PLATE 257
#define ITEM_SKY_PLATE 258
#define ITEM_MIND_PLATE 259
#define ITEM_INSECT_PLATE 260
#define ITEM_STONE_PLATE 261
#define ITEM_SPOOKY_PLATE 262
#define ITEM_DRACO_PLATE 263
#define ITEM_DREAD_PLATE 264
#define ITEM_IRON_PLATE 265
#define ITEM_PIXIE_PLATE 266

// Drives
#define ITEM_DOUSE_DRIVE 267
#define ITEM_SHOCK_DRIVE 268
#define ITEM_BURN_DRIVE 269
#define ITEM_CHILL_DRIVE 270

// Memories
#define ITEM_FIRE_MEMORY 271
#define ITEM_WATER_MEMORY 272
#define ITEM_ELECTRIC_MEMORY 273
#define ITEM_GRASS_MEMORY 274
#define ITEM_ICE_MEMORY 275
#define ITEM_FIGHTING_MEMORY 276
#define ITEM_POISON_MEMORY 277
#define ITEM_GROUND_MEMORY 278
#define ITEM_FLYING_MEMORY 279
#define ITEM_PSYCHIC_MEMORY 280
#define ITEM_BUG_MEMORY 281
#define ITEM_ROCK_MEMORY 282
#define ITEM_GHOST_MEMORY 283
#define ITEM_DRAGON_MEMORY 284
#define ITEM_DARK_MEMORY 285
#define ITEM_STEEL_MEMORY 286
#define ITEM_FAIRY_MEMORY 287

#define ITEM_RUSTED_SWORD 288
#define ITEM_RUSTED_SHIELD 289

// Colored Orbs
#define ITEM_RED_ORB 290
#define ITEM_BLUE_ORB 291

// Mega Stones
#define ITEM_VENUSAURITE 292
#define ITEM_CHARIZARDITE_X 293
#define ITEM_CHARIZARDITE_Y 294
#define ITEM_BLASTOISINITE 295
#define ITEM_BEEDRILLITE 296
#define ITEM_PIDGEOTITE 297
#define ITEM_ALAKAZITE 298
#define ITEM_SLOWBRONITE 299
#define ITEM_GENGARITE 300
#define ITEM_KANGASKHANITE 301
#define ITEM_PINSIRITE 302
#define ITEM_GYARADOSITE 303
#define ITEM_AERODACTYLITE 304
#define ITEM_MEWTWONITE_X 305
#define ITEM_MEWTWONITE_Y 306
#define ITEM_AMPHAROSITE 307
#define ITEM_STEELIXITE 308
#define ITEM_SCIZORITE 309
#define ITEM_HERACRONITE 310
#define ITEM_HOUNDOOMINITE 311
#define ITEM_TYRANITARITE 312
#define ITEM_SCEPTILITE 313
#define ITEM_BLAZIKENITE 314
#define ITEM_SWAMPERTITE 315
#define ITEM_GARDEVOIRITE 316
#define ITEM_SABLENITE 317
#define ITEM_MAWILITE 318
#define ITEM_AGGRONITE 319
#define ITEM_MEDICHAMITE 320
#define ITEM_MANECTITE 321
#define ITEM_SHARPEDONITE 322
#define ITEM_CAMERUPTITE 323
#define ITEM_ALTARIANITE 324
#define ITEM_BANETTITE 325
#define ITEM_ABSOLITE 326
#define ITEM_GLALITITE 327
#define ITEM_SALAMENCITE 328
#define ITEM_METAGROSSITE 329
#define ITEM_LATIASITE 330
#define ITEM_LATIOSITE 331
#define ITEM_LOPUNNITE 332
#define ITEM_GARCHOMPITE 333
#define ITEM_LUCARIONITE 334
#define ITEM_ABOMASITE 335
#define ITEM_GALLADITE 336
#define ITEM_AUDINITE 337
#define ITEM_DIANCITE 338

// Gems
#define ITEM_NORMAL_GEM 339
#define ITEM_FIRE_GEM 340
#define ITEM_WATER_GEM 341
#define ITEM_ELECTRIC_GEM 342
#define ITEM_GRASS_GEM 343
#define ITEM_ICE_GEM 344
#define ITEM_FIGHTING_GEM 345
#define ITEM_POISON_GEM 346
#define ITEM_GROUND_GEM 347
#define ITEM_FLYING_GEM 348
#define ITEM_PSYCHIC_GEM 349
#define ITEM_BUG_GEM 350
#define ITEM_ROCK_GEM 351
#define ITEM_GHOST_GEM 352
#define ITEM_DRAGON_GEM 353
#define ITEM_DARK_GEM 354
#define ITEM_STEEL_GEM 355
#define ITEM_FAIRY_GEM 356

// Z-Crystals
#define ITEM_NORMALIUM_Z 357
#define ITEM_FIRIUM_Z 358
#define ITEM_WATERIUM_Z 359
#define ITEM_ELECTRIUM_Z 360
#define ITEM_GRASSIUM_Z 361
#define ITEM_ICIUM_Z 362
#define ITEM_FIGHTINIUM_Z 363
#define ITEM_POISONIUM_Z 364
#define ITEM_GROUNDIUM_Z 365
#define ITEM_FLYINIUM_Z 366
#define ITEM_PSYCHIUM_Z 367
#define ITEM_BUGINIUM_Z 368
#define ITEM_ROCKIUM_Z 369
#define ITEM_GHOSTIUM_Z 370
#define ITEM_DRAGONIUM_Z 371
#define ITEM_DARKINIUM_Z 372
#define ITEM_STEELIUM_Z 373
#define ITEM_FAIRIUM_Z 374
#define ITEM_PIKANIUM_Z 375
#define ITEM_EEVIUM_Z 376
#define ITEM_SNORLIUM_Z 377
#define ITEM_MEWNIUM_Z 378
#define ITEM_DECIDIUM_Z 379
#define ITEM_INCINIUM_Z 380
#define ITEM_PRIMARIUM_Z 381
#define ITEM_LYCANIUM_Z 382
#define ITEM_MIMIKIUM_Z 383
#define ITEM_KOMMONIUM_Z 384
#define ITEM_TAPUNIUM_Z 385
#define ITEM_SOLGANIUM_Z 386
#define ITEM_LUNALIUM_Z 387
#define ITEM_MARSHADIUM_Z 388
#define ITEM_ALORAICHIUM_Z 389
#define ITEM_PIKASHUNIUM_Z 390
#define ITEM_ULTRANECROZIUM_Z 391

// Species-specific Held Items
#define ITEM_LIGHT_BALL 392
#define ITEM_LEEK 393
#define ITEM_THICK_CLUB 394
#define ITEM_LUCKY_PUNCH 395
#define ITEM_METAL_POWDER 396
#define ITEM_QUICK_POWDER 397
#define ITEM_DEEP_SEA_SCALE 398
#define ITEM_DEEP_SEA_TOOTH 399
#define ITEM_SOUL_DEW 400
#define ITEM_ADAMANT_ORB 401
#define ITEM_LUSTROUS_ORB 402
#define ITEM_GRISEOUS_ORB 403

// Incenses
#define ITEM_SEA_INCENSE 404
#define ITEM_LAX_INCENSE 405
#define ITEM_ODD_INCENSE 406
#define ITEM_ROCK_INCENSE 407
#define ITEM_FULL_INCENSE 408
#define ITEM_WAVE_INCENSE 409
#define ITEM_ROSE_INCENSE 410
#define ITEM_LUCK_INCENSE 411
#define ITEM_PURE_INCENSE 412

// Contest Scarves
#define ITEM_RED_SCARF 413
#define ITEM_BLUE_SCARF 414
#define ITEM_PINK_SCARF 415
#define ITEM_GREEN_SCARF 416
#define ITEM_YELLOW_SCARF 417

// EV Gain Modifiers
#define ITEM_MACHO_BRACE 418
#define ITEM_POWER_WEIGHT 419
#define ITEM_POWER_BRACER 420
#define ITEM_POWER_BELT 421
#define ITEM_POWER_LENS 422
#define ITEM_POWER_BAND 423
#define ITEM_POWER_ANKLET 424

// Type-boosting Held Items
#define ITEM_SILK_SCARF 425
#define ITEM_CHARCOAL 426
#define ITEM_MYSTIC_WATER 427
#define ITEM_MAGNET 428
#define ITEM_MIRACLE_SEED 429
#define ITEM_NEVER_MELT_ICE 430
#define ITEM_BLACK_BELT 431
#define ITEM_POISON_BARB 432
#define ITEM_SOFT_SAND 433
#define ITEM_SHARP_BEAK 434
#define ITEM_TWISTED_SPOON 435
#define ITEM_SILVER_POWDER 436
#define ITEM_HARD_STONE 437
#define ITEM_SPELL_TAG 438
#define ITEM_DRAGON_FANG 439
#define ITEM_BLACK_GLASSES 440
#define ITEM_METAL_COAT 441

// Choice Items
#define ITEM_CHOICE_BAND 442
#define ITEM_CHOICE_SPECS 443
#define ITEM_CHOICE_SCARF 444

// Status Orbs
#define ITEM_FLAME_ORB 445
#define ITEM_TOXIC_ORB 446

// Weather Rocks
#define ITEM_DAMP_ROCK 447
#define ITEM_HEAT_ROCK 448
#define ITEM_SMOOTH_ROCK 449
#define ITEM_ICY_ROCK 450

// Terrain Seeds
#define ITEM_ELECTRIC_SEED 451
#define ITEM_PSYCHIC_SEED 452
#define ITEM_MISTY_SEED 453
#define ITEM_GRASSY_SEED 454

// Type-activated Stat Modifiers
#define ITEM_ABSORB_BULB 455
#define ITEM_CELL_BATTERY 456
#define ITEM_LUMINOUS_MOSS 457
#define ITEM_SNOWBALL 458

// Misc. Held Items
#define ITEM_BRIGHT_POWDER 459
#define ITEM_WHITE_HERB 460
#define ITEM_EXP_SHARE 461
#define ITEM_QUICK_CLAW 462
#define ITEM_SOOTHE_BELL 463
#define ITEM_MENTAL_HERB 464
#define ITEM_KINGS_ROCK 465
#define ITEM_AMULET_COIN 466
#define ITEM_CLEANSE_TAG 467
#define ITEM_SMOKE_BALL 468
#define ITEM_FOCUS_BAND 469
#define ITEM_LUCKY_EGG 470
#define ITEM_SCOPE_LENS 471
#define ITEM_LEFTOVERS 472
#define ITEM_SHELL_BELL 473
#define ITEM_WIDE_LENS 474
#define ITEM_MUSCLE_BAND 475
#define ITEM_WISE_GLASSES 476
#define ITEM_EXPERT_BELT 477
#define ITEM_LIGHT_CLAY 478
#define ITEM_LIFE_ORB 479
#define ITEM_POWER_HERB 480
#define ITEM_FOCUS_SASH 481
#define ITEM_ZOOM_LENS 482
#define ITEM_METRONOME 483
#define ITEM_IRON_BALL 484
#define ITEM_LAGGING_TAIL 485
#define ITEM_DESTINY_KNOT 486
#define ITEM_BLACK_SLUDGE 487
#define ITEM_GRIP_CLAW 488
#define ITEM_STICKY_BARB 489
#define ITEM_SHED_SHELL 490
#define ITEM_BIG_ROOT 491
#define ITEM_RAZOR_CLAW 492
#define ITEM_RAZOR_FANG 493
#define ITEM_EVIOLITE 494
#define ITEM_FLOAT_STONE 495
#define ITEM_ROCKY_HELMET 496
#define ITEM_AIR_BALLOON 497
#define ITEM_RED_CARD 498
#define ITEM_RING_TARGET 499
#define ITEM_BINDING_BAND 500
#define ITEM_EJECT_BUTTON 501
#define ITEM_WEAKNESS_POLICY 502
#define ITEM_ASSAULT_VEST 503
#define ITEM_SAFETY_GOGGLES 504
#define ITEM_ADRENALINE_ORB 505
#define ITEM_TERRAIN_EXTENDER 506
#define ITEM_PROTECTIVE_PADS 507
#define ITEM_THROAT_SPRAY 508
#define ITEM_EJECT_PACK 509
#define ITEM_HEAVY_DUTY_BOOTS 510
#define ITEM_BLUNDER_POLICY 511
#define ITEM_ROOM_SERVICE 512
#define ITEM_UTILITY_UMBRELLA 513

// Berries
#define ITEM_CHERI_BERRY 514
#define ITEM_CHESTO_BERRY 515
#define ITEM_PECHA_BERRY 516
#define ITEM_RAWST_BERRY 517
#define ITEM_ASPEAR_BERRY 518
#define ITEM_LEPPA_BERRY 519
#define ITEM_ORAN_BERRY 520
#define ITEM_PERSIM_BERRY 521
#define ITEM_LUM_BERRY 522
#define ITEM_SITRUS_BERRY 523
#define ITEM_FIGY_BERRY 524
#define ITEM_WIKI_BERRY 525
#define ITEM_MAGO_BERRY 526
#define ITEM_AGUAV_BERRY 527
#define ITEM_IAPAPA_BERRY 528
#define ITEM_RAZZ_BERRY 529
#define ITEM_BLUK_BERRY 530
#define ITEM_NANAB_BERRY 531
#define ITEM_WEPEAR_BERRY 532
#define ITEM_PINAP_BERRY 533
#define ITEM_POMEG_BERRY 534
#define ITEM_KELPSY_BERRY 535
#define ITEM_QUALOT_BERRY 536
#define ITEM_HONDEW_BERRY 537
#define ITEM_GREPA_BERRY 538
#define ITEM_TAMATO_BERRY 539
#define ITEM_CORNN_BERRY 540
#define ITEM_MAGOST_BERRY 541
#define ITEM_RABUTA_BERRY 542
#define ITEM_NOMEL_BERRY 543
#define ITEM_SPELON_BERRY 544
#define ITEM_PAMTRE_BERRY 545
#define ITEM_WATMEL_BERRY 546
#define ITEM_DURIN_BERRY 547
#define ITEM_BELUE_BERRY 548
#define ITEM_CHILAN_BERRY 549
#define ITEM_OCCA_BERRY 550
#define ITEM_PASSHO_BERRY 551
#define ITEM_WACAN_BERRY 552
#define ITEM_RINDO_BERRY 553
#define ITEM_YACHE_BERRY 554
#define ITEM_CHOPLE_BERRY 555
#define ITEM_KEBIA_BERRY 556
#define ITEM_SHUCA_BERRY 557
#define ITEM_COBA_BERRY 558
#define ITEM_PAYAPA_BERRY 559
#define ITEM_TANGA_BERRY 560
#define ITEM_CHARTI_BERRY 561
#define ITEM_KASIB_BERRY 562
#define ITEM_HABAN_BERRY 563
#define ITEM_COLBUR_BERRY 564
#define ITEM_BABIRI_BERRY 565
#define ITEM_ROSELI_BERRY 566
#define ITEM_LIECHI_BERRY 567
#define ITEM_GANLON_BERRY 568
#define ITEM_SALAC_BERRY 569
#define ITEM_PETAYA_BERRY 570
#define ITEM_APICOT_BERRY 571
#define ITEM_LANSAT_BERRY 572
#define ITEM_STARF_BERRY 573
#define ITEM_ENIGMA_BERRY 574
#define ITEM_MICLE_BERRY 575
#define ITEM_CUSTAP_BERRY 576
#define ITEM_JABOCA_BERRY 577
#define ITEM_ROWAP_BERRY 578
#define ITEM_KEE_BERRY 579
#define ITEM_MARANGA_BERRY 580
#define ITEM_ENIGMA_BERRY_E_READER 581

#define FIRST_BERRY_INDEX ITEM_CHERI_BERRY
#define LAST_BERRY_INDEX  ITEM_ENIGMA_BERRY_E_READER

#define ITEM_PLACEHOLDER 582

// TMs/HMs
#define ITEM_TM01 583
#define ITEM_TM02 584
#define ITEM_TM03 585
#define ITEM_TM04 586
#define ITEM_TM05 587
#define ITEM_TM06 588
#define ITEM_TM07 589
#define ITEM_TM08 590
#define ITEM_TM09 591
#define ITEM_TM10 592
#define ITEM_TM11 593
#define ITEM_TM12 594
#define ITEM_TM13 595
#define ITEM_TM14 596
#define ITEM_TM15 597
#define ITEM_TM16 598
#define ITEM_TM17 599
#define ITEM_TM18 600
#define ITEM_TM19 601
#define ITEM_TM20 602
#define ITEM_TM21 603
#define ITEM_TM22 604
#define ITEM_TM23 605
#define ITEM_TM24 606
#define ITEM_TM25 607
#define ITEM_TM26 608
#define ITEM_TM27 609
#define ITEM_TM28 610
#define ITEM_TM29 611
#define ITEM_TM30 612
#define ITEM_TM31 613
#define ITEM_TM32 614
#define ITEM_TM33 615
#define ITEM_TM34 616
#define ITEM_TM35 617
#define ITEM_TM36 618
#define ITEM_TM37 619
#define ITEM_TM38 620
#define ITEM_TM39 621
#define ITEM_TM40 622
#define ITEM_TM41 623
#define ITEM_TM42 624
#define ITEM_TM43 625
#define ITEM_TM44 626
#define ITEM_TM45 627
#define ITEM_TM46 628
#define ITEM_TM47 629
#define ITEM_TM48 630
#define ITEM_TM49 631
#define ITEM_TM50 632
#define ITEM_TM51 633
#define ITEM_TM52 634
#define ITEM_TM53 635
#define ITEM_TM54 636
#define ITEM_TM55 637
#define ITEM_TM56 638
#define ITEM_TM57 639
#define ITEM_TM58 640
#define ITEM_TM59 641
#define ITEM_TM60 642
#define ITEM_TM61 643
#define ITEM_TM62 644
#define ITEM_TM63 645
#define ITEM_TM64 646
#define ITEM_TM65 647
#define ITEM_TM66 648
#define ITEM_TM67 649
#define ITEM_TM68 650
#define ITEM_TM69 651
#define ITEM_TM70 652
#define ITEM_TM71 653
#define ITEM_TM72 654
#define ITEM_TM73 655
#define ITEM_TM74 656
#define ITEM_TM75 657
#define ITEM_TM76 658
#define ITEM_TM77 659
#define ITEM_TM78 660
#define ITEM_TM79 661
#define ITEM_TM80 662
#define ITEM_TM81 663
#define ITEM_TM82 664
#define ITEM_TM83 665
#define ITEM_TM84 666
#define ITEM_TM85 667
#define ITEM_TM86 668
#define ITEM_TM87 669
#define ITEM_TM88 670
#define ITEM_TM89 671
#define ITEM_TM90 672
#define ITEM_TM91 673
#define ITEM_TM92 674
#define ITEM_TM93 675
#define ITEM_TM94 676
#define ITEM_TM95 677
#define ITEM_TM96 678
#define ITEM_TM97 679
#define ITEM_TM98 690
#define ITEM_TM99 681
#define ITEM_TM100 682
#define ITEM_TM101 683
#define ITEM_TM102 684
#define ITEM_TM103 685
#define ITEM_TM104 686
#define ITEM_TM105 687
#define ITEM_TM106 688
#define ITEM_TM107 689
#define ITEM_TM108 690
#define ITEM_TM109 691
#define ITEM_TM110 692
#define ITEM_TM111 693
#define ITEM_TM112 694
#define ITEM_TM113 695
#define ITEM_TM114 696
#define ITEM_TM115 697
#define ITEM_TM116 698
#define ITEM_TM117 699
#define ITEM_TM118 700
#define ITEM_TM119 701
#define ITEM_TM120 702
#define ITEM_TM121 703
#define ITEM_TM122 704
#define ITEM_TM123 705
#define ITEM_TM124 706
#define ITEM_TM125 707
#define ITEM_TM126 708
#define ITEM_TM127 709
#define ITEM_TM128 710
#define ITEM_TM129 711
#define ITEM_TM130 712
#define ITEM_TM131 713
#define ITEM_TM132 714
#define ITEM_TM133 715
#define ITEM_TM134 716
#define ITEM_TM135 717
#define ITEM_TM136 718
#define ITEM_TM137 719
#define ITEM_TM138 720
#define ITEM_TM139 721
#define ITEM_TM140 722
#define ITEM_TM141 723
#define ITEM_TM142 724
#define ITEM_TM143 725
#define ITEM_TM144 726
#define ITEM_TM145 727
#define ITEM_TM146 728
#define ITEM_TM147 729
#define ITEM_TM148 730
#define ITEM_TM149 731
#define ITEM_TM150 732
#define ITEM_TM151 733
#define ITEM_TM152 734
#define ITEM_TM153 735
#define ITEM_TM154 736
#define ITEM_TM155 737
#define ITEM_TM156 738
#define ITEM_TM157 739
#define ITEM_TM158 740
#define ITEM_TM159 741
#define ITEM_TM160 742
#define ITEM_TM161 743
#define ITEM_TM162 744
#define ITEM_TM163 745
#define ITEM_TM164 746
#define ITEM_TM165 747
#define ITEM_TM166 748
#define ITEM_TM167 749
#define ITEM_TM168 750
#define ITEM_TM169 751
#define ITEM_TM170 752
#define ITEM_TM171 753
#define ITEM_TM172 754
#define ITEM_TM173 755
#define ITEM_TM174 756
#define ITEM_TM175 757
#define ITEM_TM176 758
#define ITEM_TM177 759
#define ITEM_TM178 760
#define ITEM_TM179 761
#define ITEM_TM180 762
#define ITEM_TM181 763
#define ITEM_TM182 764
#define ITEM_TM183 765
#define ITEM_TM184 766
#define ITEM_TM185 767
#define ITEM_TM186 768
#define ITEM_TM187 769
#define ITEM_TM188 770
#define ITEM_TM189 771
#define ITEM_TM190 772
#define ITEM_TM191 773
#define ITEM_TM192 774
#define ITEM_TM193 775
#define ITEM_TM194 776
#define ITEM_TM195 777
#define ITEM_TM196 778
#define ITEM_TM197 779
#define ITEM_TM198 790
#define ITEM_TM199 781
#define ITEM_TM200 782

#define ITEM_HM01 783
#define ITEM_HM02 784
#define ITEM_HM03 785
#define ITEM_HM04 786
#define ITEM_HM05 787
#define ITEM_HM06 788
#define ITEM_HM07 789
#define ITEM_HM08 790
#define ITEM_HM09 791

#define ITEM_TM01_MEGA_PUNCH ITEM_TM01
#define ITEM_TM02_MEGA_KICK ITEM_TM02
#define ITEM_TM03_PAY_DAY ITEM_TM03
#define ITEM_TM04_FIRE_PUNCH ITEM_TM04
#define ITEM_TM05_ICE_PUNCH ITEM_TM05
#define ITEM_TM06_THUNDER_PUNCH ITEM_TM06
#define ITEM_TM07_TOXIC ITEM_TM07
#define ITEM_TM08_PIN_MISSILE ITEM_TM08
#define ITEM_TM09_HYPER_BEAM ITEM_TM09
#define ITEM_TM10_GIGA_IMPACT ITEM_TM10
#define ITEM_TM11_MAGICAL_LEAF ITEM_TM11
#define ITEM_TM12_SOLAR_BEAM ITEM_TM12
#define ITEM_TM13_SOLAR_BLADE ITEM_TM13
#define ITEM_TM14_FIRE_SPIN ITEM_TM14
#define ITEM_TM15_THUNDER_WAVE ITEM_TM15
#define ITEM_TM16_DIG ITEM_TM16
#define ITEM_TM17_SCREECH ITEM_TM17
#define ITEM_TM18_LIGHT_SCREEN ITEM_TM18
#define ITEM_TM19_REFLECT ITEM_TM19
#define ITEM_TM20_SAFEGUARD ITEM_TM20
#define ITEM_TM21_SELF_DESTRUCT ITEM_TM21
#define ITEM_TM22_REST ITEM_TM22
#define ITEM_TM23_ROCK_SLIDE ITEM_TM23
#define ITEM_TM24_THIEF ITEM_TM24
#define ITEM_TM25_SNORE ITEM_TM25
#define ITEM_TM26_PROTECT ITEM_TM26
#define ITEM_TM27_SCARY_FACE ITEM_TM27
#define ITEM_TM28_ICY_WIND ITEM_TM28
#define ITEM_TM29_GIGA_DRAIN ITEM_TM29
#define ITEM_TM30_CHARM ITEM_TM30
#define ITEM_TM31_STEEL_WING ITEM_TM31
#define ITEM_TM32_ATTRACT ITEM_TM32
#define ITEM_TM33_SANDSTORM ITEM_TM33
#define ITEM_TM34_RAIN_DANCE ITEM_TM34
#define ITEM_TM35_SUNNY_DAY ITEM_TM35
#define ITEM_TM36_HAIL ITEM_TM36
#define ITEM_TM37_WHIRLPOOL ITEM_TM37
#define ITEM_TM38_BEAT_UP ITEM_TM38
#define ITEM_TM39_WILL_O_WISP ITEM_TM39
#define ITEM_TM40_FACADE ITEM_TM40
#define ITEM_TM41_SWIFT ITEM_TM41
#define ITEM_TM42_HELPING_HAND ITEM_TM42
#define ITEM_TM43_REVENGE ITEM_TM43
#define ITEM_TM44_BRICK_BREAK ITEM_TM44
#define ITEM_TM45_IMPRISON ITEM_TM45
#define ITEM_TM46_AERIAL_ACE ITEM_TM46
#define ITEM_TM47_WEATHER_BALL ITEM_TM47
#define ITEM_TM48_FAKE_TEARS ITEM_TM48
#define ITEM_TM49_ROCK_TOMB ITEM_TM49
#define ITEM_TM50_SAND_TOMB ITEM_TM50
#define ITEM_TM51_BULLET_SEED ITEM_TM51
#define ITEM_TM52_ICICLE_SPEAR ITEM_TM52
#define ITEM_TM53_BOUNCE ITEM_TM53
#define ITEM_TM54_MUD_SHOT ITEM_TM54
#define ITEM_TM55_ROCK_OF_BLAST ITEM_TM55
#define ITEM_TM56_BRINE ITEM_TM56
#define ITEM_TM57_U_TURN ITEM_TM57
#define ITEM_TM58_PAYBACK ITEM_TM58
#define ITEM_TM59_ASSURANCE ITEM_TM59
#define ITEM_TM60_FLING ITEM_TM60
#define ITEM_TM61_POWER_SWAP ITEM_TM61
#define ITEM_TM62_GUARD_SWAP ITEM_TM62
#define ITEM_TM63_SPEED_SWAP ITEM_TM63
#define ITEM_TM64_DRAIN_PUNCH ITEM_TM64
#define ITEM_TM65_AVALANCHE ITEM_TM65
#define ITEM_TM66_SHADOW_CLAW ITEM_TM66
#define ITEM_TM67_THUNDER_FANG ITEM_TM67
#define ITEM_TM68_ICE_FANG ITEM_TM68
#define ITEM_TM69_FIRE_FANG ITEM_TM69
#define ITEM_TM70_PSYCHO_CUT ITEM_TM70
#define ITEM_TM71_TRICK_ROOM ITEM_TM71
#define ITEM_TM72_WONDER_ROOM ITEM_TM72
#define ITEM_TM73_MAGIC_ROOM ITEM_TM73
#define ITEM_TM74_CROSS_POISON ITEM_TM74
#define ITEM_TM75_VENOSHOCK ITEM_TM75
#define ITEM_TM76_LOW_SWEEP ITEM_TM76
#define ITEM_TM77_ROUND ITEM_TM77
#define ITEM_TM78_HEX ITEM_TM78
#define ITEM_TM79_ACROBATICS ITEM_TM79
#define ITEM_TM80_RETALIATE ITEM_TM80
#define ITEM_TM81_VOLT_SWITCH ITEM_TM81
#define ITEM_TM82_BULLDOZE ITEM_TM82
#define ITEM_TM83_ELECTROWEB ITEM_TM83
#define ITEM_TM84_RAZOR_SHELL ITEM_TM84
#define ITEM_TM85_TAIL_SLAP ITEM_TM85
#define ITEM_TM86_SNARL ITEM_TM86
#define ITEM_TM87_PHANTOM_FORCE ITEM_TM87
#define ITEM_TM88_DRAINING_KISS ITEM_TM88
#define ITEM_TM89_GRASSY_TERRAIN ITEM_TM89
#define ITEM_TM90_MISTY_TERRAIN ITEM_TM90
#define ITEM_TM91_ELECTRIC_TERRAIN ITEM_TM91
#define ITEM_TM92_PSYCHIC_TERRAIN ITEM_TM92
#define ITEM_TM93_MYSTICAL_FIRE ITEM_TM93
#define ITEM_TM94_EERIE_IMPULSE ITEM_TM94
#define ITEM_TM95_FALSE_SWIPE ITEM_TM95
#define ITEM_TM96_AIR_SLASH ITEM_TM96
#define ITEM_TM97_SMART_STRIKE ITEM_TM97
#define ITEM_TM98_BRUTAL_SWING ITEM_TM98
#define ITEM_TM99_STOMPING_TANTRUM ITEM_TM99
#define ITEM_TM100_BREAKING_SWIPE ITEM_TM100
#define ITEM_TM101_SWORDS_DANCE ITEM_TM101
#define ITEM_TM102_BODY_SLAM ITEM_TM102
#define ITEM_TM103_FLAMETHROWER ITEM_TM103
#define ITEM_TM104_HYDRO_PUMP ITEM_TM104
#define ITEM_TM105_TORMENT ITEM_TM105
#define ITEM_TM106_ICE_BEAM ITEM_TM106
#define ITEM_TM107_BLIZZARD ITEM_TM107
#define ITEM_TM108_LOW_KICK ITEM_TM108
#define ITEM_TM109_THUNDERBOLT ITEM_TM109
#define ITEM_TM110_THUNDER ITEM_TM110
#define ITEM_TM111_EARTHQUAKE ITEM_TM111
#define ITEM_TM112_PSYCHIC ITEM_TM112
#define ITEM_TM113_AGILITY ITEM_TM113
#define ITEM_TM114_FOCUS_ENERGY ITEM_TM114
#define ITEM_TM115_METRONOME ITEM_TM115
#define ITEM_TM116_FIRE_BLAST ITEM_TM116
#define ITEM_TM117_CHARGE_BEAM ITEM_TM117
#define ITEM_TM118_AMNESIA ITEM_TM118
#define ITEM_TM119_LEECH_LIFE ITEM_TM119
#define ITEM_TM120_TRI_ATTACK ITEM_TM120
#define ITEM_TM121_SUBSTITUTE ITEM_TM121
#define ITEM_TM122_REVERSAL ITEM_TM122
#define ITEM_TM123_SLUDGE_BOMB ITEM_TM123
#define ITEM_TM124_SPIKES ITEM_TM124
#define ITEM_TM125_OUTRAGE ITEM_TM125
#define ITEM_TM126_PSYSHOCK ITEM_TM126
#define ITEM_TM127_ENDURE ITEM_TM127
#define ITEM_TM128_SLEEP_TALK ITEM_TM128
#define ITEM_TM129_MEGAHORN ITEM_TM129
#define ITEM_TM130_BATON_PASS ITEM_TM130
#define ITEM_TM131_ENCORE ITEM_TM131
#define ITEM_TM132_IRON_TAIL ITEM_TM132
#define ITEM_TM133_CRUNCH ITEM_TM133
#define ITEM_TM134_SHADOW_BALL ITEM_TM134
#define ITEM_TM135_FUTURE_SIGHT ITEM_TM135
#define ITEM_TM136_UPROAR ITEM_TM136
#define ITEM_TM137_HEAT_WAVE ITEM_TM137
#define ITEM_TM138_TAUNT ITEM_TM138
#define ITEM_TM139_TRICK ITEM_TM139
#define ITEM_TM140_SUPERPOWER ITEM_TM140
#define ITEM_TM141_SKILL_SWAP ITEM_TM141
#define ITEM_TM142_BLAZE_KICK ITEM_TM142
#define ITEM_TM143_HYPER_VOICE ITEM_TM143
#define ITEM_TM144_OVERHEAT ITEM_TM144
#define ITEM_TM145_COSMIC_POWER ITEM_TM145
#define ITEM_TM146_MUDDY_WATER ITEM_TM146
#define ITEM_TM147_IRON_DEFENSE ITEM_TM147
#define ITEM_TM148_DRAGON_CLAW ITEM_TM148
#define ITEM_TM149_BULK_UP ITEM_TM149
#define ITEM_TM150_CALM_MIND ITEM_TM150
#define ITEM_TM151_LEAF_BLADE ITEM_TM151
#define ITEM_TM152_DRAGON_DANCE ITEM_TM152
#define ITEM_TM153_GYRO_BALL ITEM_TM153
#define ITEM_TM154_CLOSE_COMBAT ITEM_TM154
#define ITEM_TM155_TOXIC_SPIKES ITEM_TM155
#define ITEM_TM156_FLARE_BLITZ ITEM_TM156
#define ITEM_TM157_AURA_SPHERE ITEM_TM157
#define ITEM_TM158_POISON_JAB ITEM_TM158
#define ITEM_TM159_DARK_PULSE ITEM_TM159
#define ITEM_TM160_SEED_BOMB ITEM_TM160
#define ITEM_TM161_X_SCISSOR ITEM_TM161
#define ITEM_TM162_BUG_BUZZ ITEM_TM162
#define ITEM_TM163_DRAGON_PULSE ITEM_TM163
#define ITEM_TM164_POWER_GEM ITEM_TM164
#define ITEM_TM165_FOCUS_BLAST ITEM_TM165
#define ITEM_TM166_ENERGY_BALL ITEM_TM166
#define ITEM_TM167_BRAVE_BIRD ITEM_TM167
#define ITEM_TM168_EARTH_POWER ITEM_TM168
#define ITEM_TM169_NASTY_PLOT ITEM_TM169
#define ITEM_TM170_ZEN_HEADBUTT ITEM_TM170
#define ITEM_TM171_FLASH_CANNON ITEM_TM171
#define ITEM_TM172_LEAF_STORM ITEM_TM172
#define ITEM_TM173_POWER_WHIP ITEM_TM173
#define ITEM_TM174_GUNK_SHOT ITEM_TM174
#define ITEM_TM175_IRON_HEAD ITEM_TM175
#define ITEM_TM176_STONE_EDGE ITEM_TM176
#define ITEM_TM177_STEALTH_ROCK ITEM_TM177
#define ITEM_TM178_GRASS_KNOT ITEM_TM178
#define ITEM_TM179_SLUDGE_WAVE ITEM_TM179
#define ITEM_TM180_HEAVY_SLAM ITEM_TM180
#define ITEM_TM181_ELECTRO_BALL ITEM_TM181
#define ITEM_TM182_FOUL_PLAY ITEM_TM182
#define ITEM_TM183_STORED_POWER ITEM_TM183
#define ITEM_TM184_ALLY_SWITCH ITEM_TM184
#define ITEM_TM185_SCALD ITEM_TM185
#define ITEM_TM186_WORK_UP ITEM_TM186
#define ITEM_TM187_WILD_CHARGE ITEM_TM187
#define ITEM_TM188_DRILL_RUN ITEM_TM188
#define ITEM_TM189_HEAT_CRASH ITEM_TM189
#define ITEM_TM190_HURRICANE ITEM_TM190
#define ITEM_TM191_PLAY_ROUGH ITEM_TM191
#define ITEM_TM192_VENOM_DRENCH ITEM_TM192
#define ITEM_TM193_DAZZLING_GLEAM ITEM_TM193
#define ITEM_TM194_DARKEST_LARIAT ITEM_TM194
#define ITEM_TM195_HIGH_HORSEPOWER ITEM_TM195
#define ITEM_TM196_THROAT_CHOP ITEM_TM196
#define ITEM_TM197_POLLEN_PUFF ITEM_TM197
#define ITEM_TM198_PSYCHIC_FANGS ITEM_TM198
#define ITEM_TM199_LIQUIDATION ITEM_TM199
#define ITEM_TM200_BODY_PRESS ITEM_TM200

#define ITEM_HM01_CUT ITEM_HM01
#define ITEM_HM02_FLY ITEM_HM02
#define ITEM_HM03_SURF ITEM_HM03
#define ITEM_HM04_STRENGTH ITEM_HM04
#define ITEM_HM05_FLASH ITEM_HM05
#define ITEM_HM06_ROCK_SMASH ITEM_HM06
#define ITEM_HM07_WATERFALL ITEM_HM07
#define ITEM_HM08_DIVE ITEM_HM08
#define ITEM_HM09_ROCK_CLIMB ITEM_HM09

// Charms
#define ITEM_OVAL_CHARM 792
#define ITEM_SHINY_CHARM 793
#define ITEM_CATCHING_CHARM 794
#define ITEM_EXP_CHARM 795

// Form-changing Key Items
#define ITEM_ROTOM_CATALOG 796
#define ITEM_GRACIDEA 797
#define ITEM_REVEAL_GLASS 798
#define ITEM_DNA_SPLICERS 799
#define ITEM_ZYGARDE_CUBE 800
#define ITEM_PRISON_BOTTLE 801
#define ITEM_N_SOLARIZER 802
#define ITEM_N_LUNARIZER 803
#define ITEM_REINS_OF_UNITY 804

// Battle Mechanic Key Items
#define ITEM_MEGA_RING 805
#define ITEM_Z_POWER_RING 806
#define ITEM_DYNAMAX_BAND 807

// Misc. Key Items
#define ITEM_BICYCLE 808
#define ITEM_MACH_BIKE 809
#define ITEM_ACRO_BIKE 810
#define ITEM_OLD_ROD 811
#define ITEM_GOOD_ROD 812
#define ITEM_SUPER_ROD 813
#define ITEM_DOWSING_MACHINE 814
#define ITEM_TOWN_MAP 815
#define ITEM_VS_SEEKER 816
#define ITEM_TM_CASE 817
#define ITEM_BERRY_POUCH 818
#define ITEM_POKEMON_BOX_LINK 819
#define ITEM_COIN_CASE 820
#define ITEM_POWDER_JAR 821
#define ITEM_WAILMER_PAIL 822
#define ITEM_POKE_RADAR 823
#define ITEM_POKEBLOCK_CASE 824
#define ITEM_SOOT_SACK 825
#define ITEM_POKE_FLUTE 826
#define ITEM_FAME_CHECKER 827
#define ITEM_TEACHY_TV 828

// Story Key Items
#define ITEM_SS_TICKET 829
#define ITEM_EON_TICKET 830
#define ITEM_MYSTIC_TICKET 831
#define ITEM_AURORA_TICKET 832
#define ITEM_OLD_SEA_MAP 833
#define ITEM_LETTER 834
#define ITEM_DEVON_PARTS 835
#define ITEM_GO_GOGGLES 836
#define ITEM_DEVON_SCOPE 837
#define ITEM_BASEMENT_KEY 838
#define ITEM_SCANNER 839
#define ITEM_STORAGE_KEY 840
#define ITEM_KEY_TO_ROOM_1 841
#define ITEM_KEY_TO_ROOM_2 842
#define ITEM_KEY_TO_ROOM_4 843
#define ITEM_KEY_TO_ROOM_6 844
#define ITEM_METEORITE 845
#define ITEM_MAGMA_EMBLEM 846
#define ITEM_CONTEST_PASS 847
#define ITEM_OAKS_PARCEL 848
#define ITEM_SECRET_KEY 849
#define ITEM_BIKE_VOUCHER 850
#define ITEM_GOLD_TEETH 851
#define ITEM_CARD_KEY 852
#define ITEM_LIFT_KEY 853
#define ITEM_SILPH_SCOPE 854
#define ITEM_TRI_PASS 855
#define ITEM_RAINBOW_PASS 856
#define ITEM_TEA 857
#define ITEM_RUBY 858
#define ITEM_SAPPHIRE 859

// GEN IX ITEMS
#define ITEM_ABILITY_SHIELD 860
#define ITEM_CLEAR_AMULET 861
#define ITEM_PUNCHING_GLOVE 862
#define ITEM_COVERT_CLOAK 863
#define ITEM_LOADED_DICE 864
#define ITEM_AUSPICIOUS_ARMOR 865
#define ITEM_BOOSTER_ENERGY 866
#define ITEM_BIG_BAMBOO_SHOOT 867
#define ITEM_GIMMIGHOUL_COIN 868
#define ITEM_LEADERS_CREST 869
#define ITEM_MALICIOUS_ARMOR 870
#define ITEM_MIRROR_HERB 880
#define ITEM_SCROLL_OF_DARKNESS 881
#define ITEM_SCROLL_OF_WATERS 882
#define ITEM_TERA_ORB 883
#define ITEM_TINY_BAMBOO_SHOOT 884

#define ITEM_BUG_TERA_SHARD 885
#define ITEM_DARK_TERA_SHARD 886
#define ITEM_DRAGON_TERA_SHARD 887
#define ITEM_ELECTRIC_TERA_SHARD 888
#define ITEM_FAIRY_TERA_SHARD 880
#define ITEM_FIGHTING_TERA_SHARD 881
#define ITEM_FIRE_TERA_SHARD 882
#define ITEM_FLYING_TERA_SHARD 883
#define ITEM_GHOST_TERA_SHARD 884
#define ITEM_GRASS_TERA_SHARD 885
#define ITEM_GROUND_TERA_SHARD 886
#define ITEM_ICE_TERA_SHARD 887
#define ITEM_NORMAL_TERA_SHARD 888
#define ITEM_POISON_TERA_SHARD 889
#define ITEM_PSYCHIC_TERA_SHARD 880
#define ITEM_ROCK_TERA_SHARD 881
#define ITEM_STEEL_TERA_SHARD 892
#define ITEM_WATER_TERA_SHARD 893

#define ITEM_ADAMANT_CRYSTAL 894
#define ITEM_GRISEOUS_CORE 895
#define ITEM_LUSTROUS_GLOBE 896

#define ITEM_BLACK_AUGURITE 897
#define ITEM_LINKING_CORD 898
#define ITEM_PEAT_BLOCK 899

#define ITEM_EMERALD 900

#define ITEMS_COUNT 900
#define ITEM_FIELD_ARROW ITEMS_COUNT

// A special item id associated with "Cancel"/"Exit" etc. in a list of items or decorations
// Its icon is defined at ITEMS_COUNT as the "return to field" arrow
#define ITEM_LIST_END 0xFFFF

// Range of berries given out by various NPCS
#define FIRST_BERRY_MASTER_BERRY      ITEM_POMEG_BERRY
#define LAST_BERRY_MASTER_BERRY       ITEM_NOMEL_BERRY
#define FIRST_BERRY_MASTER_WIFE_BERRY ITEM_CHERI_BERRY
#define LAST_BERRY_MASTER_WIFE_BERRY  ITEM_SITRUS_BERRY
#define FIRST_KIRI_BERRY              ITEM_POMEG_BERRY
#define LAST_KIRI_BERRY               ITEM_NOMEL_BERRY
#define FIRST_ROUTE_114_MAN_BERRY     ITEM_RAZZ_BERRY
#define LAST_ROUTE_114_MAN_BERRY      ITEM_PINAP_BERRY

#define NUM_BERRY_MASTER_BERRIES          (LAST_BERRY_MASTER_BERRY - FIRST_BERRY_MASTER_BERRY + 1)
#define NUM_BERRY_MASTER_BERRIES_SKIPPED  (FIRST_BERRY_MASTER_BERRY - FIRST_BERRY_INDEX)
#define NUM_BERRY_MASTER_WIFE_BERRIES     (LAST_BERRY_MASTER_WIFE_BERRY - FIRST_BERRY_MASTER_WIFE_BERRY + 1)
#define NUM_KIRI_BERRIES                  (LAST_KIRI_BERRY - FIRST_KIRI_BERRY + 1)
#define NUM_KIRI_BERRIES_SKIPPED          (FIRST_KIRI_BERRY - FIRST_BERRY_INDEX)
#define NUM_ROUTE_114_MAN_BERRIES         (LAST_ROUTE_114_MAN_BERRY - FIRST_ROUTE_114_MAN_BERRY + 1)
#define NUM_ROUTE_114_MAN_BERRIES_SKIPPED (FIRST_ROUTE_114_MAN_BERRY - FIRST_BERRY_INDEX)

#define ITEM_TO_BERRY(itemId)(((itemId) - FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId)((itemId) - FIRST_MAIL_INDEX)
#define MAIL_NONE 0xFF

#define NUM_TECHNICAL_MACHINES 100
#define NUM_HIDDEN_MACHINES 8

#define MAX_BAG_ITEM_CAPACITY  99
#define MAX_PC_ITEM_CAPACITY   999
#define MAX_BERRY_CAPACITY     999

#define BAG_ITEM_CAPACITY_DIGITS 2
#define BERRY_CAPACITY_DIGITS 3
#define MAX_ITEM_DIGITS BERRY_CAPACITY_DIGITS

// Secondary IDs for rods
#define OLD_ROD   0
#define GOOD_ROD  1
#define SUPER_ROD 2

// Secondary IDs for bikes
#define MACH_BIKE 0
#define ACRO_BIKE 1

// Item parameters for EXP Candies
#define EXP_100   1
#define EXP_800   2
#define EXP_3000  3
#define EXP_10000 4
#define EXP_30000 5

// Item type IDs (used to determine the exit callback)
#define ITEM_USE_MAIL        0
#define ITEM_USE_PARTY_MENU  1
#define ITEM_USE_FIELD       2
#define ITEM_USE_PBLOCK_CASE 3
#define ITEM_USE_BAG_MENU    4 // No exit callback ITEM_TM stays in bag menu

// Item battle usage IDs (only checked to see if nonzero)
#define ITEM_B_USE_MEDICINE 1
#define ITEM_B_USE_OTHER    2

#endif  // GUARD_CONSTANTS_ITEMS_H
