/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface BRMediaCollectionGeniusInfo : NSObject {
}
+ (id)geniusInfoForGeniusPlaylist:(id)geniusPlaylist;	// 0x30263cc1
+ (BOOL)isGeniusDBAvailable;	// 0x30263d09
+ (void)setImplementationClass:(Class)aClass;	// 0x30263cb1
- (id)initWithGeniusPlaylist:(id)geniusPlaylist;	// 0x30263d35
- (BOOL)assetIsCurrentSeed:(id)seed;	// 0x30263d61
- (BOOL)assetIsValidSeed:(id)seed;	// 0x30263d65
- (BOOL)playlistIsDirty;	// 0x30263d75
- (BOOL)refreshGeniusPlaylist;	// 0x30263d6d
- (id)saveGeniusPlaylist;	// 0x30263d71
- (BOOL)setGeniusSeed:(id)seed;	// 0x30263d69
@end
