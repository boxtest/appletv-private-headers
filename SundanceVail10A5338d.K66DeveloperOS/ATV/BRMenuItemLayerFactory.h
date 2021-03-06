/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRMenuItemLayerFactory : BRSingleton {
	NSArray *_populators;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x301549
+ (id)singleton;	// 0x301539
- (id)init;	// 0x301559
- (id)_populatorForObject:(id)object;	// 0x301985
- (void)dealloc;	// 0x301615
- (id)menuItemForObject:(id)object;	// 0x3018a1
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3018dd
- (float)menuItemHeightForObject:(id)object;	// 0x3018b5
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x301915
- (void)registerPopulator:(Class)populator;	// 0x301661
- (id)titleForObject:(id)object;	// 0x3018c9
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x30194d
@end

