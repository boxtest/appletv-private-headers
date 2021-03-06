/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL, NSData, NSArray;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *channelAssignments;	// G=0x3264520d; S=0x32645221; 
@property(assign) double currentTime;	// G=0x32644ff9; S=0x32645071; 
@property(readonly, assign) NSData *data;	// G=0x32644d71; 
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x32644d85; S=0x32644d99; 
@property(readonly, assign) double deviceCurrentTime;	// G=0x32645035; 
@property(readonly, assign) double duration;	// G=0x32644dc5; 
@property(assign) BOOL enableRate;	// G=0x32644ea9; S=0x32644e7d; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x326450fd; S=0x32645129; 
@property(readonly, assign) unsigned numberOfChannels;	// G=0x32644fcd; 
@property(assign) int numberOfLoops;	// G=0x326450d5; S=0x326450a9; 
@property(assign) float pan;	// G=0x32644f91; S=0x32644f51; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x32644d29; 
@property(assign) float rate;	// G=0x32644f15; S=0x32644ed5; 
@property(readonly, assign) NSDictionary *settings;	// G=0x32644db1; 
@property(readonly, assign) NSURL *url;	// G=0x32644d5d; 
@property(assign) float volume;	// G=0x32644e41; S=0x32644e01; 
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x326443fd
- (id)initWithData:(id)data error:(id *)error;	// 0x32644aa1
- (float)averagePowerForChannel:(unsigned)channel;	// 0x326451c1
- (id)baseInit;	// 0x32643fe9
- (void)beginInterruption;	// 0x32644175
// declared property getter: - (id)channelAssignments;	// 0x3264520d
// declared property getter: - (double)currentTime;	// 0x32644ff9
// declared property getter: - (id)data;	// 0x32644d71
- (void)dealloc;	// 0x32644375
- (void)decodeError:(id)error;	// 0x326440a5
// declared property getter: - (id)delegate;	// 0x32644d85
// declared property getter: - (double)deviceCurrentTime;	// 0x32645035
// declared property getter: - (double)duration;	// 0x32644dc5
// declared property getter: - (BOOL)enableRate;	// 0x32644ea9
- (void)endInterruption;	// 0x32644239
- (void)endInterruptionWithFlags:(id)flags;	// 0x32644199
- (void)finalize;	// 0x32644321
- (void)finishedPlaying:(id)playing;	// 0x32644021
- (AudioPlayerImpl *)impl;	// 0x32643fd9
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x326450fd
// declared property getter: - (BOOL)isPlaying;	// 0x32644d29
// declared property getter: - (unsigned)numberOfChannels;	// 0x32644fcd
// declared property getter: - (int)numberOfLoops;	// 0x326450d5
// declared property getter: - (float)pan;	// 0x32644f91
- (void)pause;	// 0x32644ce9
- (float)peakPowerForChannel:(unsigned)channel;	// 0x32645175
- (BOOL)play;	// 0x32644c75
- (BOOL)playAtTime:(double)time;	// 0x32644ca5
- (BOOL)prepareToPlay;	// 0x32644c45
- (void)privCommonCleanup;	// 0x3264425d
// declared property getter: - (float)rate;	// 0x32644f15
// declared property setter: - (void)setChannelAssignments:(id)assignments;	// 0x32645221
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x32645071
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32644d99
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x32644e7d
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x32645129
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x326450a9
// declared property setter: - (void)setPan:(float)pan;	// 0x32644f51
// declared property setter: - (void)setRate:(float)rate;	// 0x32644ed5
// declared property setter: - (void)setVolume:(float)volume;	// 0x32644e01
// declared property getter: - (id)settings;	// 0x32644db1
- (void)stop;	// 0x32644d09
- (void)updateMeters;	// 0x32645155
// declared property getter: - (id)url;	// 0x32644d5d
// declared property getter: - (float)volume;	// 0x32644e41
@end

