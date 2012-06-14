/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, BRMediaType, NSTimer, NSArray;

@interface BRCoverArtPreviewControl : BRControl {
@private
	NSArray *_imageProxies;	// 48 = 0x30
	NSMutableArray *_availableImages;	// 52 = 0x34
	BRMediaType *_mediaType;	// 56 = 0x38
	NSTimer *_crossfadeTimer;	// 60 = 0x3c
	long _imageIndex;	// 64 = 0x40
	float _rotation;	// 68 = 0x44
	BOOL _artworkNeedsDeletterboxing;	// 72 = 0x48
	BOOL _actionAdded;	// 73 = 0x49
	BOOL _onlyDefaultsAvailable;	// 74 = 0x4a
	BOOL _controlWasDeactivated;	// 75 = 0x4b
}
@property(retain) NSArray *imageProxies;	// G=0x33a7badd; S=0x33a7b719; converted property
- (id)init;	// 0x33a7b30d
- (void)_cleanupTimer;	// 0x33a7c1d5
- (void)_crossFadeToNextImage:(id)nextImage;	// 0x33a7c08d
- (void)_imageUnavailable:(id)unavailable;	// 0x33a7c4e1
- (void)_loadImage:(id)image;	// 0x33a7bdd1
- (void)_scheduleTimerOnMainThread;	// 0x33a7c21d
- (void)_updateCoverArt:(id)art;	// 0x33a7c295
- (void)controlWasActivated;	// 0x33a7bb2d
- (void)controlWasDeactivated;	// 0x33a7bcc5
- (void)dealloc;	// 0x33a7b411
// converted property getter: - (id)imageProxies;	// 0x33a7badd
- (void)layoutSubcontrols;	// 0x33a7b4b5
- (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x33a7bdb1
// converted property setter: - (void)setImageProxies:(id)proxies;	// 0x33a7b719
- (void)setImageProxies:(id)proxies immedateLoad:(BOOL)load;	// 0x33a7b72d
- (void)setImageProxy:(id)proxy;	// 0x33a7b6d9
- (void)setMissingAssetType:(id)type;	// 0x33a7baed
- (void)setRotation:(float)rotation;	// 0x33a7bdc1
@end
