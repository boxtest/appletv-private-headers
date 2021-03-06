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
@property(assign) BOOL enabled;	// G=0x36d0a9; S=0x36d0b9; converted property
+ (void)clearSavedSelectionForOwnerKey:(id)ownerKey;	// 0x36ce09
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey;	// 0x36cbcd
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x36cbf1
+ (void)saveSelection:(id)selection atIndexPath:(id)indexPath forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x36ccfd
+ (id)selectionInfoForOwnerKey:(id)ownerKey;	// 0x36ce49
+ (void)setSingleton:(id)singleton;	// 0x36cbbd
+ (id)singleton;	// 0x36cbad
- (id)init;	// 0x36ce81
- (void)dealloc;	// 0x36cefd
// converted property getter: - (BOOL)enabled;	// 0x36d0a9
- (id)objectForKey:(id)key;	// 0x36cfc5
- (void)purge;	// 0x36d055
- (void)removeObjectForKey:(id)key;	// 0x36d00d
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36d0b9
- (void)setObject:(id)object forKey:(id)key;	// 0x36cf79
@end

