/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {
@private
	MPMusicPlayerControllerServerInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) MPAVController *player;	// G=0x34e30c41; 
+ (void)initialize;	// 0x34e309c9
+ (BOOL)isMusicPlayerControllerServerRunning;	// 0x34e30b01
+ (id)sharedInstance;	// 0x34e30b19
+ (void)startMusicPlayerControllerServerWithDelegate:(id)delegate;	// 0x34e30a35
- (id)initWithDelegate:(id)delegate;	// 0x34e30b29
- (void)_runMigServer;	// 0x34e33e79
- (void)dealloc;	// 0x34e30bb1
- (void)forwardInvocation:(id)invocation;	// 0x34e30bfd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34e30c21
// declared property getter: - (id)player;	// 0x34e30c41
@end
