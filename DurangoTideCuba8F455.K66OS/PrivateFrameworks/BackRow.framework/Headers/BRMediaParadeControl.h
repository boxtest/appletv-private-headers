/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRMediaParadeLayer, BRMediaParadeProvider;

@interface BRMediaParadeControl : BRControl {
@private
	BRMediaParadeLayer *_layer;	// 44 = 0x2c
	BRMediaParadeProvider *_provider;	// 48 = 0x30
	BOOL _waitingForQueue;	// 52 = 0x34
	BOOL _pumpPrimed;	// 53 = 0x35
	BOOL _serializeArtwork;	// 54 = 0x36
}
- (id)init;	// 0x32f317cd
- (void)_queueReady:(id)ready;	// 0x32f32b3d
- (void)_startFeeding;	// 0x32f32b65
- (void)_startFeedingWhenQueueReady;	// 0x32f321c5
- (void)controlWasActivated;	// 0x32f32151
- (void)controlWasDeactivated;	// 0x32f335f5
- (void)dealloc;	// 0x32f3297d
- (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x32f32111
- (void)setImageProxies:(id)proxies;	// 0x32f74b29
- (void)setSerializeArtwork:(BOOL)artwork;	// 0x32f74af1
@end
