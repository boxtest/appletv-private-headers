/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary, MPAVItem;

@interface MPAlternateTracks : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSDictionary *_alternateTracks;	// 8 = 0x8
	NSMutableDictionary *_trackChangeDictionary;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;	// G=0x36ec4731; 
+ (id)fallbackSubtitleOptionForAsset:(id)asset withSelectedAudioOption:(id)selectedAudioOption;	// 0x36ec4871
- (id)initWithItem:(id)item;	// 0x36ec400d
- (id)_keyForTrackType:(unsigned)trackType;	// 0x36ec5ebd
- (id)_titleOfOption:(id)option;	// 0x36ec5f05
- (void)beginTrackChanges;	// 0x36ec4105
- (void)commitTrackChanges;	// 0x36ec4151
- (id)currentTrackForType:(unsigned)type;	// 0x36ec450d
- (void)dealloc;	// 0x36ec407d
- (BOOL)hasTracksForTypes:(unsigned)types;	// 0x36ec4f51
- (unsigned)indexOfCurrentTrackForType:(unsigned)type;	// 0x36ec4561
// declared property getter: - (BOOL)isLoaded;	// 0x36ec4731
- (void)reloadData;	// 0x36ec5035
- (void)setTrack:(id)track forType:(unsigned)type;	// 0x36ec4749
- (unsigned)trackCountForTypes:(unsigned)types;	// 0x36ec4fc1
- (id)tracksForType:(unsigned)type;	// 0x36ec482d
@end
