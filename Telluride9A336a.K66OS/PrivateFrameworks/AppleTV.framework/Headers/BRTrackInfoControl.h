/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTrackInfoLayer, NSString, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 48 = 0x30
	BRMediaPlayer *_player;	// 52 = 0x34
	NSString *_lastAssetID;	// 56 = 0x38
}
@property(retain) BRMediaPlayer *player;	// G=0x33acf2c5; S=0x33acf1bd; converted property
- (id)init;	// 0x33acef1d
- (id)_fetchCoverArt;	// 0x33acf4b5
- (void)_playbackAssetChanged:(id)changed;	// 0x33acf5a1
- (void)_playerStateChanged:(id)changed;	// 0x33acf561
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x33acf67d
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x33acf719
- (void)_updateCoverArt:(id)art;	// 0x33acf5b1
- (void)_updateTrackInfo;	// 0x33acf2f5
- (id)accessibilityLabel;	// 0x33acf2d5
- (void)controlWasActivated;	// 0x33acf051
- (void)controlWasDeactivated;	// 0x33acf121
- (void)dealloc;	// 0x33acefad
// converted property getter: - (id)player;	// 0x33acf2c5
// converted property setter: - (void)setPlayer:(id)player;	// 0x33acf1bd
@end
