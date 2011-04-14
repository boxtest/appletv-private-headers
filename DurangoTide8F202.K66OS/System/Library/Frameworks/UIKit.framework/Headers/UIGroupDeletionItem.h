/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexSet;

@interface UIGroupDeletionItem : NSObject {
@private
	unsigned _lastIndex;	// 4 = 0x4
	int _group;	// 8 = 0x8
	NSIndexSet *_indexes;	// 12 = 0xc
}
@property(readonly, assign) int group;	// G=0x30731b51; converted property
@property(readonly, retain) NSIndexSet *indexes;	// G=0x30731b61; converted property
@property(assign) unsigned lastIndex;	// G=0x30731b71; S=0x30731b81; converted property
- (id)initWithGroup:(int)group;	// 0x30732d51
- (id)initWithGroup:(int)group andIndexes:(id)indexes;	// 0x30732cd1
- (id)initWithIndexes:(id)indexes inGroup:(int)group;	// 0x30732cb5
- (void)dealloc;	// 0x30732c6d
// converted property getter: - (int)group;	// 0x30731b51
// converted property getter: - (id)indexes;	// 0x30731b61
// converted property getter: - (unsigned)lastIndex;	// 0x30731b71
// converted property setter: - (void)setLastIndex:(unsigned)index;	// 0x30731b81
@end
