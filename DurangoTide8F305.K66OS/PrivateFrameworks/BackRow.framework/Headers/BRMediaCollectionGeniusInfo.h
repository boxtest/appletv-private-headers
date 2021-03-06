/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library


@interface BRMediaCollectionGeniusInfo : NSObject {
}
+ (id)geniusInfoForGeniusPlaylist:(id)geniusPlaylist;	// 0x3295415d
+ (BOOL)isGeniusDBAvailable;	// 0x32954139
+ (void)setImplementationClass:(Class)aClass;	// 0x329540e9
- (id)initWithGeniusPlaylist:(id)geniusPlaylist;	// 0x3295410d
- (BOOL)assetIsCurrentSeed:(id)seed;	// 0x329540f5
- (BOOL)assetIsValidSeed:(id)seed;	// 0x329540f9
- (BOOL)playlistIsDirty;	// 0x32954109
- (BOOL)refreshGeniusPlaylist;	// 0x32954101
- (id)saveGeniusPlaylist;	// 0x32954105
- (BOOL)setGeniusSeed:(id)seed;	// 0x329540fd
@end

