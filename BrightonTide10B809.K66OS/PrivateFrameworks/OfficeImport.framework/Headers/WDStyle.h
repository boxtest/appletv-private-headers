/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDTableRowProperties, WDParagraphProperties, WDTableStyleOverride, WDStyleSheet, WDCharacterProperties, NSString, WDTableCellProperties;

@interface WDStyle : NSObject <NSCopying> {
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDTableRowProperties *mTableRowProperties;	// 12 = 0xc
	WDTableCellProperties *mTableCellProperties;	// 16 = 0x10
	WDTableStyleOverride *mTableStyleOverrides[12];	// 20 = 0x14
	WDStyleSheet *mStyleSheet;	// 68 = 0x44
	WDStyle *mBaseStyle;	// 72 = 0x48
	WDStyle *mNextStyle;	// 76 = 0x4c
	BOOL mHidden;	// 80 = 0x50
	NSString *mName;	// 84 = 0x54
	NSString *mId;	// 88 = 0x58
	int mStyleType;	// 92 = 0x5c
}
@property(retain) id baseStyle;	// G=0x348fd53d; S=0x348e6845; converted property
@property(assign) BOOL hidden;	// G=0x34ab8ff5; S=0x34925c19; converted property
@property(retain) id name;	// G=0x34926f91; S=0x348e0d39; converted property
@property(retain) id nextStyle;	// G=0x34ab9069; S=0x348e6835; converted property
- (id)initWithStyleSheet:(id)styleSheet id:(id)anId type:(int)type;	// 0x348e04e1
// converted property getter: - (id)baseStyle;	// 0x348fd53d
- (id)characterProperties;	// 0x348e2475
- (id)copyWithZone:(NSZone *)zone;	// 0x34ab9079
- (void)dealloc;	// 0x34907f8d
// converted property getter: - (BOOL)hidden;	// 0x34ab8ff5
- (id)id;	// 0x348e4d51
- (BOOL)isAnythingOverridden;	// 0x34ab9005
// converted property getter: - (id)name;	// 0x34926f91
// converted property getter: - (id)nextStyle;	// 0x34ab9069
- (id)paragraphProperties;	// 0x348e35b9
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x348e6845
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x34925c19
// converted property setter: - (void)setName:(id)name;	// 0x348e0d39
// converted property setter: - (void)setNextStyle:(id)style;	// 0x348e6835
- (id)styleSheet;	// 0x348e0c71
- (id)tableCellProperties;	// 0x349573c5
- (id)tableProperties;	// 0x348e54c1
- (id)tableRowProperties;	// 0x34957315
- (id)tableStyleOverrideForPart:(int)part;	// 0x34957671
- (int)type;	// 0x348e4cad
@end
