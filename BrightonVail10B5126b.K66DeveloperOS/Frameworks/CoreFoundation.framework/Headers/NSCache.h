/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library


@interface NSCache : NSObject {
	id _delegate;	// 4 = 0x4
	void *_private[5];	// 8 = 0x8
	void *_reserved;	// 28 = 0x1c
}
@property(assign) unsigned countLimit;	// G=0x31125041; S=0x3109ad21; converted property
@property(assign) id delegate;	// G=0x31124f99; S=0x3109ac85; converted property
@property(assign) BOOL evictsObjectsWhenApplicationEntersBackground;	// G=0x31125071; S=0x31125089; converted property
@property(assign) BOOL evictsObjectsWithDiscardedContent;	// G=0x31097405; S=0x31125055; converted property
@property(retain) id name;	// G=0x31124f55; S=0x31097159; converted property
@property(assign) unsigned totalCostLimit;	// G=0x3112502d; S=0x3109acf9; converted property
- (id)init;	// 0x31097095
- (id)allObjects;	// 0x31125121
// converted property getter: - (unsigned)countLimit;	// 0x31125041
- (void)dealloc;	// 0x310a8a2d
// converted property getter: - (id)delegate;	// 0x31124f99
// converted property getter: - (BOOL)evictsObjectsWhenApplicationEntersBackground;	// 0x31125071
// converted property getter: - (BOOL)evictsObjectsWithDiscardedContent;	// 0x31097405
- (void)finalize;	// 0x31124ecd
// converted property getter: - (id)name;	// 0x31124f55
- (id)objectForKey:(id)key;	// 0x31097331
- (void)removeAllObjects;	// 0x310a89e1
- (void)removeObjectForKey:(id)key;	// 0x310a892d
// converted property setter: - (void)setCountLimit:(unsigned)limit;	// 0x3109ad21
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3109ac85
// converted property setter: - (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)background;	// 0x31125089
// converted property setter: - (void)setEvictsObjectsWithDiscardedContent:(BOOL)discardedContent;	// 0x31125055
// converted property setter: - (void)setName:(id)name;	// 0x31097159
- (void)setObject:(id)object forKey:(id)key;	// 0x3109741d
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x3109744d
// converted property setter: - (void)setTotalCostLimit:(unsigned)limit;	// 0x3109acf9
// converted property getter: - (unsigned)totalCostLimit;	// 0x3112502d
@end
