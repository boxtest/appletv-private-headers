/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaCollection;

__attribute__((visibility("hidden")))
@interface BRMediaCollectionEditor : XXUnknownSuperclass {
	id<BRMediaCollection> _collection;	// 4 = 0x4
}
+ (id)editorForCollection:(id)collection;	// 0x2b2409
+ (void)setImplementationClass:(Class)aClass;	// 0x2b2355
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x2b2365
- (void)addMediaObjectToCollection:(id)collection;	// 0x2b2455
- (void)clearCollection;	// 0x2b245d
- (id)collection;	// 0x2b2461
- (id)collectionCopyWithName:(id)name;	// 0x2b2451
- (void)dealloc;	// 0x2b23bd
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x2b2459
@end

