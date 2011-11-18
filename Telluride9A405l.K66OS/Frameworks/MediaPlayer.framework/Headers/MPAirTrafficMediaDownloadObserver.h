/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"

@class NSString;

@interface MPAirTrafficMediaDownloadObserver : MPMediaDownloadObserver {
@private
	NSString *_assetIdentifier;	// 20 = 0x14
	double _lastDownloadProgress;	// 24 = 0x18
}
+ (void)connection:(id)connection updatedProgress:(id)progress;	// 0x33c61ba9
+ (void)initialize;	// 0x33c61b29
+ (void)registerObserver:(id)observer forAssetID:(id)assetID;	// 0x33c61da5
+ (void)unregisterObserver:(id)observer forAssetID:(id)assetID;	// 0x33c61f1d
- (id)initWithAssetIdentifier:(id)assetIdentifier;	// 0x33c62055
- (void)_onQueue_invalidate;	// 0x33c62139
- (void)dealloc;	// 0x33c620e5
- (double)downloadProgress;	// 0x33c62195
@end

