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
@property(readonly, assign, nonatomic) MPAVController *player;	// G=0x31a1db35; 
+ (void)initialize;	// 0x31a1d8bd
+ (BOOL)isMusicPlayerControllerServerRunning;	// 0x31a1d9f5
+ (id)sharedInstance;	// 0x31a1da0d
+ (void)startMusicPlayerControllerServerWithDelegate:(id)delegate;	// 0x31a1d929
- (id)initWithDelegate:(id)delegate;	// 0x31a1da1d
- (void)_runMigServer;	// 0x31a20d6d
- (void)dealloc;	// 0x31a1daa5
- (void)forwardInvocation:(id)invocation;	// 0x31a1daf1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31a1db15
// declared property getter: - (id)player;	// 0x31a1db35
@end

