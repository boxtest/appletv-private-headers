/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class CDNDownloadData, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PlaylistBuilder : NSObject {
@private
	NSMutableDictionary *playlists_;	// 4 = 0x4
	CDNDownloadData *selectedCdn_;	// 8 = 0x8
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 12 = 0xc
	int initialPlaylistTrackIndex_;	// 16 = 0x10
	int initialPlaylistStreamIndex_;	// 20 = 0x14
}
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x33370468; S=0x33370434; @synthesize=downloadedContentHeaderDownloadableData_
@property(assign) int initialPlaylistStreamIndex;	// G=0x33370078; S=0x3337008c; @synthesize=initialPlaylistStreamIndex_
@property(assign) int initialPlaylistTrackIndex;	// G=0x333700a0; S=0x333700b4; @synthesize=initialPlaylistTrackIndex_
@property(retain) NSMutableDictionary *playlists;	// G=0x333703c0; S=0x3337038c; @synthesize=playlists_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x33370414; S=0x333703e0; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x3337023c
- (BOOL)build;	// 0x33371df8
- (void)buildMasterPlaylist;	// 0x3337075c
- (BOOL)buildPlaylist:(id)playlist;	// 0x33370b94
- (void)dealloc;	// 0x33370164
- (id)description;	// 0x33370488
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x33370468
// declared property getter: - (int)initialPlaylistStreamIndex;	// 0x33370078
// declared property getter: - (int)initialPlaylistTrackIndex;	// 0x333700a0
- (void)metrics;	// 0x33370074
// declared property getter: - (id)playlists;	// 0x333703c0
- (void)reset;	// 0x333700d8
- (void)selectDownloadedContentHeaderDownloadableDataInitialBitrate;	// 0x333719e4
// declared property getter: - (id)selectedCdn;	// 0x33370414
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x33370434
// declared property setter: - (void)setInitialPlaylistStreamIndex:(int)index;	// 0x3337008c
// declared property setter: - (void)setInitialPlaylistTrackIndex:(int)index;	// 0x333700b4
// declared property setter: - (void)setPlaylists:(id)playlists;	// 0x3337038c
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x333703e0
- (void)sortDownloadedContentHeaderDownloadableDataByBitrates;	// 0x3337012c
@end
