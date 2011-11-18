/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaCollection.h"
#import <NSObject.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaCollection : NSObject <BRMediaCollection> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x35dc6065
- (id)artist;	// 0x35dc61b1
- (id)artistForSorting;	// 0x35dc61b5
- (id)assetEnumerator;	// 0x35dc6181
- (id)childCollections;	// 0x35dc613d
- (id)collectionID;	// 0x35dc6161
- (id)collectionType;	// 0x35dc6145
- (int)count;	// 0x35dc63b9
- (id)date;	// 0x35dc638d
- (void)dealloc;	// 0x35dc60b9
- (long)duration;	// 0x35dc61c9
- (unsigned)hash;	// 0x35dc6105
- (id)imageProxy;	// 0x35dc6179
- (BOOL)isAvailable;	// 0x35dc62e1
- (BOOL)isCompilation;	// 0x35dc61a9
- (BOOL)isHidden;	// 0x35dc6385
- (BOOL)isLocal;	// 0x35dc62dd
- (BOOL)isSingleArtistCompilation;	// 0x35dc61ad
- (BOOL)isValid;	// 0x35dc6165
- (id)mediaAssets;	// 0x35dc617d
- (id)mediaObjectID;	// 0x35dc6169
- (id)mediaType;	// 0x35dc62c1
- (id)mediaTypes;	// 0x35dc61cd
- (id)parentCollection;	// 0x35dc6141
- (void)performSelector:(SEL)selector target:(id)target;	// 0x35dc6391
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x35dc63a5
- (id)provider;	// 0x35dc612d
- (id)title;	// 0x35dc61b9
- (id)titleForSorting;	// 0x35dc61bd
- (id)titleForSortingNoDefault;	// 0x35dc61c5
- (id)titleNoDefault;	// 0x35dc61c1
- (void)willBeDeleted;	// 0x35dc6389
@end

