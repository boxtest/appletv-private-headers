/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDCharacterProperties;

@interface WDParagraphProperties : NSObject <NSCopying> {
	WDDocument *mDocument;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mCharacterPropertiesOverridden : 1;	// 12 = 0xc
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_niSTDD *mOriginalProperties;	// 16 = 0x10
	XXStruct_niSTDD *mTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL anchorLock;	// G=0x371ae1c5; S=0x36fd47e5; converted property
@property(retain) id baseStyle;	// G=0x36ff7405; S=0x36fe195d; converted property
@property(retain) id characterProperties;	// G=0x36ff8d51; S=0x3702c1a5; converted property
@property(assign) XXStruct_UF3K2B dropCap;	// G=0x371ad88d; S=0x36fd3e81; converted property
@property(assign) short firstLineIndent;	// G=0x3700081d; S=0x36fd5749; converted property
@property(assign) int formattingChanged;	// G=0x371afbe9; S=0x371afc85; converted property
@property(assign) long height;	// G=0x371ad9e1; S=0x36fd403d; converted property
@property(assign) int heightRule;	// G=0x371adb29; S=0x36fd4115; converted property
@property(assign) int horizontalAnchor;	// G=0x370508bd; S=0x36fd4485; converted property
@property(assign) long horizontalPosition;	// G=0x370bd3cd; S=0x36fd4635; converted property
@property(assign) long horizontalSpace;	// G=0x371addcd; S=0x36fd42c5; converted property
@property(assign) int justification;	// G=0x36ff8065; S=0x36fd5821; converted property
@property(assign) BOOL keepLinesTogether;	// G=0x371aeeed; S=0x3708bb1d; converted property
@property(assign) BOOL keepNextParagraphTogether;	// G=0x371aed99; S=0x36fdeda5; converted property
@property(assign) BOOL kinsokuOff;	// G=0x371af43d; S=0x371af4d9; converted property
@property(assign) short leftIndent;	// G=0x36ff8721; S=0x36fd5599; converted property
@property(assign) short lineSpacing;	// G=0x36ff7f19; S=0x36fd53e9; converted property
@property(assign) int lineSpacingRule;	// G=0x36fdeb69; S=0x36fd54c1; converted property
@property(retain) id list;	// G=0x3702dced; S=0x371ad83d; converted property
@property(assign) int listIndex;	// G=0x370004b5; S=0x36fd3da9; converted property
@property(assign) unsigned char listLevel;	// G=0x370005e5; S=0x36fd3cd1; converted property
@property(assign) unsigned short outlineLevel;	// G=0x371aec45; S=0x36fdee8d; converted property
@property(assign, getter=isPageBreakBefore) BOOL pageBreakBefore;	// G=0x371ad6e9; S=0x36fd3be9; converted property
@property(assign) int resolveMode;	// G=0x36fdec65; S=0x36fd3b51; converted property
@property(assign) short rightIndent;	// G=0x3704bea5; S=0x36fd5671; converted property
@property(assign) unsigned short spaceAfter;	// G=0x36ff7d11; S=0x36fd5229; converted property
@property(assign) BOOL spaceAfterAuto;	// G=0x371aeaf1; S=0x36fd5301; converted property
@property(assign) unsigned short spaceBefore;	// G=0x36ffc8dd; S=0x36fd5069; converted property
@property(assign) BOOL spaceBeforeAuto;	// G=0x371ae99d; S=0x36fd5141; converted property
@property(assign) BOOL suppressAutoHyphens;	// G=0x371af041; S=0x36fd59dd; converted property
@property(assign) BOOL suppressLineNumbers;	// G=0x371af195; S=0x36fd58f9; converted property
@property(assign) int tabStopAddedCount;	// G=0x371af679; S=0x37024a49; converted property
@property(assign) int tabStopDeletedPositionCount;	// G=0x371af929; S=0x37024b21; converted property
@property(assign) unsigned short tablePart;	// G=0x371afaa1; S=0x370ae18d; converted property
@property(retain) id tableStyle;	// G=0x371ad599; S=0x36fece4d; converted property
@property(assign) int verticalAnchor;	// G=0x370bd331; S=0x36fd455d; converted property
@property(assign) long verticalPosition;	// G=0x370bd461; S=0x36fd470d; converted property
@property(assign) long verticalSpace;	// G=0x371adc7d; S=0x36fd41ed; converted property
@property(assign) BOOL widowControl;	// G=0x371af2e9; S=0x36fd5ac5; converted property
@property(assign) long width;	// G=0x370c74c9; S=0x36fd3f65; converted property
@property(assign) BOOL wrap;	// G=0x371adf1d; S=0x36fd439d; converted property
@property(assign) BOOL wrapCode;	// G=0x371ae071; S=0x3704678d; converted property
- (id)initWithDocument:(id)document;	// 0x36fd3aa9
- (void)addTabStopAdded:(XXStruct_M9LKhA *)added;	// 0x36fe0059
- (void)addTabStopDeletedPosition:(short)position;	// 0x36fecf91
// converted property getter: - (BOOL)anchorLock;	// 0x371ae1c5
- (id)barBorder;	// 0x371ae84d
// converted property getter: - (id)baseStyle;	// 0x36ff7405
- (id)betweenBorder;	// 0x371ae6fd
- (id)bottomBorder;	// 0x3704bf41
// converted property getter: - (id)characterProperties;	// 0x36ff8d51
- (void)clearBaseStyle;	// 0x37020dc9
- (void)clearChararacterProperties;	// 0x371abbf9
- (void)copyPropertiesInto:(id)into;	// 0x371affcd
- (id)copyWithZone:(NSZone *)zone;	// 0x371afe15
- (void)dealloc;	// 0x37002079
- (id)document;	// 0x36fde7b1
// converted property getter: - (XXStruct_UF3K2B)dropCap;	// 0x371ad88d
// converted property getter: - (short)firstLineIndent;	// 0x3700081d
// converted property getter: - (int)formattingChanged;	// 0x371afbe9
// converted property getter: - (long)height;	// 0x371ad9e1
// converted property getter: - (int)heightRule;	// 0x371adb29
// converted property getter: - (int)horizontalAnchor;	// 0x370508bd
// converted property getter: - (long)horizontalPosition;	// 0x370bd3cd
// converted property getter: - (long)horizontalSpace;	// 0x371addcd
- (BOOL)isAnchorLockOverridden;	// 0x371ae261
- (BOOL)isAnythingOverridden;	// 0x371abc39
- (BOOL)isAnythingOverriddenIn:(XXStruct_niSTDD *)anIn;	// 0x371b0285
- (BOOL)isBarBorderOverridden;	// 0x371ae8e5
- (BOOL)isBaseStyleOverridden;	// 0x36ff734d
- (BOOL)isBetweenBorderOverridden;	// 0x371ae795
- (BOOL)isBottomBorderOverridden;	// 0x36ff85b1
- (BOOL)isCharacterPropertiesOverridden;	// 0x37001311
- (BOOL)isDropCapOverridden;	// 0x371ad929
- (BOOL)isFirstLineIndentOverridden;	// 0x36ff82ad
- (BOOL)isFormattingChangedOverridden;	// 0x371afd5d
- (BOOL)isHeightOverridden;	// 0x371ada79
- (BOOL)isHeightRuleOverridden;	// 0x371adbc5
- (BOOL)isHorizontalAnchorOverridden;	// 0x36ff6bb5
- (BOOL)isHorizontalPositionOverridden;	// 0x36fdea01
- (BOOL)isHorizontalSpaceOverridden;	// 0x371ade65
- (BOOL)isJustificationOverridden;	// 0x36ff7fb5
- (BOOL)isKeepLinesTogetherOverridden;	// 0x371aef89
- (BOOL)isKeepNextParagraphTogetherOverridden;	// 0x371aee35
- (BOOL)isKinsokuOffOverridden;	// 0x371af5c1
- (BOOL)isLeftBorderOverridden;	// 0x371ae4fd
- (BOOL)isLeftIndentOverridden;	// 0x36ff813d
- (BOOL)isLineSpacingOverridden;	// 0x36ff7e61
- (BOOL)isLineSpacingRuleOverridden;	// 0x36fdeab1
- (BOOL)isListIndexOverridden;	// 0x36ff8365
- (BOOL)isListLevelOverridden;	// 0x36ff841d
- (BOOL)isListOverridden;	// 0x371ad875
- (BOOL)isOutlineLevelOverridden;	// 0x371aece1
// converted property getter: - (BOOL)isPageBreakBefore;	// 0x371ad6e9
- (BOOL)isPageBreakBeforeOverridden;	// 0x371ad785
- (BOOL)isRightBorderOverridden;	// 0x371ae645
- (BOOL)isRightIndentOverridden;	// 0x36ff81f5
- (BOOL)isShadingOverridden;	// 0x36ff8669
- (BOOL)isSpaceAfterAutoOverridden;	// 0x371aeb8d
- (BOOL)isSpaceAfterOverridden;	// 0x36ff7c61
- (BOOL)isSpaceBeforeAutoOverridden;	// 0x371aea39
- (BOOL)isSpaceBeforeOverridden;	// 0x36ff7da9
- (BOOL)isSuppressAutoHyphensOverridden;	// 0x371af0dd
- (BOOL)isSuppressLineNumbersOverridden;	// 0x371af231
- (BOOL)isTablePartOverridden;	// 0x371afb39
- (BOOL)isTableStyleOverridden;	// 0x371ad631
- (BOOL)isTopBorderOverridden;	// 0x371ae3b1
- (BOOL)isVerticalAnchorOverridden;	// 0x36ff6c6d
- (BOOL)isVerticalPositionOverridden;	// 0x36ff6d25
- (BOOL)isVerticalSpaceOverridden;	// 0x371add15
- (BOOL)isWidowControlOverridden;	// 0x371af385
- (BOOL)isWidthOverridden;	// 0x37050e31
- (BOOL)isWrapCodeOverridden;	// 0x371ae10d
- (BOOL)isWrapOverridden;	// 0x371adfb9
// converted property getter: - (int)justification;	// 0x36ff8065
// converted property getter: - (BOOL)keepLinesTogether;	// 0x371aeeed
// converted property getter: - (BOOL)keepNextParagraphTogether;	// 0x371aed99
// converted property getter: - (BOOL)kinsokuOff;	// 0x371af43d
- (id)leftBorder;	// 0x371ae469
// converted property getter: - (short)leftIndent;	// 0x36ff8721
// converted property getter: - (short)lineSpacing;	// 0x36ff7f19
// converted property getter: - (int)lineSpacingRule;	// 0x36fdeb69
// converted property getter: - (id)list;	// 0x3702dced
// converted property getter: - (int)listIndex;	// 0x370004b5
// converted property getter: - (unsigned char)listLevel;	// 0x370005e5
- (id)mutableBarBorder;	// 0x36fd4e3d
- (id)mutableBetweenBorder;	// 0x36fd4d29
- (id)mutableBottomBorder;	// 0x36fd4afd
- (id)mutableCharacterProperties;	// 0x36fe92d1
- (id)mutableLeftBorder;	// 0x36fd49e5
- (id)mutableRightBorder;	// 0x36fd4c15
- (id)mutableShading;	// 0x36fd4f55
- (id)mutableTopBorder;	// 0x36fd48cd
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x371abd3d
// converted property getter: - (unsigned short)outlineLevel;	// 0x371aec45
- (void)removeTabStopAddedWithPosition:(short)position;	// 0x371af801
// converted property getter: - (int)resolveMode;	// 0x36fdec65
- (id)rightBorder;	// 0x371ae5ad
// converted property getter: - (short)rightIndent;	// 0x3704bea5
// converted property setter: - (void)setAnchorLock:(BOOL)lock;	// 0x36fd47e5
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x36fe195d
// converted property setter: - (void)setCharacterProperties:(id)properties;	// 0x3702c1a5
// converted property setter: - (void)setDropCap:(XXStruct_UF3K2B)cap;	// 0x36fd3e81
// converted property setter: - (void)setFirstLineIndent:(short)indent;	// 0x36fd5749
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x371afc85
// converted property setter: - (void)setHeight:(long)height;	// 0x36fd403d
// converted property setter: - (void)setHeightRule:(int)rule;	// 0x36fd4115
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x36fd4485
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x36fd4635
// converted property setter: - (void)setHorizontalSpace:(long)space;	// 0x36fd42c5
// converted property setter: - (void)setJustification:(int)justification;	// 0x36fd5821
// converted property setter: - (void)setKeepLinesTogether:(BOOL)together;	// 0x3708bb1d
// converted property setter: - (void)setKeepNextParagraphTogether:(BOOL)together;	// 0x36fdeda5
// converted property setter: - (void)setKinsokuOff:(BOOL)off;	// 0x371af4d9
// converted property setter: - (void)setLeftIndent:(short)indent;	// 0x36fd5599
// converted property setter: - (void)setLineSpacing:(short)spacing;	// 0x36fd53e9
// converted property setter: - (void)setLineSpacingRule:(int)rule;	// 0x36fd54c1
// converted property setter: - (void)setList:(id)list;	// 0x371ad83d
// converted property setter: - (void)setListIndex:(int)index;	// 0x36fd3da9
// converted property setter: - (void)setListLevel:(unsigned char)level;	// 0x36fd3cd1
// converted property setter: - (void)setOutlineLevel:(unsigned short)level;	// 0x36fdee8d
// converted property setter: - (void)setPageBreakBefore:(BOOL)before;	// 0x36fd3be9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x36fd3b51
// converted property setter: - (void)setRightIndent:(short)indent;	// 0x36fd5671
// converted property setter: - (void)setSpaceAfter:(unsigned short)after;	// 0x36fd5229
// converted property setter: - (void)setSpaceAfterAuto:(BOOL)auto;	// 0x36fd5301
// converted property setter: - (void)setSpaceBefore:(unsigned short)before;	// 0x36fd5069
// converted property setter: - (void)setSpaceBeforeAuto:(BOOL)auto;	// 0x36fd5141
// converted property setter: - (void)setSuppressAutoHyphens:(BOOL)hyphens;	// 0x36fd59dd
// converted property setter: - (void)setSuppressLineNumbers:(BOOL)numbers;	// 0x36fd58f9
// converted property setter: - (void)setTabStopAddedCount:(int)count;	// 0x37024a49
// converted property setter: - (void)setTabStopDeletedPositionCount:(int)count;	// 0x37024b21
// converted property setter: - (void)setTablePart:(unsigned short)part;	// 0x370ae18d
// converted property setter: - (void)setTableStyle:(id)style;	// 0x36fece4d
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x36fd455d
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x36fd470d
// converted property setter: - (void)setVerticalSpace:(long)space;	// 0x36fd41ed
// converted property setter: - (void)setWidowControl:(BOOL)control;	// 0x36fd5ac5
// converted property setter: - (void)setWidth:(long)width;	// 0x36fd3f65
// converted property setter: - (void)setWrap:(BOOL)wrap;	// 0x36fd439d
// converted property setter: - (void)setWrapCode:(BOOL)code;	// 0x3704678d
- (id)shading;	// 0x370bb891
// converted property getter: - (unsigned short)spaceAfter;	// 0x36ff7d11
// converted property getter: - (BOOL)spaceAfterAuto;	// 0x371aeaf1
// converted property getter: - (unsigned short)spaceBefore;	// 0x36ffc8dd
// converted property getter: - (BOOL)spaceBeforeAuto;	// 0x371ae99d
// converted property getter: - (BOOL)suppressAutoHyphens;	// 0x371af041
// converted property getter: - (BOOL)suppressLineNumbers;	// 0x371af195
- (XXStruct_M9LKhA *)tabStopAddedAt:(int)at;	// 0x371af731
// converted property getter: - (int)tabStopAddedCount;	// 0x371af679
- (short)tabStopDeletedPositionAt:(int)at;	// 0x371af9e1
// converted property getter: - (int)tabStopDeletedPositionCount;	// 0x371af929
// converted property getter: - (unsigned short)tablePart;	// 0x371afaa1
// converted property getter: - (id)tableStyle;	// 0x371ad599
- (id)topBorder;	// 0x371ae319
// converted property getter: - (int)verticalAnchor;	// 0x370bd331
// converted property getter: - (long)verticalPosition;	// 0x370bd461
// converted property getter: - (long)verticalSpace;	// 0x371adc7d
// converted property getter: - (BOOL)widowControl;	// 0x371af2e9
// converted property getter: - (long)width;	// 0x370c74c9
// converted property getter: - (BOOL)wrap;	// 0x371adf1d
// converted property getter: - (BOOL)wrapCode;	// 0x371ae071
@end

