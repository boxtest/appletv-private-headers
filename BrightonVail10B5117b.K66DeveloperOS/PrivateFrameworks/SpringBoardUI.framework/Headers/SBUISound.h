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
@property(retain, nonatomic) NSString *audioCategory;	// G=0x35659169; S=0x35659179; @synthesize=_audioCategory
@property(assign, nonatomic, getter=isRepeating) BOOL repeats;	// G=0x35659129; S=0x35659139; @synthesize=_repeats
@property(retain, nonatomic) NSString *ringtoneName;	// G=0x35659109; S=0x35659119; @synthesize=_ringtoneName
@property(assign, nonatomic) unsigned soundBehavior;	// G=0x35659149; S=0x35659159; @synthesize=_soundBehavior
@property(assign, nonatomic) int soundType;	// G=0x356590a9; S=0x356590b9; @synthesize=_soundType
@property(assign, nonatomic) unsigned long systemSoundID;	// G=0x356590c9; S=0x356590d9; @synthesize=_systemSoundID
@property(retain, nonatomic) NSDictionary *vibrationPattern;	// G=0x356590e9; S=0x356590f9; @synthesize=_vibrationPattern
+ (id)alertSoundWithSystemSoundID:(unsigned long)systemSoundID;	// 0x35658c4d
- (id)initWithRingtone:(id)ringtone vibrationPattern:(id)pattern repeats:(BOOL)repeats audioCategory:(id)category;	// 0x35658d45
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior;	// 0x35658c8d
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior vibrationPattern:(id)pattern;	// 0x35658cb1
// declared property getter: - (id)audioCategory;	// 0x35659169
- (void)dealloc;	// 0x35658df1
- (id)description;	// 0x35658f25
- (BOOL)isPlaying;	// 0x35658e5d
// declared property getter: - (BOOL)isRepeating;	// 0x35659129
- (BOOL)play;	// 0x35658e95
- (BOOL)playWithCompletionHandler:(id)completionHandler;	// 0x35658ead
// declared property getter: - (id)ringtoneName;	// 0x35659109
// declared property setter: - (void)setAudioCategory:(id)category;	// 0x35659179
// declared property setter: - (void)setRepeats:(BOOL)repeats;	// 0x35659139
// declared property setter: - (void)setRingtoneName:(id)name;	// 0x35659119
// declared property setter: - (void)setSoundBehavior:(unsigned)behavior;	// 0x35659159
// declared property setter: - (void)setSoundType:(int)type;	// 0x356590b9
// declared property setter: - (void)setSystemSoundID:(unsigned long)anId;	// 0x356590d9
// declared property setter: - (void)setVibrationPattern:(id)pattern;	// 0x356590f9
// declared property getter: - (unsigned)soundBehavior;	// 0x35659149
// declared property getter: - (int)soundType;	// 0x356590a9
- (void)stop;	// 0x35658ee9
// declared property getter: - (unsigned long)systemSoundID;	// 0x356590c9
// declared property getter: - (id)vibrationPattern;	// 0x356590e9
@end
