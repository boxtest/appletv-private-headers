/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMusicMetadataControl : BRControl {
	BRMarqueeTextControl *_songTitle;	// 84 = 0x54
	BRTextControl *_songArtist;	// 88 = 0x58
	BRTextControl *_albumTitle;	// 92 = 0x5c
	BRTextControl *_trackInfo;	// 96 = 0x60
	BRTextControl *_duration;	// 100 = 0x64
	BRTextControl *_releaseDate;	// 104 = 0x68
	BRTextControl *_price;	// 108 = 0x6c
	BOOL _scrollingAllowed;	// 112 = 0x70
}
@property(assign) BOOL scrollingAllowed;	// G=0x2cc9ad; S=0x2cc971; converted property
- (id)init;	// 0x2cbea9
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x2cc9e1
- (id)_metadataMusicDetailsAttributes;	// 0x2cc9bd
- (id)_metadataMusicSongTitleAttributes;	// 0x2cca05
- (void)controlWasActivated;	// 0x2cc0e1
- (void)controlWasDeactivated;	// 0x2cc13d
- (void)dealloc;	// 0x2cc019
- (void)layoutSubcontrols;	// 0x2cc559
// converted property getter: - (BOOL)scrollingAllowed;	// 0x2cc9ad
- (void)setAlbumTitle:(id)title;	// 0x2cc2b9
- (void)setDuration:(id)duration;	// 0x2cc3a1
- (void)setPrice:(id)price;	// 0x2cc489
- (void)setReleaseDate:(id)date;	// 0x2cc415
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x2cc971
- (void)setSongArtist:(id)artist;	// 0x2cc245
- (void)setSongTitle:(id)title;	// 0x2cc18d
- (void)setTrackInfo:(id)info;	// 0x2cc32d
@end

