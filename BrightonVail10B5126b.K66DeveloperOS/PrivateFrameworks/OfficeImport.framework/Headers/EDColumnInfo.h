/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDWorksheet, EDReference;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
	EDResources *mResources;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	bool mHidden;	// 16 = 0x10
	EDReference *mRange;	// 20 = 0x14
	unsigned mStyleIndex;	// 24 = 0x18
	unsigned char mOutlineLevel;	// 28 = 0x1c
}
@property(assign, getter=isHidden) bool hidden;	// G=0x348b7199; S=0x348a815d; converted property
@property(assign) unsigned char outlineLevel;	// G=0x34a268b5; S=0x348a82c5; converted property
@property(retain) id range;	// G=0x348b7185; S=0x348a826d; converted property
@property(retain) id style;	// G=0x348bce55; S=0x34a2686d; converted property
@property(assign) unsigned styleIndex;	// G=0x349b75d1; S=0x348a82b1; converted property
@property(assign) double width;	// G=0x348b87e1; S=0x34983a51; converted property
@property(assign) int widthInXlUnits;	// G=0x348b8879; S=0x348a8149; converted property
+ (id)columnInfoWithResources:(id)resources worksheet:(id)worksheet;	// 0x34a267d5
- (id)initWithResources:(id)resources worksheet:(id)worksheet;	// 0x348a80a1
- (id)copyWithZone:(NSZone *)zone;	// 0x34a26825
- (void)dealloc;	// 0x348c05a9
// converted property getter: - (bool)isHidden;	// 0x348b7199
- (int)key;	// 0x348a83fd
// converted property getter: - (unsigned char)outlineLevel;	// 0x34a268b5
// converted property getter: - (id)range;	// 0x348b7185
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x348a815d
// converted property setter: - (void)setOutlineLevel:(unsigned char)level;	// 0x348a82c5
// converted property setter: - (void)setRange:(id)range;	// 0x348a826d
- (void)setRangeWithFirstColumn:(int)firstColumn lastColumn:(int)column;	// 0x348a8171
// converted property setter: - (void)setStyle:(id)style;	// 0x34a2686d
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x348a82b1
// converted property setter: - (void)setWidth:(double)width;	// 0x34983a51
// converted property setter: - (void)setWidthInXlUnits:(int)xlUnits;	// 0x348a8149
// converted property getter: - (id)style;	// 0x348bce55
// converted property getter: - (unsigned)styleIndex;	// 0x349b75d1
// converted property getter: - (double)width;	// 0x348b87e1
// converted property getter: - (int)widthInXlUnits;	// 0x348b8879
@end
