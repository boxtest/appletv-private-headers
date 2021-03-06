/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVPhotoFullScreenViewDataSource.h"
#import "ATVPhotoFullScreenViewDelegate.h"
#import "BRViewController.h"

@class ATVDataClient, ATVPhotoBrowserView, ATVPhotoFullScreenView, ATVDataQuery, BRPhotoControlFactory, ATVDataCollection, NSDateFormatter, NSTimer, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
	NSTimer *_spinnerTimer;	// 104 = 0x68
	BOOL _dataRequiresUpdate;	// 108 = 0x6c
	long _collectionItemCount;	// 112 = 0x70
	BOOL _photoBrowserViewReloadPending;	// 116 = 0x74
	id _screenSaverSetCollectionBlock;	// 120 = 0x78
	ATVPhotoBrowserView *_photoBrowserView;	// 124 = 0x7c
	ATVPhotoFullScreenView *_photoFullScreenView;	// 128 = 0x80
	BRPhotoControlFactory *_controlFactory;	// 132 = 0x84
	ATVDataClient *_dataClient;	// 136 = 0x88
	NSString *_collectionType;	// 140 = 0x8c
	ATVDataCollection *_collection;	// 144 = 0x90
	NSDateFormatter *_dateFormatter;	// 148 = 0x94
	ATVDataQuery *_pendingDataQuery;	// 152 = 0x98
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 156 = 0x9c
	NSArray *_resultData;	// 160 = 0xa0
}
@property(retain, nonatomic) ATVDataCollection *_collection;	// G=0x32d98d; S=0x32d99d; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x32d96d; S=0x32d97d; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x32d92d; S=0x32d93d; @synthesize
@property(retain, nonatomic) ATVDataClient *_dataClient;	// G=0x32d94d; S=0x32d95d; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x32d9ad; S=0x32d9bd; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x32d8ed; S=0x32d8fd; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x32d90d; S=0x32d91d; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x32d9ed; S=0x32d9fd; @synthesize
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0x32d9dd; S=0x32d871; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) ATVDataQuery *pendingDataQuery;	// G=0x32d9cd; S=0x32d819; @synthesize=_pendingDataQuery
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x32d8c9; S=0x32d8dd; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x32d11d
+ (id)controllerForCollectionType:(id)collectionType dataClient:(id)client;	// 0x32d0c9
- (id)initWithColletionType:(id)colletionType collection:(id)collection dataClient:(id)client;	// 0x32d171
// declared property getter: - (id)_collection;	// 0x32d98d
- (long)_collectionItemCount;	// 0x32ed61
// declared property getter: - (id)_collectionType;	// 0x32d96d
// declared property getter: - (id)_controlFactory;	// 0x32d92d
// declared property getter: - (id)_dataClient;	// 0x32d94d
- (void)_dataClientDataUpdated:(id)updated;	// 0x32f709
- (void)_dataClientStatusChanged:(id)changed;	// 0x32f7e9
- (void)_dataQueryComplete:(id)complete;	// 0x32f2e1
// declared property getter: - (id)_dateFormatter;	// 0x32d9ad
- (void)_executeDataQuery;	// 0x32eda5
- (void)_handleSlideshowSelection:(id)selection;	// 0x32e109
- (void)_handleUseForScreensaverSelection:(id)screensaverSelection;	// 0x32e319
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x32e6f1
// declared property getter: - (id)_photoBrowserView;	// 0x32d8ed
// declared property getter: - (id)_photoFullScreenView;	// 0x32d90d
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x32e549
- (void)_playerLastPlayedAsset:(id)asset;	// 0x32e881
- (void)_playerStateChanged:(id)changed;	// 0x32e7d5
- (void)_reload;	// 0x32de49
// declared property getter: - (id)_resultData;	// 0x32d9ed
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x32e8f9
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x32dfad
- (void)_showSpinner;	// 0x32dc91
- (BOOL)_switchToPhotoBrowserView;	// 0x32dd91
- (void)_updateButtons;	// 0x32da0d
- (BOOL)brEventAction:(id)action;	// 0x32d7b5
- (void)controlWasActivated;	// 0x32d675
- (void)controlWasDeactivated;	// 0x32d6ed
- (void)dealloc;	// 0x32d489
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x32ed41
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x32ed2d
- (id)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x32ecd5
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x32eb19
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x32ecc1
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x32eb2d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x32ea81
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x32ea2d
- (void)layoutSubcontrols;	// 0x32d755
- (long)numberOfColumnsInGrid:(id)grid;	// 0x32e9c9
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x32ed0d
- (long)numberOfItemsInGrid:(id)grid;	// 0x32e909
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0x32d9dd
// declared property getter: - (id)pendingDataQuery;	// 0x32d9cd
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x32d8c9
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0x32d871
// declared property setter: - (void)setPendingDataQuery:(id)query;	// 0x32d819
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x32d8dd
// declared property setter: - (void)set_collection:(id)collection;	// 0x32d99d
// declared property setter: - (void)set_collectionType:(id)type;	// 0x32d97d
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x32d93d
// declared property setter: - (void)set_dataClient:(id)client;	// 0x32d95d
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x32d9bd
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x32d8fd
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x32d91d
// declared property setter: - (void)set_resultData:(id)data;	// 0x32d9fd
- (void)wasPushed;	// 0x32d5e5
@end

