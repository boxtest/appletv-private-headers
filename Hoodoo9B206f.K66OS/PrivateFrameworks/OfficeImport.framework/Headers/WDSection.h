/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

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
	XXStruct_FH8jNC mOriginalProperties;	// 40 = 0x28
	XXStruct_FH8jNC mTrackedProperties;	// 176 = 0xb0
}
@property(assign) int borderDepth;	// G=0x346072c5; S=0x344af9bd; converted property
@property(assign) int borderDisplay;	// G=0x3460740d; S=0x344afa15; converted property
@property(assign) int borderOffset;	// G=0x34607555; S=0x344afa6d; converted property
@property(assign) unsigned long bottomMargin;	// G=0x344aa479; S=0x344a8f79; converted property
@property(assign) int breakType;	// G=0x344c5101; S=0x344af90d; converted property
@property(assign) int chapterNumberSeparator;	// G=0x34607fb1; S=0x34608041; converted property
@property(assign) unsigned short columnCount;	// G=0x34608151; S=0x344afb7d; converted property
@property(assign) long columnSpace;	// G=0x34608281; S=0x344afd3d; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x346081e5; S=0x344c8bd5; converted property
@property(assign) unsigned long footerMargin;	// G=0x34606b11; S=0x344c49b1; converted property
@property(retain) id formattingChangeDate;	// G=0x34608865; S=0x346089ad; converted property
@property(assign) BOOL formattingChanged;	// G=0x34608505; S=0x346085a1; converted property
@property(assign) unsigned long gutterMargin;	// G=0x34606c5d; S=0x344a8fd1; converted property
@property(assign) unsigned long headerMargin;	// G=0x344aa9f1; S=0x344af965; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x346086c1; S=0x34608755; converted property
@property(assign) unsigned long leftMargin;	// G=0x34413881; S=0x344a8e71; converted property
@property(assign) short lineNumberDistance;	// G=0x34607935; S=0x344c8b7d; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x346077e9; S=0x344efc55; converted property
@property(assign) int lineNumberRestart;	// G=0x34607a81; S=0x344efcad; converted property
@property(assign) short lineNumberStart;	// G=0x3460769d; S=0x34583ff1; converted property
@property(assign) unsigned long pageHeight;	// G=0x34413bc9; S=0x344a8e19; converted property
@property(assign) int pageNumberFormat;	// G=0x34607bc9; S=0x34538651; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x34607e5d; S=0x344afb1d; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x34607d11; S=0x344afac5; converted property
@property(assign) int pageOrientation;	// G=0x34606911; S=0x34526785; converted property
@property(assign) unsigned long pageScale;	// G=0x34606771; S=0x34606801; converted property
@property(assign) unsigned long pageWidth;	// G=0x344aa0d5; S=0x344a8dc1; converted property
@property(assign) int resolveMode;	// G=0x344a9029; S=0x344a8799; converted property
@property(assign) unsigned long rightMargin;	// G=0x344aa3e5; S=0x344a8ec9; converted property
@property(assign) BOOL titlePage;	// G=0x344aae79; S=0x344a9129; converted property
@property(assign) unsigned long topMargin;	// G=0x344137ed; S=0x344a8f21; converted property
@property(assign) int verticalJustification;	// G=0x346083bd; S=0x3455e2a5; converted property
- (id)initWithDocument:(id)document;	// 0x344a40dd
- (void)appendColumnSpace:(unsigned long)space;	// 0x344c8e15
- (void)appendColumnWidth:(unsigned long)width;	// 0x344c8c91
// converted property getter: - (int)borderDepth;	// 0x346072c5
// converted property getter: - (int)borderDisplay;	// 0x3460740d
// converted property getter: - (int)borderOffset;	// 0x34607555
- (id)bottomBorder;	// 0x34607035
// converted property getter: - (unsigned long)bottomMargin;	// 0x344aa479
// converted property getter: - (int)breakType;	// 0x344c5101
// converted property getter: - (int)chapterNumberSeparator;	// 0x34607fb1
// converted property getter: - (unsigned short)columnCount;	// 0x34608151
// converted property getter: - (long)columnSpace;	// 0x34608281
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x34608a75
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x34608c35
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x346081e5
- (void)dealloc;	// 0x34416a39
- (id)document;	// 0x34606761
- (id)evenPageFooter;	// 0x34413569
- (id)evenPageHeader;	// 0x34414065
- (id)firstPageFooter;	// 0x344134b5
- (id)firstPageHeader;	// 0x34414045
// converted property getter: - (unsigned long)footerMargin;	// 0x34606b11
// converted property getter: - (id)formattingChangeDate;	// 0x34608865
// converted property getter: - (BOOL)formattingChanged;	// 0x34608505
// converted property getter: - (unsigned long)gutterMargin;	// 0x34606c5d
// converted property getter: - (unsigned long)headerMargin;	// 0x344aa9f1
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x346086c1
- (BOOL)isBorderDepthOverridden;	// 0x34607355
- (BOOL)isBorderDisplayOverridden;	// 0x3460749d
- (BOOL)isBorderOffsetOverridden;	// 0x346075e5
- (BOOL)isBottomBorderOverridden;	// 0x346070c5
- (BOOL)isBottomMarginOverridden;	// 0x344aab21
- (BOOL)isBreakTypeOverridden;	// 0x34413611
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x34608099
- (BOOL)isColumnCountOverridden;	// 0x344a9071
- (BOOL)isColumnSpaceOverridden;	// 0x34608315
- (BOOL)isColumnsEqualWidthOverridden;	// 0x3450bc89
- (BOOL)isFooterMarginOverridden;	// 0x34606ba5
- (BOOL)isFormattingChangeDateOverridden;	// 0x346088f5
- (BOOL)isFormattingChangedOverridden;	// 0x34608609
- (BOOL)isGutterMarginOverridden;	// 0x34606ced
- (BOOL)isHeaderMarginOverridden;	// 0x34606a59
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x346087ad
- (BOOL)isLastColumnWidthDefined;	// 0x34608b6d
- (BOOL)isLeftBorderOverridden;	// 0x34606f7d
- (BOOL)isLeftMarginOverridden;	// 0x344aa5a9
- (BOOL)isLineNumberDistanceOverridden;	// 0x346079c9
- (BOOL)isLineNumberIncrementOverridden;	// 0x3460787d
- (BOOL)isLineNumberRestartOverridden;	// 0x34607b11
- (BOOL)isLineNumberStartOverridden;	// 0x34607731
- (BOOL)isPageHeightOverridden;	// 0x344aa165
- (BOOL)isPageNumberFormatOverridden;	// 0x34607c59
- (BOOL)isPageNumberRestartOverridden;	// 0x34607ef9
- (BOOL)isPageNumberStartOverridden;	// 0x34607da5
- (BOOL)isPageOrientationOverridden;	// 0x346069a1
- (BOOL)isPageScaleOverridden;	// 0x34606859
- (BOOL)isPageWidthOverridden;	// 0x344aa01d
- (BOOL)isRightBorderOverridden;	// 0x3460720d
- (BOOL)isRightMarginOverridden;	// 0x344aa6fd
- (BOOL)isTitlePageOverridden;	// 0x34413915
- (BOOL)isTopBorderOverridden;	// 0x34606e35
- (BOOL)isTopMarginOverridden;	// 0x344aa851
- (BOOL)isVerticalJustificationOverridden;	// 0x3460844d
- (id)leftBorder;	// 0x34606eed
// converted property getter: - (unsigned long)leftMargin;	// 0x34413881
// converted property getter: - (short)lineNumberDistance;	// 0x34607935
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x346077e9
// converted property getter: - (int)lineNumberRestart;	// 0x34607a81
// converted property getter: - (short)lineNumberStart;	// 0x3460769d
- (id)mutableBottomBorder;	// 0x3456ff79
- (id)mutableLeftBorder;	// 0x3456fea5
- (id)mutableRightBorder;	// 0x3457004d
- (id)mutableTopBorder;	// 0x3456fdd1
- (id)oddPageFooter;	// 0x34413559
- (id)oddPageHeader;	// 0x34414055
// converted property getter: - (unsigned long)pageHeight;	// 0x34413bc9
// converted property getter: - (int)pageNumberFormat;	// 0x34607bc9
// converted property getter: - (BOOL)pageNumberRestart;	// 0x34607e5d
// converted property getter: - (unsigned short)pageNumberStart;	// 0x34607d11
// converted property getter: - (int)pageOrientation;	// 0x34606911
// converted property getter: - (unsigned long)pageScale;	// 0x34606771
// converted property getter: - (unsigned long)pageWidth;	// 0x344aa0d5
// converted property getter: - (int)resolveMode;	// 0x344a9029
- (id)rightBorder;	// 0x3460717d
// converted property getter: - (unsigned long)rightMargin;	// 0x344aa3e5
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x344af9bd
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x344afa15
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x344afa6d
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x344a8f79
// converted property setter: - (void)setBreakType:(int)type;	// 0x344af90d
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x34608041
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x344afb7d
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x344afd3d
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x344c8bd5
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x344c49b1
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x346089ad
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x346085a1
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x344a8fd1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x344af965
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x34608755
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x344a8e71
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x344c8b7d
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x344efc55
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x344efcad
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x34583ff1
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x344a8e19
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x34538651
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x344afb1d
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x344afac5
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x34526785
// converted property setter: - (void)setPageScale:(unsigned long)scale;	// 0x34606801
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x344a8dc1
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x344a8799
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x344a8ec9
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x344a9129
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x344a8f21
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x3455e2a5
- (id)text;	// 0x34413ccd
// converted property getter: - (BOOL)titlePage;	// 0x344aae79
- (id)topBorder;	// 0x34606da5
// converted property getter: - (unsigned long)topMargin;	// 0x344137ed
// converted property getter: - (int)verticalJustification;	// 0x346083bd
@end

