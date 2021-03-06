/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_categories;	// 4 = 0x4
}
@property(retain) NSArray *categories;	// G=0x3297a5; S=0x3296b9; converted property
// converted property getter: - (id)categories;	// 0x3297a5
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x329829
- (id)controlFactory;	// 0x3298b9
- (id)dataAtIndex:(long)index;	// 0x3298f5
- (long)dataCount;	// 0x3298d5
- (void)dealloc;	// 0x32966d
- (long)defaultCategoryIndex;	// 0x3297b5
- (id)hashForDataAtIndex:(long)index;	// 0x329915
// converted property setter: - (void)setCategories:(id)categories;	// 0x3296b9
@end

