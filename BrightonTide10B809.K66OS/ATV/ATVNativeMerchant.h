/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMerchant.h"

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVNativeMerchant : ATVFeedMerchant {
	ATVDataQuery *_pendingDataQuery;	// 16 = 0x10
}
@property(retain, nonatomic) ATVDataQuery *pendingDataQuery;	// G=0x16e829; S=0x16dc61; @synthesize=_pendingDataQuery
+ (id)nativeMerchantIdentifiers;	// 0x16dafd
- (id)initWithIdentifier:(id)identifier;	// 0x16dc1d
- (void)_configureRuntimeSupport;	// 0x16de7d
- (void)_dataClientConnectionChanged:(id)changed;	// 0x16e705
- (void)_photoStreamAccountActivity:(id)activity;	// 0x16e22d
- (void)_photoStreamUpdatedNotification:(id)notification;	// 0x16e291
- (id)_radioViewController;	// 0x16dd3d
- (void)_resetPhotoStreamScreenSaverWithCollectionIDContainedInArray:(id)array;	// 0x16e325
- (void)_sharedPhotoStreamsEnabledStateCanBeToggled:(id)toggled;	// 0x16e78d
- (void)_updatePhotoStreamMainMenuIconBadge;	// 0x16e445
- (id)accountType;	// 0x16dcb5
- (void)dealloc;	// 0x16db8d
// declared property getter: - (id)pendingDataQuery;	// 0x16e829
- (id)rootController;	// 0x16e029
// declared property setter: - (void)setPendingDataQuery:(id)query;	// 0x16dc61
@end
