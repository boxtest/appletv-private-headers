/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray, ATVMerchant, ATVVideoAsset;

__attribute__((visibility("hidden")))
@interface ATVVideoAssetUpdater : NSObject {
@private
	ATVVideoAsset *_asset;	// 4 = 0x4
	ATVMerchant *_merchant;	// 8 = 0x8
	NSMutableArray *_refreshTimers;	// 12 = 0xc
	dispatch_queue_s *_httpQueue;	// 16 = 0x10
}
- (id)initWithVideoAsset:(id)videoAsset;	// 0x35d84ad5
- (void)_timerFired:(id)fired;	// 0x35d84f25
- (void)dealloc;	// 0x35d84ead
@end

