/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface SBUISound : NSObject {
	int _soundType;	// 4 = 0x4
	unsigned long _systemSoundID;	// 8 = 0x8
	unsigned _soundBehavior;	// 12 = 0xc
	NSString *_ringtoneName;	// 16 = 0x10
	NSDictionary *_vibrationPattern;	// 20 = 0x14
	NSString *_audioCategory;	// 24 = 0x18
	BOOL _repeats;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *audioCategory;	// G=0x3639d315; S=0x3639d325; @synthesize=_audioCategory
@property(assign, nonatomic, getter=isRepeating) BOOL repeats;	// G=0x3639d2d5; S=0x3639d2e5; @synthesize=_repeats
@property(retain, nonatomic) NSString *ringtoneName;	// G=0x3639d2b5; S=0x3639d2c5; @synthesize=_ringtoneName
@property(assign, nonatomic) unsigned soundBehavior;	// G=0x3639d2f5; S=0x3639d305; @synthesize=_soundBehavior
@property(assign, nonatomic) int soundType;	// G=0x3639d255; S=0x3639d265; @synthesize=_soundType
@property(assign, nonatomic) unsigned long systemSoundID;	// G=0x3639d275; S=0x3639d285; @synthesize=_systemSoundID
@property(retain, nonatomic) NSDictionary *vibrationPattern;	// G=0x3639d295; S=0x3639d2a5; @synthesize=_vibrationPattern
+ (id)alertSoundWithSystemSoundID:(unsigned long)systemSoundID;	// 0x3639cdf9
- (id)initWithRingtone:(id)ringtone vibrationPattern:(id)pattern repeats:(BOOL)repeats audioCategory:(id)category;	// 0x3639cef1
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior;	// 0x3639ce39
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior vibrationPattern:(id)pattern;	// 0x3639ce5d
// declared property getter: - (id)audioCategory;	// 0x3639d315
- (void)dealloc;	// 0x3639cf9d
- (id)description;	// 0x3639d0d1
- (BOOL)isPlaying;	// 0x3639d009
// declared property getter: - (BOOL)isRepeating;	// 0x3639d2d5
- (BOOL)play;	// 0x3639d041
- (BOOL)playWithCompletionHandler:(id)completionHandler;	// 0x3639d059
// declared property getter: - (id)ringtoneName;	// 0x3639d2b5
// declared property setter: - (void)setAudioCategory:(id)category;	// 0x3639d325
// declared property setter: - (void)setRepeats:(BOOL)repeats;	// 0x3639d2e5
// declared property setter: - (void)setRingtoneName:(id)name;	// 0x3639d2c5
// declared property setter: - (void)setSoundBehavior:(unsigned)behavior;	// 0x3639d305
// declared property setter: - (void)setSoundType:(int)type;	// 0x3639d265
// declared property setter: - (void)setSystemSoundID:(unsigned long)anId;	// 0x3639d285
// declared property setter: - (void)setVibrationPattern:(id)pattern;	// 0x3639d2a5
// declared property getter: - (unsigned)soundBehavior;	// 0x3639d2f5
// declared property getter: - (int)soundType;	// 0x3639d255
- (void)stop;	// 0x3639d095
// declared property getter: - (unsigned long)systemSoundID;	// 0x3639d275
// declared property getter: - (id)vibrationPattern;	// 0x3639d295
@end

