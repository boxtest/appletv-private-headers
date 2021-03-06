/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject {
	MPQueueFeeder *_feeder;	// 4 = 0x4
	unsigned _currentItemIndex;	// 8 = 0x8
	double _currentTime;	// 12 = 0xc
	int _feederMode;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x36efce81; S=0x36efce91; @synthesize=_currentItemIndex
@property(assign, nonatomic) double currentTime;	// G=0x36efcea1; S=0x36efceb9; @synthesize=_currentTime
@property(retain, nonatomic) MPQueueFeeder *feeder;	// G=0x36efce61; S=0x36efce71; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x36efcecd; S=0x36efcedd; @synthesize=_feederMode
- (id)initWithStateOfAVController:(id)avcontroller;	// 0x36efcc81
// declared property getter: - (unsigned)currentItemIndex;	// 0x36efce81
// declared property getter: - (double)currentTime;	// 0x36efcea1
- (void)dealloc;	// 0x36efcd61
- (id)description;	// 0x36efcdad
// declared property getter: - (id)feeder;	// 0x36efce61
// declared property getter: - (int)feederMode;	// 0x36efcecd
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x36efce91
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x36efceb9
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x36efce71
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x36efcedd
@end

