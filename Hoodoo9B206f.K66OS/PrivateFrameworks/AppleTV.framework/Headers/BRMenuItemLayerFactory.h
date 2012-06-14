/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSArray;

@interface BRMenuItemLayerFactory : BRSingleton {
@private
	NSArray *_populators;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x366ed4a1
+ (id)singleton;	// 0x366ed491
- (id)init;	// 0x366ed4b1
- (id)_populatorForObject:(id)object;	// 0x366ed8d9
- (void)dealloc;	// 0x366ed569
- (id)menuItemForObject:(id)object;	// 0x366ed7e5
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x366ed821
- (float)menuItemHeightForObject:(id)object;	// 0x366ed7f9
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x366ed859
- (void)registerPopulator:(Class)populator;	// 0x366ed5b5
- (id)titleForObject:(id)object;	// 0x366ed80d
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x366ed89d
@end
