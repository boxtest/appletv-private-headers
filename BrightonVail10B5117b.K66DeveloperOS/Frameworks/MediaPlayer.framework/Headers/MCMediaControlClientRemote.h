/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MCMediaControlClientRemote : NSObject {
}
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec2a9
- (void)dealloc;	// 0x31dec1fd
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec5f1
- (void)getPositionWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec66d
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec7e1
- (void)invalidate;	// 0x31dec299
- (void)playRemoteWithParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec49d
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec3ad
- (void)setEventHandlerQueue:(id)queue eventHandlerBlock:(id)block;	// 0x31dec8d9
- (void)setHost:(id)host;	// 0x31dec245
- (void)setPassword:(id)password;	// 0x31dec359
- (void)setPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec6e9
- (void)setRate:(float)rate completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec765
- (void)setVolume:(float)volume completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec85d
- (void)stopWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x31dec575
@end

