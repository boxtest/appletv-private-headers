/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput;

@interface MRFakeMoviePlayer2 : NSObject {
	AVAsset *_asset;	// 4 = 0x4
	AVAssetReader *_assetReader;	// 8 = 0x8
	AVAssetReaderTrackOutput *_trackOutput;	// 12 = 0xc
	CVBufferRef _imageBuffer;	// 16 = 0x10
	double _playTimeOffset;	// 20 = 0x14
	double _lastImageCopyTime;	// 28 = 0x1c
@private
	double _time;	// 36 = 0x24
	BOOL _isPlaying;	// 44 = 0x2c
}
@property(readonly, assign) CVBufferRef currentImage;	// G=0x355351bd; 
@property(assign, nonatomic) BOOL isPlaying;	// G=0x355354dd; S=0x3553513d; @synthesize=_isPlaying
@property(assign, nonatomic) double time;	// G=0x355354c5; S=0x35535109; @synthesize=_time
- (id)initWithAsset:(id)asset andSize:(CGSize)size;	// 0x35534d41
- (void)cleanup;	// 0x35534f9d
// declared property getter: - (CVBufferRef)currentImage;	// 0x355351bd
- (void)dealloc;	// 0x35534f5d
- (void)getNextImage;	// 0x35535299
// declared property getter: - (BOOL)isPlaying;	// 0x355354dd
// declared property setter: - (void)setIsPlaying:(BOOL)playing;	// 0x3553513d
// declared property setter: - (void)setTime:(double)time;	// 0x35535109
// declared property getter: - (double)time;	// 0x355354c5
@end

