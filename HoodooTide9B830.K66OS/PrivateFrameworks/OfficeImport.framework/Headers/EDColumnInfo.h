/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDReference, EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	bool mHidden;	// 16 = 0x10
	EDReference *mRange;	// 20 = 0x14
	unsigned mStyleIndex;	// 24 = 0x18
	unsigned char mOutlineLevel;	// 28 = 0x1c
}
@property(assign, getter=isHidden) bool hidden;	// G=0x311dba01; S=0x311d1329; converted property
@property(assign) unsigned char outlineLevel;	// G=0x313311d9; S=0x311d149d; converted property
@property(retain) id range;	// G=0x311db9f1; S=0x311d1445; converted property
@property(retain) id style;	// G=0x311dee5d; S=0x31331239; converted property
@property(assign) unsigned styleIndex;	// G=0x312debfd; S=0x311d148d; converted property
@property(assign) double width;	// G=0x311dd0dd; S=0x312bce8d; converted property
@property(assign) int widthInXlUnits;	// G=0x311dd16d; S=0x311d1319; converted property
+ (id)columnInfoWithResources:(id)resources worksheet:(id)worksheet;	// 0x313311e9
- (id)initWithResources:(id)resources worksheet:(id)worksheet;	// 0x311d1275
- (id)copyWithZone:(NSZone *)zone;	// 0x31331281
- (void)dealloc;	// 0x311f5541
// converted property getter: - (bool)isHidden;	// 0x311dba01
- (unsigned)key;	// 0x311d14dd
// converted property getter: - (unsigned char)outlineLevel;	// 0x313311d9
// converted property getter: - (id)range;	// 0x311db9f1
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x311d1329
// converted property setter: - (void)setOutlineLevel:(unsigned char)level;	// 0x311d149d
// converted property setter: - (void)setRange:(id)range;	// 0x311d1445
- (void)setRangeWithFirstColumn:(int)firstColumn lastColumn:(int)column;	// 0x311d1339
// converted property setter: - (void)setStyle:(id)style;	// 0x31331239
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x311d148d
// converted property setter: - (void)setWidth:(double)width;	// 0x312bce8d
// converted property setter: - (void)setWidthInXlUnits:(int)xlUnits;	// 0x311d1319
// converted property getter: - (id)style;	// 0x311dee5d
// converted property getter: - (unsigned)styleIndex;	// 0x312debfd
// converted property getter: - (double)width;	// 0x311dd0dd
// converted property getter: - (int)widthInXlUnits;	// 0x311dd16d
@end

