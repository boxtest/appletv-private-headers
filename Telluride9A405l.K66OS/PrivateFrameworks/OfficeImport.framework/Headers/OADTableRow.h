/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : NSObject {
@private
	NSMutableArray *mCells;	// 4 = 0x4
	float mHeight;	// 8 = 0x8
}
@property(assign) float height;	// G=0x30dbd4f1; S=0x30dbbe15; converted property
- (id)init;	// 0x30dbbce9
- (id)addCell;	// 0x30dbbe25
- (id)cellAtIndex:(unsigned)index;	// 0x30dbc7f1
- (unsigned)cellCount;	// 0x30dbc7d1
- (void)dealloc;	// 0x30dbe319
// converted property getter: - (float)height;	// 0x30dbd4f1
// converted property setter: - (void)setHeight:(float)height;	// 0x30dbbe15
@end

