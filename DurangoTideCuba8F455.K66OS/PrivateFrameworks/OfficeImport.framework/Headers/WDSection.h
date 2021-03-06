/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject {
@private
	unsigned mOriginal : 1;	// 4 = 0x4
	unsigned mTracked : 1;	// 4 = 0x4
	unsigned mResolved : 1;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDText *mEvenPageHeader;	// 16 = 0x10
	WDText *mOddPageHeader;	// 20 = 0x14
	WDText *mFirstPageHeader;	// 24 = 0x18
	WDText *mEvenPageFooter;	// 28 = 0x1c
	WDText *mOddPageFooter;	// 32 = 0x20
	WDText *mFirstPageFooter;	// 36 = 0x24
	XXStruct_RW4LwA mOriginalProperties;	// 40 = 0x28
	XXStruct_RW4LwA mTrackedProperties;	// 172 = 0xac
}
@property(assign) int borderDepth;	// G=0x32d27315; S=0x32c10c5d; converted property
@property(assign) int borderDisplay;	// G=0x32d27425; S=0x32c10ca9; converted property
@property(assign) int borderOffset;	// G=0x32d27539; S=0x32c10cf5; converted property
@property(assign) unsigned long bottomMargin;	// G=0x32bdd551; S=0x32bdc155; converted property
@property(assign) int breakType;	// G=0x32c201f9; S=0x32c10bc5; converted property
@property(assign) int chapterNumberSeparator;	// G=0x32d27e2d; S=0x32d27eb1; converted property
@property(assign) unsigned short columnCount;	// G=0x32d27f8d; S=0x32c10de9; converted property
@property(assign) long columnSpace;	// G=0x32d28099; S=0x32c10f51; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x32d28011; S=0x32c22ba9; converted property
@property(assign) unsigned long footerMargin;	// G=0x32d26c9d; S=0x32c1ff29; converted property
@property(retain) id formattingChangeDate;	// G=0x32d28591; S=0x32d286ed; converted property
@property(assign) BOOL formattingChanged;	// G=0x32d282bd; S=0x32d28345; converted property
@property(assign) unsigned long gutterMargin;	// G=0x32d26db1; S=0x32bdc1a1; converted property
@property(assign) unsigned long headerMargin;	// G=0x32c0b665; S=0x32c10c11; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x32d2842d; S=0x32d284b1; converted property
@property(assign) unsigned long leftMargin;	// G=0x32bb592d; S=0x32bdc071; converted property
@property(assign) short lineNumberDistance;	// G=0x32d278c5; S=0x32c22b59; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x32d277b1; S=0x32c49a3d; converted property
@property(assign) int lineNumberRestart;	// G=0x32d279d9; S=0x32c49a8d; converted property
@property(assign) short lineNumberStart;	// G=0x32d2764d; S=0x32d276d1; converted property
@property(assign) unsigned long pageHeight;	// G=0x32bb5c15; S=0x32bdc025; converted property
@property(assign) int pageNumberFormat;	// G=0x32d27aed; S=0x32c885c5; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x32d27d11; S=0x32c10d91; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x32d27c01; S=0x32c10d41; converted property
@property(assign) int pageOrientation;	// G=0x32d26afd; S=0x32c77e51; converted property
@property(assign) unsigned long pageWidth;	// G=0x32bdd215; S=0x32bdbfd9; converted property
@property(assign) int resolveMode;	// G=0x32bdc1ed; S=0x32bdb9fd; converted property
@property(assign) unsigned long rightMargin;	// G=0x32bdd4cd; S=0x32bdc0bd; converted property
@property(assign) BOOL titlePage;	// G=0x32c0b6e9; S=0x32c0b60d; converted property
@property(assign) unsigned long topMargin;	// G=0x32bb58a9; S=0x32bdc109; converted property
@property(assign) int verticalJustification;	// G=0x32d281ad; S=0x32c9a94d; converted property
- (id)initWithDocument:(id)document;	// 0x32bd6549
- (void)appendColumnSpace:(unsigned long)space;	// 0x32c22d0d
- (void)appendColumnWidth:(unsigned long)width;	// 0x32c22c01
// converted property getter: - (int)borderDepth;	// 0x32d27315
// converted property getter: - (int)borderDisplay;	// 0x32d27425
// converted property getter: - (int)borderOffset;	// 0x32d27539
- (id)bottomBorder;	// 0x32d270ed
// converted property getter: - (unsigned long)bottomMargin;	// 0x32bdd551
// converted property getter: - (int)breakType;	// 0x32c201f9
// converted property getter: - (int)chapterNumberSeparator;	// 0x32d27e2d
// converted property getter: - (unsigned short)columnCount;	// 0x32d27f8d
// converted property getter: - (long)columnSpace;	// 0x32d28099
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x32d28781
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x32d28925
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x32d28011
- (void)dealloc;	// 0x32bb73b9
- (id)document;	// 0x32d26aed
- (id)evenPageFooter;	// 0x32bb5671
- (id)evenPageHeader;	// 0x32bb6031
- (id)firstPageFooter;	// 0x32bb55c1
- (id)firstPageHeader;	// 0x32bb6011
// converted property getter: - (unsigned long)footerMargin;	// 0x32d26c9d
// converted property getter: - (id)formattingChangeDate;	// 0x32d28591
// converted property getter: - (BOOL)formattingChanged;	// 0x32d282bd
// converted property getter: - (unsigned long)gutterMargin;	// 0x32d26db1
// converted property getter: - (unsigned long)headerMargin;	// 0x32c0b665
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x32d2842d
- (BOOL)isBorderDepthOverridden;	// 0x32d27399
- (BOOL)isBorderDisplayOverridden;	// 0x32d274a9
- (BOOL)isBorderOffsetOverridden;	// 0x32d275bd
- (BOOL)isBottomBorderOverridden;	// 0x32d27171
- (BOOL)isBottomMarginOverridden;	// 0x32bddaa9
- (BOOL)isBreakTypeOverridden;	// 0x32bb5709
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x32d27efd
- (BOOL)isColumnCountOverridden;	// 0x32bdc231
- (BOOL)isColumnSpaceOverridden;	// 0x32d2811d
- (BOOL)isColumnsEqualWidthOverridden;	// 0x32c602b5
- (BOOL)isFooterMarginOverridden;	// 0x32d26d21
- (BOOL)isFormattingChangeDateOverridden;	// 0x32d28615
- (BOOL)isFormattingChangedOverridden;	// 0x32d2839d
- (BOOL)isGutterMarginOverridden;	// 0x32d26e35
- (BOOL)isHeaderMarginOverridden;	// 0x32d26c0d
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x32d28501
- (BOOL)isLastColumnWidthDefined;	// 0x32d28861
- (BOOL)isLeftBorderOverridden;	// 0x32d2705d
- (BOOL)isLeftMarginOverridden;	// 0x32bdd669
- (BOOL)isLineNumberDistanceOverridden;	// 0x32d27949
- (BOOL)isLineNumberIncrementOverridden;	// 0x32d27835
- (BOOL)isLineNumberRestartOverridden;	// 0x32d27a5d
- (BOOL)isLineNumberStartOverridden;	// 0x32d27721
- (BOOL)isPageHeightOverridden;	// 0x32bdd299
- (BOOL)isPageNumberFormatOverridden;	// 0x32d27b71
- (BOOL)isPageNumberRestartOverridden;	// 0x32d27d9d
- (BOOL)isPageNumberStartOverridden;	// 0x32d27c85
- (BOOL)isPageOrientationOverridden;	// 0x32d26b81
- (BOOL)isPageWidthOverridden;	// 0x32bdd185
- (BOOL)isRightBorderOverridden;	// 0x32d27285
- (BOOL)isRightMarginOverridden;	// 0x32bdd78d
- (BOOL)isTitlePageOverridden;	// 0x32bb59b1
- (BOOL)isTopBorderOverridden;	// 0x32d26f49
- (BOOL)isTopMarginOverridden;	// 0x32bdd8b1
- (BOOL)isVerticalJustificationOverridden;	// 0x32d28231
- (id)leftBorder;	// 0x32d26fd9
// converted property getter: - (unsigned long)leftMargin;	// 0x32bb592d
// converted property getter: - (short)lineNumberDistance;	// 0x32d278c5
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x32d277b1
// converted property getter: - (int)lineNumberRestart;	// 0x32d279d9
// converted property getter: - (short)lineNumberStart;	// 0x32d2764d
- (id)mutableBottomBorder;	// 0x32cbd1c1
- (id)mutableLeftBorder;	// 0x32cbd109
- (id)mutableRightBorder;	// 0x32cb15a9
- (id)mutableTopBorder;	// 0x32cbd051
- (id)oddPageFooter;	// 0x32bb5661
- (id)oddPageHeader;	// 0x32bb6021
// converted property getter: - (unsigned long)pageHeight;	// 0x32bb5c15
// converted property getter: - (int)pageNumberFormat;	// 0x32d27aed
// converted property getter: - (BOOL)pageNumberRestart;	// 0x32d27d11
// converted property getter: - (unsigned short)pageNumberStart;	// 0x32d27c01
// converted property getter: - (int)pageOrientation;	// 0x32d26afd
// converted property getter: - (unsigned long)pageWidth;	// 0x32bdd215
// converted property getter: - (int)resolveMode;	// 0x32bdc1ed
- (id)rightBorder;	// 0x32d27201
// converted property getter: - (unsigned long)rightMargin;	// 0x32bdd4cd
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x32c10c5d
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x32c10ca9
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x32c10cf5
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x32bdc155
// converted property setter: - (void)setBreakType:(int)type;	// 0x32c10bc5
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x32d27eb1
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x32c10de9
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x32c10f51
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x32c22ba9
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x32c1ff29
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x32d286ed
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x32d28345
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x32bdc1a1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x32c10c11
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x32d284b1
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x32bdc071
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x32c22b59
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x32c49a3d
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x32c49a8d
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x32d276d1
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x32bdc025
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x32c885c5
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x32c10d91
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x32c10d41
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x32c77e51
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x32bdbfd9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x32bdb9fd
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x32bdc0bd
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x32c0b60d
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x32bdc109
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x32c9a94d
- (id)text;	// 0x32bb5d01
// converted property getter: - (BOOL)titlePage;	// 0x32c0b6e9
- (id)topBorder;	// 0x32d26ec5
// converted property getter: - (unsigned long)topMargin;	// 0x32bb58a9
// converted property getter: - (int)verticalJustification;	// 0x32d281ad
@end

