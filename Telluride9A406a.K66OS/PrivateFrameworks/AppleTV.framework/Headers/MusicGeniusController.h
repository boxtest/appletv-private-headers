/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MusicGeniusController : MusicController {
@private
	ATVMediaItemRef _geniusSeed;	// 124 = 0x7c
	BOOL _isDataSavedIntoMetadata;	// 128 = 0x80
	NSArray *_dataFromMetadata;	// 132 = 0x84
	BOOL _startGeniusPlayback;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x33189f35; S=0x33189f45; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x33188d95
- (id)initWithSeed:(ATVMediaItemRef)seed;	// 0x33188d0d
- (void)_setup;	// 0x33189f55
- (void)_showMediaMenuView;	// 0x3318a035
- (ATVMediaQueryRef)createDataQuery;	// 0x33188f8d
- (id)data;	// 0x33188ed5
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x33189449
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x33189021
- (void)dealloc;	// 0x33188e75
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x33189309
- (id)indexPathForDataItem:(void *)dataItem;	// 0x331893d9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3318978d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x33189ce1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33189b6d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x331896ad
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x33189de9
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x33189d1d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x331894c5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x331896e1
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x33189f45
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x33189f35
@end
