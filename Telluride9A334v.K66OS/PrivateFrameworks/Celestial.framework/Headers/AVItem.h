/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@interface AVItem : NSObject {
@private
	AVItemPrivate *_priv;	// 4 = 0x4
}
@property(assign) float volume;	// G=0x350419dd; S=0x3504c80d; converted property
+ (id)avItem;	// 0x3504ca11
+ (id)avItemWithPath:(id)path error:(id *)error;	// 0x35049af1
- (id)init;	// 0x3503cca9
- (id)initWithError:(id *)error;	// 0x3503ccbd
- (id)initWithPath:(id)path error:(id *)error;	// 0x35044b75
- (int)_instantiateItem;	// 0x3504c7f5
- (id)accessLog;	// 0x3504ca49
- (id)attributeForKey:(id)key;	// 0x3503e519
- (long)beginDownloading;	// 0x3504cc09
- (void)cancelDownload;	// 0x3504cb29
- (id)chapterImageForImageID:(int)imageID;	// 0x3504c8cd
- (void)dealloc;	// 0x3503f589
- (float)downloadProgress;	// 0x3504cb59
- (long)downloadStatus;	// 0x3504c7f9
- (void *)downloadThread;	// 0x3504ccb1
- (double)duration;	// 0x35044d45
- (int)eqPreset;	// 0x350419f1
- (id)errorLog;	// 0x3504cab9
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;	// 0x3504a961
- (id)formatDetailsForTracks;	// 0x3504c8ad
- (CGSize)naturalSize;	// 0x35043401
- (id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;	// 0x3504c8ed
- (id)path;	// 0x35044d0d
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3503d3a9
- (void)setEQPreset:(int)preset;	// 0x3504c85d
- (BOOL)setPath:(id)path error:(id *)error;	// 0x35044bed
// converted property setter: - (void)setVolume:(float)volume;	// 0x3504c80d
- (void)stopDownload;	// 0x3504cbd1
- (id)url;	// 0x3504c9d1
- (id)urlFromPath:(id)path;	// 0x3504c929
// converted property getter: - (float)volume;	// 0x350419dd
@end

