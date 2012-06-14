/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRNetworkMediaProvider.h"

@class NSMutableArray;

@interface BRMovieTrailersProvider : BRNetworkMediaProvider {
@private
	NSMutableArray *_mediaCollections;	// 12 = 0xc
	int _lastError;	// 16 = 0x10
}
@property(readonly, assign) int lastError;	// G=0x331d7269; converted property
+ (void)initialize;	// 0x331d6b05
+ (BOOL)trailersAvailable;	// 0x331d6c49
- (id)init;	// 0x331d6cd9
- (BOOL)_addMediaAsset:(id)asset;	// 0x332be9bd
- (void)_loadTrailers;	// 0x331d7279
- (void)_loadTrailersWithResolution:(id)resolution forURL:(id)url;	// 0x331d7491
- (void)_networkStatusChanged:(id)changed;	// 0x331d6c4d
- (void)_postLoadedNotification:(id)notification;	// 0x331d73f5
- (void)dealloc;	// 0x331d6dad
- (int)errorCodeForProvider;	// 0x331d71f1
// converted property getter: - (int)lastError;	// 0x331d7269
- (int)load;	// 0x331d6f61
- (id)mediaForEntityName:(id)entityName;	// 0x331d6e79
- (id)mediaTypes;	// 0x331d6e29
- (id)providerID;	// 0x331d6e6d
- (int)unload;	// 0x331d711d
@end
