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
@property(assign) unsigned countLimit;	// G=0x31a7be85; S=0x319e5ff1; converted property
@property(assign) id delegate;	// G=0x31a7bdb1; S=0x319eee3d; converted property
@property(assign) BOOL evictsObjectsWithDiscardedContent;	// G=0x319edbed; S=0x31a7be99; converted property
@property(retain) id name;	// G=0x31a7bd6d; S=0x319e5f59; converted property
@property(assign) unsigned totalCostLimit;	// G=0x31a7be71; S=0x319eeeb5; converted property
- (id)init;	// 0x319e5e65
// converted property getter: - (unsigned)countLimit;	// 0x31a7be85
- (void)dealloc;	// 0x31a7bc6d
// converted property getter: - (id)delegate;	// 0x31a7bdb1
// converted property getter: - (BOOL)evictsObjectsWithDiscardedContent;	// 0x319edbed
- (void)finalize;	// 0x31a7bced
// converted property getter: - (id)name;	// 0x31a7bd6d
- (id)objectForKey:(id)key;	// 0x319edb09
- (void)removeAllObjects;	// 0x319f263d
- (void)removeObjectForKey:(id)key;	// 0x31a7be45
// converted property setter: - (void)setCountLimit:(unsigned)limit;	// 0x319e5ff1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x319eee3d
// converted property setter: - (void)setEvictsObjectsWithDiscardedContent:(BOOL)discardedContent;	// 0x31a7be99
// converted property setter: - (void)setName:(id)name;	// 0x319e5f59
- (void)setObject:(id)object forKey:(id)key;	// 0x319ef445
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x319edc09
// converted property setter: - (void)setTotalCostLimit:(unsigned)limit;	// 0x319eeeb5
// converted property getter: - (unsigned)totalCostLimit;	// 0x31a7be71
@end

