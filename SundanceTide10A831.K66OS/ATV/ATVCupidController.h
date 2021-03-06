/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRDataQueryController.h"

@class ATVDataQuery, NSTimer, NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface ATVCupidController : BRDataQueryController <BRSecureResource> {
	NSTimer *_focusSettleTimer;	// 164 = 0xa4
	int _mode;	// 168 = 0xa8
	NSTimer *_focusDwellTimer;	// 172 = 0xac
	NSIndexPath *_ignoreRepeatedFocusEventsForIndexPath;	// 176 = 0xb0
	ATVDataQuery *_itemsQuery;	// 180 = 0xb4
	NSTimer *_photoStreamAlbumsListReloadTimer;	// 184 = 0xb8
	BOOL __updateOnExhume;	// 188 = 0xbc
	int _numberOfUnhandledItemsQueryRequests;	// 192 = 0xc0
	NSArray *__sectionsData;	// 196 = 0xc4
}
@property(retain, nonatomic) NSArray *_sectionsData;	// G=0xf9fbd; S=0xf9fcd; @synthesize=__sectionsData
@property(assign, nonatomic) BOOL _updateOnExhume;	// G=0xf9f7d; S=0xf9f8d; @synthesize=__updateOnExhume
@property(assign, nonatomic, setter=_setFocusDwellTimer:) NSTimer *focusDwellTimer;	// G=0xf9f1d; S=0xf7805; @synthesize=_focusDwellTimer
@property(assign, nonatomic, setter=_setFocusSettleTimer:) NSTimer *focusSettleTimer;	// G=0xf9eed; S=0xf77c1; @synthesize=_focusSettleTimer
@property(retain, nonatomic) NSIndexPath *ignoreRepeatedFocusEventsForIndexPath;	// G=0xf9f2d; S=0xf9f3d; @synthesize=_ignoreRepeatedFocusEventsForIndexPath
@property(retain, nonatomic) ATVDataQuery *itemsQuery;	// G=0xf9f4d; S=0xf9f5d; @synthesize=_itemsQuery
@property(assign, nonatomic) int mode;	// G=0xf9efd; S=0xf9f0d; @synthesize=_mode
@property(assign, nonatomic) int numberOfUnhandledItemsQueryRequests;	// G=0xf9f9d; S=0xf9fad; @synthesize=_numberOfUnhandledItemsQueryRequests
@property(assign, nonatomic, setter=_photoStreamAlbumsListReloadTimer:) NSTimer *photoStreamAlbumsListReloadTimer;	// G=0xf9f6d; S=0xf7849; @synthesize=_photoStreamAlbumsListReloadTimer
+ (id)cupidController;	// 0xf6fd5
+ (id)cupidControllerWithMode:(int)mode index:(unsigned)index;	// 0xf704d
+ (id)cupidScreenSaverController;	// 0xf7011
+ (void)initialize;	// 0xf6f05
- (id)init;	// 0xf7089
- (id)initWithMode:(int)mode;	// 0xf709d
- (void)_dataClientStatusChanged:(id)changed;	// 0xfb319
- (id)_defaultDescriptionForCollection:(id)collection;	// 0xfa609
- (void)_didFocusItemAtIndexPath:(id)indexPath;	// 0xf9409
- (void)_focusDwellTimerFired:(id)fired;	// 0xf95bd
- (void)_focusSettleTimerFired:(id)fired;	// 0xf936d
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0xfb2c5
- (void)_handleMembershipQueryCompletionFromContextMenu:(id)contextMenu;	// 0xfaf69
- (id)_itemAtIndexPath:(id)indexPath;	// 0xfa145
- (id)_parseSectionsDataFromDataQuery:(id)dataQuery;	// 0xfa1dd
- (id)_photoBrowserControllerForCollection:(id)collection;	// 0xfa6d1
// declared property setter: - (void)_photoStreamAlbumsListReloadTimer:(id)timer;	// 0xf7849
- (void)_photoStreamAlbumsListReloadTimerFired:(id)fired;	// 0xf8395
- (void)_runDataItemsQuery:(id)query;	// 0xf8139
- (void)_runInvitationAlertForCollection:(id)collection invitationAccepted:(BOOL *)accepted invitationDeclined:(BOOL *)declined;	// 0xfafb9
- (void)_screenSaverActivated:(id)activated;	// 0xfb3a1
- (id)_sectionItemsForSectionIndex:(int)sectionIndex;	// 0xf9fdd
// declared property getter: - (id)_sectionsData;	// 0xf9fbd
// declared property setter: - (void)_setFocusDwellTimer:(id)timer;	// 0xf7805
// declared property setter: - (void)_setFocusSettleTimer:(id)timer;	// 0xf77c1
- (void)_setScreenSaverPhotoCollection:(id)collection;	// 0xfb22d
- (void)_showMembershipQueryErrorDialog:(id)dialog;	// 0xfae09
- (void)_stillFocusedOnItemAtIndexPath:(id)indexPath;	// 0xf95dd
// declared property getter: - (BOOL)_updateOnExhume;	// 0xf9f7d
- (BOOL)brEventAction:(id)action;	// 0xf769d
- (BOOL)dataClientUpdated:(id)updated;	// 0xf7939
- (BOOL)dataQueryComplete:(id)complete;	// 0xf8431
- (void)dealloc;	// 0xf7275
- (id)errorForNoContent;	// 0xf788d
// declared property getter: - (id)focusDwellTimer;	// 0xf9f1d
// declared property getter: - (id)focusSettleTimer;	// 0xf9eed
// declared property getter: - (id)ignoreRepeatedFocusEventsForIndexPath;	// 0xf9f2d
- (BOOL)isQueryResultValid:(id)valid;	// 0xf8475
// declared property getter: - (id)itemsQuery;	// 0xf9f4d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xf921d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0xf97b1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xf90a5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xf906d
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0xf8c15
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xf8d01
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xf8c5d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xf8519
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xf8a25
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xf8ad1
// declared property getter: - (int)mode;	// 0xf9efd
- (id)newDataQuery;	// 0xf78ad
- (long)numberOfSectionsInList:(id)list;	// 0xf89fd
// declared property getter: - (int)numberOfUnhandledItemsQueryRequests;	// 0xf9f9d
// declared property getter: - (id)photoStreamAlbumsListReloadTimer;	// 0xf9f6d
- (id)providersForContextMenu;	// 0xf9945
- (id)secureResourceAuthenticator;	// 0xf84c1
// declared property setter: - (void)setIgnoreRepeatedFocusEventsForIndexPath:(id)indexPath;	// 0xf9f3d
// declared property setter: - (void)setItemsQuery:(id)query;	// 0xf9f5d
// declared property setter: - (void)setMode:(int)mode;	// 0xf9f0d
// declared property setter: - (void)setNumberOfUnhandledItemsQueryRequests:(int)unhandledItemsQueryRequests;	// 0xf9fad
// declared property setter: - (void)set_sectionsData:(id)data;	// 0xf9fcd
// declared property setter: - (void)set_updateOnExhume:(BOOL)exhume;	// 0xf9f8d
- (void)wasBuried;	// 0xf7445
- (void)wasExhumed;	// 0xf7565
- (void)wasPopped;	// 0xf736d
- (void)wasPushed;	// 0xf7305
@end

