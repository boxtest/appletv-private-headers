/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, AVAudioSessionMediaPlayerOnlyInternal;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnly : NSObject {
	AVAudioSessionMediaPlayerOnlyInternal *_audioSession;	// 4 = 0x4
}
@property(assign, getter=isApplicationAudioSession) BOOL applicationAudioSession;	// G=0x302c83e1; S=0x302c8475; converted property
@property(readonly, assign) NSString *category;	// G=0x302c7fc1; 
@property(readonly, assign) int currentHardwareInputNumberOfChannels;	// G=0x302c8099; 
@property(readonly, assign) int currentHardwareOutputNumberOfChannels;	// G=0x302c809d; 
@property(readonly, assign) double currentHardwareSampleRate;	// G=0x302c8081; 
@property(assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate;	// G=0x302c7c0d; S=0x302c7c2d; 
@property(readonly, assign) BOOL inputIsAvailable;	// G=0x302c8079; 
@property(readonly, assign) NSString *mode;	// G=0x302c80a1; 
@property(readonly, assign) double preferredHardwareSampleRate;	// G=0x302c8049; 
@property(readonly, assign) double preferredIOBufferDuration;	// G=0x302c8061; 
+ (void)initialize;	// 0x302c79a1
- (id)init;	// 0x302c7a35
- (void)_addFPListeners;	// 0x302c8615
- (void)_removeFPListeners;	// 0x302c87b9
- (void)_setFigPlayer:(OpaqueFigPlayer *)player;	// 0x302c8519
- (id)_weakReference;	// 0x302c84f9
// declared property getter: - (id)category;	// 0x302c7fc1
// declared property getter: - (int)currentHardwareInputNumberOfChannels;	// 0x302c8099
// declared property getter: - (int)currentHardwareOutputNumberOfChannels;	// 0x302c809d
// declared property getter: - (double)currentHardwareSampleRate;	// 0x302c8081
- (void)dealloc;	// 0x302c7b45
// declared property getter: - (id)delegate;	// 0x302c7c0d
// declared property getter: - (BOOL)inputIsAvailable;	// 0x302c8079
// converted property getter: - (BOOL)isApplicationAudioSession;	// 0x302c83e1
// declared property getter: - (id)mode;	// 0x302c80a1
// declared property getter: - (double)preferredHardwareSampleRate;	// 0x302c8049
// declared property getter: - (double)preferredIOBufferDuration;	// 0x302c8061
- (BOOL)setActive:(BOOL)active error:(id *)error;	// 0x302c7c51
- (BOOL)setActive:(BOOL)active withFlags:(int)flags error:(id *)error;	// 0x302c7c71
// converted property setter: - (void)setApplicationAudioSession:(BOOL)session;	// 0x302c8475
- (BOOL)setCategory:(id)category error:(id *)error;	// 0x302c7d29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302c7c2d
- (BOOL)setMode:(id)mode error:(id *)error;	// 0x302c80c1
- (BOOL)setPreferredHardwareSampleRate:(double)rate error:(id *)error;	// 0x302c7fb9
- (BOOL)setPreferredIOBufferDuration:(double)duration error:(id *)error;	// 0x302c7fbd
@end

