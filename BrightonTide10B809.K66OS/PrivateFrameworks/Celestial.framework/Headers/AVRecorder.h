/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVRecorder : NSObject {
	AVRecorderPrivate *_priv;	// 4 = 0x4
}
@property(retain) id filePath;	// G=0x335d99a1; S=0x335d9951; converted property
@property(assign) float micVolume;	// G=0x335d9cfd; S=0x335d9d25; converted property
- (id)init;	// 0x335d9811
- (BOOL)activate:(id *)activate;	// 0x335d9ae1
- (id)attributeForKey:(id)key;	// 0x335d9a39
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x335d9df1
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x335d9dc9
- (unsigned)audioNumDeviceChannels;	// 0x335d9da9
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x335d9cb5
- (void)deactivate;	// 0x335d9cdd
- (void)dealloc;	// 0x335d989d
// converted property getter: - (id)filePath;	// 0x335d99a1
- (void)implNotification:(id)notification;	// 0x335d9a6d
- (BOOL)isActive;	// 0x335d9c65
- (BOOL)isRecording;	// 0x335d9c3d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x335d9e19
// converted property getter: - (float)micVolume;	// 0x335d9cfd
- (double)recordedDuration;	// 0x335d9d71
- (long long)recordedFileSizeInBytes;	// 0x335d9d45
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x335d99e9
// converted property setter: - (void)setFilePath:(id)path;	// 0x335d9951
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x335d9d25
- (BOOL)start;	// 0x335d9bf5
- (void)stop;	// 0x335d9c1d
- (BOOL)takePhoto;	// 0x335d9c8d
@end

