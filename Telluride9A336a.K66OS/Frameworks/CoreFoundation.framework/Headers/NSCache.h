/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"


@interface NSCache : NSObject {
@private
	id _delegate;	// 4 = 0x4
	void *_private[5];	// 8 = 0x8
	void *_reserved;	// 28 = 0x1c
}
@property(assign) unsigned countLimit;	// G=0x307abeb5; S=0x30716021; converted property
@property(assign) id delegate;	// G=0x307abde1; S=0x3071ee6d; converted property
@property(assign) BOOL evictsObjectsWithDiscardedContent;	// G=0x3071dc1d; S=0x307abec9; converted property
@property(retain) id name;	// G=0x307abd9d; S=0x30715f89; converted property
@property(assign) unsigned totalCostLimit;	// G=0x307abea1; S=0x3071eee5; converted property
- (id)init;	// 0x30715e95
// converted property getter: - (unsigned)countLimit;	// 0x307abeb5
- (void)dealloc;	// 0x307abc9d
// converted property getter: - (id)delegate;	// 0x307abde1
// converted property getter: - (BOOL)evictsObjectsWithDiscardedContent;	// 0x3071dc1d
- (void)finalize;	// 0x307abd1d
// converted property getter: - (id)name;	// 0x307abd9d
- (id)objectForKey:(id)key;	// 0x3071db39
- (void)removeAllObjects;	// 0x3072266d
- (void)removeObjectForKey:(id)key;	// 0x307abe75
// converted property setter: - (void)setCountLimit:(unsigned)limit;	// 0x30716021
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3071ee6d
// converted property setter: - (void)setEvictsObjectsWithDiscardedContent:(BOOL)discardedContent;	// 0x307abec9
// converted property setter: - (void)setName:(id)name;	// 0x30715f89
- (void)setObject:(id)object forKey:(id)key;	// 0x3071f475
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x3071dc39
// converted property setter: - (void)setTotalCostLimit:(unsigned)limit;	// 0x3071eee5
// converted property getter: - (unsigned)totalCostLimit;	// 0x307abea1
@end
