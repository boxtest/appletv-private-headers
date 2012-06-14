/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class WDTableCellProperties, WDCharacterProperties, WDStyle, WDTableRowProperties, WDParagraphProperties, WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableStyleOverride : NSObject <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	WDStyle *mStyle;	// 8 = 0x8
	int mPart;	// 12 = 0xc
	WDParagraphProperties *mParagraphProperties;	// 16 = 0x10
	WDCharacterProperties *mCharacterProperties;	// 20 = 0x14
	WDTableRowProperties *mTableRowProperties;	// 24 = 0x18
	WDTableCellProperties *mTableCellStyleProperties;	// 28 = 0x1c
	unsigned mParagraphPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mCharacterPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableRowPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableCellStylePropertiesOverridden : 1;	// 32 = 0x20
}
@property(assign, getter=isCharacterPropertiesOverridden) BOOL characterPropertiesOverridden;	// G=0x32d2e229; S=0x32d2e23d; converted property
@property(assign, getter=isParagraphPropertiesOverridden) BOOL paragraphPropertiesOverridden;	// G=0x32d2e1e9; S=0x32d2e1fd; converted property
@property(assign) int part;	// G=0x32d2e1c9; S=0x32c1f531; converted property
@property(retain) id style;	// G=0x32cb6671; S=0x32c1fac9; converted property
@property(assign, getter=isTableCellStylePropertiesOverridden) BOOL tableCellStylePropertiesOverridden;	// G=0x32cb67c1; S=0x32d2e299; converted property
@property(assign, getter=isTableRowPropertiesOverridden) BOOL tableRowPropertiesOverridden;	// G=0x32cb67ad; S=0x32d2e27d; converted property
- (id)initWithDocument:(id)document;	// 0x32c1f4f5
- (id)characterProperties;	// 0x32d2e219
- (id)copyWithZone:(NSZone *)zone;	// 0x32d2e2b5
- (void)dealloc;	// 0x32c20501
// converted property getter: - (BOOL)isCharacterPropertiesOverridden;	// 0x32d2e229
// converted property getter: - (BOOL)isParagraphPropertiesOverridden;	// 0x32d2e1e9
// converted property getter: - (BOOL)isTableCellStylePropertiesOverridden;	// 0x32cb67c1
- (BOOL)isTablePropertiesOverridden;	// 0x32d2e259
// converted property getter: - (BOOL)isTableRowPropertiesOverridden;	// 0x32cb67ad
- (id)mutableCharacterProperties;	// 0x32cb66e9
- (id)mutableParagraphProperties;	// 0x32cb6681
- (id)mutableTableCellStyleProperties;	// 0x32cb6751
- (id)mutableTableRowProperties;	// 0x32cbfaad
- (id)paragraphProperties;	// 0x32d2e1d9
// converted property getter: - (int)part;	// 0x32d2e1c9
// converted property setter: - (void)setCharacterPropertiesOverridden:(BOOL)overridden;	// 0x32d2e23d
// converted property setter: - (void)setParagraphPropertiesOverridden:(BOOL)overridden;	// 0x32d2e1fd
// converted property setter: - (void)setPart:(int)part;	// 0x32c1f531
// converted property setter: - (void)setStyle:(id)style;	// 0x32c1fac9
// converted property setter: - (void)setTableCellStylePropertiesOverridden:(BOOL)overridden;	// 0x32d2e299
// converted property setter: - (void)setTableRowPropertiesOverridden:(BOOL)overridden;	// 0x32d2e27d
// converted property getter: - (id)style;	// 0x32cb6671
- (id)tableCellStyleProperties;	// 0x32cb67d5
- (id)tableProperties;	// 0x32d2e3d9
- (id)tableRowProperties;	// 0x32d2e26d
@end
