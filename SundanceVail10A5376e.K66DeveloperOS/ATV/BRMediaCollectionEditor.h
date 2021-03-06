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
+ (id)editorForCollection:(id)collection;	// 0x28f78d
+ (void)setImplementationClass:(Class)aClass;	// 0x28f6d9
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x28f6e9
- (void)addMediaObjectToCollection:(id)collection;	// 0x28f7d9
- (void)clearCollection;	// 0x28f7e1
- (id)collection;	// 0x28f7e5
- (id)collectionCopyWithName:(id)name;	// 0x28f7d5
- (void)dealloc;	// 0x28f741
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x28f7dd
@end

