/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"

@class NSMutableArray;

@interface MPMediaCollectionDownloadObserver : MPMediaDownloadObserver {
	NSMutableArray *_downloadObservers;	// 24 = 0x18
	BOOL _callingProgressHandler;	// 28 = 0x1c
}
- (id)initWithCollection:(id)collection;	// 0x2e32f5c1
- (void).cxx_destruct;	// 0x2e32fc5d
- (void)_callProgressHandler;	// 0x2e32fc1d
- (void)dealloc;	// 0x2e32f8b1
- (double)downloadProgress;	// 0x2e32f919
- (unsigned)downloadsCount;	// 0x2e32f8f5
- (void)invalidate;	// 0x2e32fa69
- (BOOL)isCurrentlyPlayable;	// 0x2e32fb39
- (BOOL)isPurchasing;	// 0x2e32fb3d
@end

