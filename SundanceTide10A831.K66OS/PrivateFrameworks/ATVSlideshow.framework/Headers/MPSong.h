/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class MCSong, NSString, MPSongInternal, MPAudioPlaylist, NSURL;

@interface MPSong : NSObject <NSCoding, NSCopying> {
	NSString *_path;	// 4 = 0x4
	MCSong *_song;	// 8 = 0x8
	MPAudioPlaylist *_parentPlaylist;	// 12 = 0xc
	MPSongInternal *_internal;	// 16 = 0x10
}
@property(copy, nonatomic) NSURL *URL;	// G=0x339818e1; S=0x33981919; @dynamic
@property(assign, nonatomic) float audioVolume;	// G=0x33982079; S=0x339820c5; @dynamic
@property(assign, nonatomic) double duration;	// G=0x33981ce9; S=0x33981d61; @dynamic
@property(assign, nonatomic) double fadeInDuration;	// G=0x33981f81; S=0x33981fa1; @dynamic
@property(assign, nonatomic) double fadeOutDuration;	// G=0x33981ffd; S=0x3398201d; @dynamic
@property(retain) MPAudioPlaylist *parentPlaylist;	// G=0x3398213d; S=0x33982545; converted property
@property(copy, nonatomic) NSString *path;	// G=0x3398177d; S=0x3398178d; @dynamic
@property(retain) MCSong *song;	// G=0x3398214d; S=0x3398239d; converted property
@property(assign, nonatomic) double startTime;	// G=0x33981949; S=0x33981a19; @dynamic
+ (id)song;	// 0x33980ee1
+ (id)songWithPath:(id)path;	// 0x33980f55
+ (id)songWithURL:(id)url;	// 0x33980f19
- (id)init;	// 0x33980f91
- (id)initWithCoder:(id)coder;	// 0x33981371
- (id)initWithPath:(id)path;	// 0x33981561
// declared property getter: - (id)URL;	// 0x339818e1
// declared property getter: - (float)audioVolume;	// 0x33982079
- (void)copyStruct:(id)aStruct;	// 0x339822ad
- (id)copyWithZone:(NSZone *)zone;	// 0x339815a1
- (void)dealloc;	// 0x33981645
- (id)description;	// 0x339816c5
// declared property getter: - (double)duration;	// 0x33981ce9
- (void)encodeWithCoder:(id)coder;	// 0x339810e9
// declared property getter: - (double)fadeInDuration;	// 0x33981f81
// declared property getter: - (double)fadeOutDuration;	// 0x33981ffd
- (int)index;	// 0x3398211d
- (double)maxDuration;	// 0x3398215d
- (id)parentDocument;	// 0x33982285
// converted property getter: - (id)parentPlaylist;	// 0x3398213d
// declared property getter: - (id)path;	// 0x3398177d
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x339820c5
// declared property setter: - (void)setDuration:(double)duration;	// 0x33981d61
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x33981fa1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x3398201d
- (void)setInternalDuration;	// 0x339825a5
- (void)setInternalStartTime;	// 0x339825e1
// converted property setter: - (void)setParentPlaylist:(id)playlist;	// 0x33982545
// declared property setter: - (void)setPath:(id)path;	// 0x3398178d
// converted property setter: - (void)setSong:(id)song;	// 0x3398239d
// declared property setter: - (void)setStartTime:(double)time;	// 0x33981a19
// declared property setter: - (void)setURL:(id)url;	// 0x33981919
// converted property getter: - (id)song;	// 0x3398214d
// declared property getter: - (double)startTime;	// 0x33981949
- (double)stopTime;	// 0x339821f1
@end

