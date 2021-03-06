/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicCollectionController.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicCollectionController {
	int _mode;	// 164 = 0xa4
	NSString *_genre;	// 168 = 0xa8
	NSMutableArray *_artistData;	// 172 = 0xac
}
+ (id)allArtistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1c5ee5
+ (id)allComposersControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1c5f81
+ (id)artistsControllerByGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1c601d
- (id)initWithGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1c6065
- (int)_headerCount;	// 0x1c70cd
- (void)_setMode:(int)mode;	// 0x1c70bd
- (id)data;	// 0x1c62c1
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1c6fed
- (BOOL)dataQueryComplete:(id)complete;	// 0x1c6295
- (void)dealloc;	// 0x1c60e9
- (id)errorForNoContent;	// 0x1c6a29
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1c6bd9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1c6c69
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1c6b85
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1c6a49
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1c6b91
- (id)newDataQuery;	// 0x1c6161
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1c67b1
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1c6555
- (void)playQueryComplete:(id)complete;	// 0x1c690d
- (BOOL)shouldShowSearch;	// 0x1c708d
- (int)typeaheadSelectionOffset;	// 0x1c707d
@end

