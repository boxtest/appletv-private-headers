/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMenuSavedState : BRSingleton {
	NSMutableDictionary *_cachedMenuState;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
}
@property(assign) BOOL enabled;	// G=0x396a51; S=0x396a61; converted property
+ (void)clearSavedSelectionForOwnerKey:(id)ownerKey;	// 0x3967b1
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey;	// 0x396575
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x396599
+ (void)saveSelection:(id)selection atIndexPath:(id)indexPath forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x3966a5
+ (id)selectionInfoForOwnerKey:(id)ownerKey;	// 0x3967f1
+ (void)setSingleton:(id)singleton;	// 0x396565
+ (id)singleton;	// 0x396555
- (id)init;	// 0x396829
- (void)dealloc;	// 0x3968a5
// converted property getter: - (BOOL)enabled;	// 0x396a51
- (id)objectForKey:(id)key;	// 0x39696d
- (void)purge;	// 0x3969fd
- (void)removeObjectForKey:(id)key;	// 0x3969b5
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x396a61
- (void)setObject:(id)object forKey:(id)key;	// 0x396921
@end

