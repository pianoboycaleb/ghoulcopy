#ifndef GUARD_TEXT_H
#define GUARD_TEXT_H

#include "characters.h"

// Given as a text speed when all the text should be
// loaded at once but not copied to vram yet.
#define TEXT_SKIP_DRAW 0xFF

enum {
    FONT_SMALL,
    FONT_NORMAL,
    FONT_SHORT,
    FONT_SHORT_COPY_1,
    FONT_SHORT_COPY_2,
    FONT_SHORT_COPY_3,
    FONT_BRAILLE,
    FONT_NARROW,
    FONT_SMALL_NARROW, // Very similar to FONT_SMALL, some glyphs are narrower
    FONT_BOLD, // JP glyph set only
};

// Return values for font functions
enum {
    RENDER_PRINT,
    RENDER_FINISH,
    RENDER_REPEAT, // Run render function again, if e.g. a control code is encountered.
    RENDER_UPDATE,
};

// Text printer states read by RenderText / FontFunc_Braille
enum {
    RENDER_STATE_HANDLE_CHAR,
    RENDER_STATE_WAIT,
    RENDER_STATE_CLEAR,
    RENDER_STATE_SCROLL_START,
    RENDER_STATE_SCROLL,
    RENDER_STATE_WAIT_SE,
    RENDER_STATE_PAUSE,
};

enum {
    FONTATTR_MAX_LETTER_WIDTH,
    FONTATTR_MAX_LETTER_HEIGHT,
    FONTATTR_LETTER_SPACING,
    FONTATTR_LINE_SPACING,
    FONTATTR_UNKNOWN,   // dunno what this is yet
    FONTATTR_COLOR_FOREGROUND,
    FONTATTR_COLOR_BACKGROUND,
    FONTATTR_COLOR_SHADOW
};

struct TextPrinterSubStruct
{
    u8 fontId:4;  // 0x14
    bool8 hasPrintBeenSpedUp:1;
    u8 unk:3;
    u8 downArrowDelay:5;
    u8 downArrowYPosIdx:2;
    bool8 hasFontIdBeenSet:1;
    u8 autoScrollDelay;
};

struct TextPrinterTemplate
{
    const u8 *currentChar;
    u8 windowId;
    u8 fontId;
    u8 x;
    u8 y;
    u8 currentX;        // 0x8
    u8 currentY;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 unk:4;   // 0xC
    u8 fgColor:4;
    u8 bgColor:4;
    u8 shadowColor:4;
};

struct TextPrinter
{
    struct TextPrinterTemplate printerTemplate;

    void (*callback)(struct TextPrinterTemplate *, u16); // 0x10

    u8 subStructFields[7]; // always cast to struct TextPrinterSubStruct... so why bother
    u8 active;
    u8 state;       // 0x1C
    u8 textSpeed;
    u8 delayCounter;
    u8 scrollDistance;
    u8 minLetterSpacing;  // 0x20
    u8 japanese;
    // used to determine whether to decap strings
    u8 lastChar;
    u8 nextLastChar;
};

struct FontInfo
{
    u16 (*fontFunction)(struct TextPrinter *x);
    u8 maxLetterWidth;
    u8 maxLetterHeight;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 unk:4;
    u8 fgColor:4;
    u8 bgColor:4;
    u8 shadowColor:4;
};

extern const struct FontInfo *gFonts;

struct GlyphWidthFunc
{
    u32 fontId;
    u32 (*func)(u16 glyphId, bool32 isJapanese);
};

typedef struct {
    bool8 canABSpeedUpPrint:1;
    bool8 useAlternateDownArrow:1;
    bool8 autoScroll:1;
    bool8 forceMidTextSpeed:1;
} TextFlags;

struct TextGlyph
{
    u32 gfxBufferTop[16];
    u32 gfxBufferBottom[16];
    u8 width;
    u8 height;
};

extern TextFlags gTextFlags;

extern u8 gDisableTextPrinters;
extern struct TextGlyph gCurGlyph;

extern const u16 gCharAttrTable[];
#define CHAR_MASK 0xFF
// in gCharAttrTable, 0x100 represents a character treated as uppercase,
// but that maps to itself; only the lower 8 bits are used for mapping
#define UPPERCASE_FLAG 0x100
#define UPPERCASE_MASK (UPPERCASE_FLAG | CHAR_MASK)
// Similarly, 0x200 represents a character treated as a bigram separator
// i.e: whitespace, ctrl chars, /, digits
#define BIGRAM_SEP_FLAG 0x200
#define BIGRAM_SEP_MASK BIGRAM_SEP_FLAG
#define IS_UPPER(x) (gCharAttrTable[(x) & CHAR_MASK] & UPPERCASE_MASK)
// Includes whitespace, digits, /, and ctrl chars
// Basically helps match the regex [/0-9\s]([A-Z]{2})[/0-9\s]
#define IS_BIGRAM_SEP(x) (gCharAttrTable[(x) & CHAR_MASK] & BIGRAM_SEP_MASK)
#define TO_LOWER(x) (((x) + gCharAttrTable[(x)]) & CHAR_MASK)

void * UnmirrorPtr(const void * ptr);
void * MirrorPtr(const void * ptr);
bool32 IsMirrorPtr(const void *ptr);
u16 AddTextPrinterFixedCaseParameterized(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16));

void DeactivateAllTextPrinters(void);
u16 AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16));
bool32 AddTextPrinter(struct TextPrinterTemplate *template, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16));
void RunTextPrinters(void);
bool32 IsTextPrinterActive(u8 id);
void GenerateFontHalfRowLookupTable(u8 fgColor, u8 bgColor, u8 shadowColor);
void SaveTextColors(u8 *fgColor, u8 *bgColor, u8 *shadowColor);
void RestoreTextColors(u8 *fgColor, u8 *bgColor, u8 *shadowColor);
void DecompressGlyphTile(const void *src_, void *dest_);
void CopyGlyphToWindow(struct TextPrinter *x);
void ClearTextSpan(struct TextPrinter *textPrinter, u32 width);

void TextPrinterInitDownArrowCounters(struct TextPrinter *textPrinter);
void TextPrinterDrawDownArrow(struct TextPrinter *textPrinter);
void TextPrinterClearDownArrow(struct TextPrinter *textPrinter);
bool32 TextPrinterWaitAutoMode(struct TextPrinter *textPrinter);
bool32 TextPrinterWaitWithDownArrow(struct TextPrinter *textPrinter);
bool32 TextPrinterWait(struct TextPrinter *textPrinter);
void DrawDownArrow(u8 windowId, u16 x, u16 y, u8 bgColor, bool32 drawArrow, u8 *counter, u8 *yCoordIndex);
s32 GetStringWidth(u8 fontId, const u8 *str, s16 letterSpacing);
u8 RenderTextHandleBold(u8 *pixels, u8 fontId, u8 *str);
u8 DrawKeypadIcon(u8 windowId, u8 keypadIconId, u16 x, u16 y);
u8 GetKeypadIconTileOffset(u8 keypadIconId);
u8 GetKeypadIconWidth(u8 keypadIconId);
u8 GetKeypadIconHeight(u8 keypadIconId);
void SetDefaultFontsPointer(void);
u8 GetFontAttribute(u8 fontId, u8 attributeId);
u8 GetMenuCursorDimensionByFont(u8 fontId, u8 whichDimension);

// braille.c
u16 FontFunc_Braille(struct TextPrinter *textPrinter);
u32 GetGlyphWidth_Braille(u16 glyphId, bool32 isJapanese);

#endif // GUARD_TEXT_H
