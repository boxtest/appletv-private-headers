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
@property(readonly, assign) int group;	// G=0x35878365; converted property
@property(readonly, retain) NSIndexSet *indexes;	// G=0x35878375; converted property
@property(assign) unsigned lastIndex;	// G=0x35878385; S=0x35878395; converted property
- (id)initWithGroup:(int)group;	// 0x35878261
- (id)initWithGroup:(int)group andIndexes:(id)indexes;	// 0x35878275
- (id)initWithIndexes:(id)indexes inGroup:(int)group;	// 0x35878301
- (void)dealloc;	// 0x35878319
// converted property getter: - (int)group;	// 0x35878365
// converted property getter: - (id)indexes;	// 0x35878375
// converted property getter: - (unsigned)lastIndex;	// 0x35878385
// converted property setter: - (void)setLastIndex:(unsigned)index;	// 0x35878395
@end
