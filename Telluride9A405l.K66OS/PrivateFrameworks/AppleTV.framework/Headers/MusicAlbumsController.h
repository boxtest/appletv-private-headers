/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MusicAlbumsController : MusicController {
@private
	ATVMediaCollectionRef _artist;	// 124 = 0x7c
	NSNumber *_artistID;	// 128 = 0x80
	NSString *_genre;	// 132 = 0x84
	BOOL _displaysCompilationsOnly;	// 136 = 0x88
	BOOL _displaysAudiobooksOnly;	// 137 = 0x89
}
+ (id)albumsControllerForArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f09cb5
+ (id)albumsControllerForArtistID:(id)artistID dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f09d11
+ (id)allAlbumsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f09af1
+ (id)allAlbumsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x35f09acd
+ (id)allAudiobooksControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x35f09c25
+ (id)allCompilationsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x35f09b85
- (id)initWithArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f09e21
- (id)initWithArtistID:(id)artistID dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f09dc5
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f09d69
- (int)_headerCount;	// 0x35f0ad1d
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x35f0ad45
- (void)_setDisplaysCompilationsOnly:(BOOL)only;	// 0x35f0ad35
- (ATVMediaQueryRef)createDataQuery;	// 0x35f0a19d
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x35f0a3fd
- (ATVMediaQueryRef)createPreDataQuery;	// 0x35f09f5d
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x35f0a359
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x35f0a725
- (void)dealloc;	// 0x35f09ee5
- (id)errorForNoContent;	// 0x35f0a6b9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35f0a97d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35f0aad1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x35f0a8ed
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35f0a7c9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35f0a935
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f0a5b5
- (BOOL)preDataQueryComplete:(id)complete;	// 0x35f09fdd
@end

