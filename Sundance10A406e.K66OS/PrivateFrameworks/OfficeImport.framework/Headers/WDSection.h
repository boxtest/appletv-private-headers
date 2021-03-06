/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDText;

@interface WDSection : NSObject {
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
	XXStruct_7a9KuD mOriginalProperties;	// 40 = 0x28
	XXStruct_7a9KuD mTrackedProperties;	// 180 = 0xb4
}
@property(assign) int borderDepth;	// G=0x3510e451; S=0x3500e405; converted property
@property(assign) int borderDisplay;	// G=0x3510e585; S=0x3500e459; converted property
@property(assign) int borderOffset;	// G=0x3510e6b9; S=0x3500e4ad; converted property
@property(assign) unsigned long bottomMargin;	// G=0x34f521c5; S=0x34f4774d; converted property
@property(assign) int breakType;	// G=0x34f52ca9; S=0x34f4a48d; converted property
@property(assign) int chapterNumberSeparator;	// G=0x3510f0c5; S=0x3510f155; converted property
@property(assign) unsigned short columnCount;	// G=0x34f8a2f9; S=0x34f8a175; converted property
@property(assign) long columnSpace;	// G=0x3510f565; S=0x34f474b1; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x3510f4d1; S=0x34fa3865; converted property
@property(assign) unsigned long footerMargin;	// G=0x3510dd15; S=0x34f477f5; converted property
@property(retain) id formattingChangeDate;	// G=0x3510fb01; S=0x3510fb95; converted property
@property(assign) BOOL formattingChanged;	// G=0x3510f7d1; S=0x3510f865; converted property
@property(assign) unsigned long gutterMargin;	// G=0x3510de4d; S=0x34f47849; converted property
@property(assign) unsigned long headerMargin;	// G=0x34f5273d; S=0x34f477a1; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x3510f971; S=0x3510fa05; converted property
@property(assign) unsigned long leftMargin;	// G=0x34f52009; S=0x34f47651; converted property
@property(assign) short lineNumberDistance;	// G=0x3510eab5; S=0x34f9c54d; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x3510e97d; S=0x3502c579; converted property
@property(assign) int lineNumberRestart;	// G=0x3510ebed; S=0x3502c5d1; converted property
@property(assign) short lineNumberStart;	// G=0x3510e7ed; S=0x3510e881; converted property
@property(assign) unsigned long pageHeight;	// G=0x34f51dad; S=0x34f475fd; converted property
@property(assign) int pageNumberFormat;	// G=0x3510ed21; S=0x34faebf9; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x3510ef8d; S=0x34f4a425; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x3510ee55; S=0x34f4a3cd; converted property
@property(assign) int pageOrientation;	// G=0x3510db3d; S=0x34faee21; converted property
@property(assign) unsigned long pageScale;	// G=0x3510d82d; S=0x3510d8bd; converted property
@property(assign) unsigned long pageWidth;	// G=0x34f51c79; S=0x34f475a9; converted property
@property(assign) int resolveMode;	// G=0x34f89b55; S=0x34f4671d; converted property
@property(assign) unsigned long rightMargin;	// G=0x34f5209d; S=0x34f476a5; converted property
@property(assign) int textDirection;	// G=0x3510d9b5; S=0x3510da45; converted property
@property(assign) BOOL titlePage;	// G=0x34f9cf2d; S=0x34f9ce21; converted property
@property(assign) unsigned long topMargin;	// G=0x34f52131; S=0x34f476f9; converted property
@property(assign) int verticalJustification;	// G=0x3510f69d; S=0x34fee5fd; converted property
- (id)initWithDocument:(id)document;	// 0x34f40391
- (id).cxx_construct;	// 0x34f4038d
- (void)appendColumnSpace:(unsigned long)space;	// 0x34fa3a3d
- (void)appendColumnWidth:(unsigned long)width;	// 0x34fa3925
// converted property getter: - (int)borderDepth;	// 0x3510e451
// converted property getter: - (int)borderDisplay;	// 0x3510e585
// converted property getter: - (int)borderOffset;	// 0x3510e6b9
- (id)bottomBorder;	// 0x3510e1e9
// converted property getter: - (unsigned long)bottomMargin;	// 0x34f521c5
// converted property getter: - (int)breakType;	// 0x34f52ca9
// converted property getter: - (int)chapterNumberSeparator;	// 0x3510f0c5
// converted property getter: - (unsigned short)columnCount;	// 0x34f8a2f9
// converted property getter: - (long)columnSpace;	// 0x3510f565
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x3510f3f5
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x3510f24d
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x3510f4d1
- (void)dealloc;	// 0x34f5f9f5
- (id)document;	// 0x3510d81d
- (id)evenPageFooter;	// 0x34f4a8c1
- (id)evenPageHeader;	// 0x34f4a3bd
- (id)firstPageFooter;	// 0x34f598bd
- (id)firstPageHeader;	// 0x34f5270d
// converted property getter: - (unsigned long)footerMargin;	// 0x3510dd15
// converted property getter: - (id)formattingChangeDate;	// 0x3510fb01
// converted property getter: - (BOOL)formattingChanged;	// 0x3510f7d1
// converted property getter: - (unsigned long)gutterMargin;	// 0x3510de4d
// converted property getter: - (unsigned long)headerMargin;	// 0x34f5273d
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x3510f971
- (BOOL)isBorderDepthOverridden;	// 0x3510e4e1
- (BOOL)isBorderDisplayOverridden;	// 0x3510e615
- (BOOL)isBorderOffsetOverridden;	// 0x3510e749
- (BOOL)isBottomBorderOverridden;	// 0x3510e279
- (BOOL)isBottomMarginOverridden;	// 0x34f52871
- (BOOL)isBreakTypeOverridden;	// 0x34f52c05
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x3510f1a9
- (BOOL)isColumnCountOverridden;	// 0x34f4740d
- (BOOL)isColumnSpaceOverridden;	// 0x3510f5f9
- (BOOL)isColumnsEqualWidthOverridden;	// 0x34f47505
- (BOOL)isFooterMarginOverridden;	// 0x3510dda9
- (BOOL)isFormattingChangeDateOverridden;	// 0x3510fc2d
- (BOOL)isFormattingChangedOverridden;	// 0x3510f8cd
- (BOOL)isGutterMarginOverridden;	// 0x3510dedd
- (BOOL)isHeaderMarginOverridden;	// 0x3510dc71
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x3510fa5d
- (BOOL)isLastColumnWidthDefined;	// 0x3510f329
- (BOOL)isLeftBorderOverridden;	// 0x3510e145
- (BOOL)isLeftMarginOverridden;	// 0x34f522f9
- (BOOL)isLineNumberDistanceOverridden;	// 0x3510eb49
- (BOOL)isLineNumberIncrementOverridden;	// 0x3510ea11
- (BOOL)isLineNumberRestartOverridden;	// 0x3510ec7d
- (BOOL)isLineNumberStartOverridden;	// 0x3510e8d9
- (BOOL)isPageHeightOverridden;	// 0x34f51d09
- (BOOL)isPageNumberFormatOverridden;	// 0x3510edb1
- (BOOL)isPageNumberRestartOverridden;	// 0x3510f021
- (BOOL)isPageNumberStartOverridden;	// 0x3510eee9
- (BOOL)isPageOrientationOverridden;	// 0x3510dbcd
- (BOOL)isPageScaleOverridden;	// 0x3510d911
- (BOOL)isPageWidthOverridden;	// 0x34f51bd5
- (BOOL)isRightBorderOverridden;	// 0x3510e3ad
- (BOOL)isRightMarginOverridden;	// 0x34f5243d
- (BOOL)isTextDirectionOverridden;	// 0x3510da99
- (BOOL)isTitlePageOverridden;	// 0x34f52e61
- (BOOL)isTopBorderOverridden;	// 0x3510e011
- (BOOL)isTopMarginOverridden;	// 0x34f52581
- (BOOL)isVerticalJustificationOverridden;	// 0x3510f72d
- (id)leftBorder;	// 0x3510e0b5
// converted property getter: - (unsigned long)leftMargin;	// 0x34f52009
// converted property getter: - (short)lineNumberDistance;	// 0x3510eab5
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x3510e97d
// converted property getter: - (int)lineNumberRestart;	// 0x3510ebed
// converted property getter: - (short)lineNumberStart;	// 0x3510e7ed
- (id)mutableBottomBorder;	// 0x35018679
- (id)mutableLeftBorder;	// 0x350185e9
- (id)mutableRightBorder;	// 0x35018709
- (id)mutableTopBorder;	// 0x35018559
- (id)oddPageFooter;	// 0x34f4a8d1
- (id)oddPageHeader;	// 0x34f46a75
// converted property getter: - (unsigned long)pageHeight;	// 0x34f51dad
// converted property getter: - (int)pageNumberFormat;	// 0x3510ed21
// converted property getter: - (BOOL)pageNumberRestart;	// 0x3510ef8d
// converted property getter: - (unsigned short)pageNumberStart;	// 0x3510ee55
// converted property getter: - (int)pageOrientation;	// 0x3510db3d
// converted property getter: - (unsigned long)pageScale;	// 0x3510d82d
// converted property getter: - (unsigned long)pageWidth;	// 0x34f51c79
// converted property getter: - (int)resolveMode;	// 0x34f89b55
- (id)rightBorder;	// 0x3510e31d
// converted property getter: - (unsigned long)rightMargin;	// 0x34f5209d
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x3500e405
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x3500e459
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x3500e4ad
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x34f4774d
// converted property setter: - (void)setBreakType:(int)type;	// 0x34f4a48d
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x3510f155
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x34f8a175
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x34f474b1
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x34fa3865
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x34f477f5
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x3510fb95
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x3510f865
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x34f47849
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x34f477a1
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x3510fa05
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x34f47651
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x34f9c54d
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x3502c579
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x3502c5d1
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x3510e881
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x34f475fd
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x34faebf9
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x34f4a425
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x34f4a3cd
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x34faee21
// converted property setter: - (void)setPageScale:(unsigned long)scale;	// 0x3510d8bd
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x34f475a9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34f4671d
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x34f476a5
// converted property setter: - (void)setTextDirection:(int)direction;	// 0x3510da45
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x34f9ce21
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x34f476f9
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x34fee5fd
- (id)text;	// 0x34f4052d
// converted property getter: - (int)textDirection;	// 0x3510d9b5
// converted property getter: - (BOOL)titlePage;	// 0x34f9cf2d
- (id)topBorder;	// 0x3510df81
// converted property getter: - (unsigned long)topMargin;	// 0x34f52131
// converted property getter: - (int)verticalJustification;	// 0x3510f69d
@end

