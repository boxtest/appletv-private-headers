/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@protocol BRRatingInfoDatabase;

@interface BRParentalControlManager : BRSingleton {
@private
	id<BRRatingInfoDatabase> _ratingInfoDatabase;	// 4 = 0x4
}
@property(assign) BOOL accessControlEnabled;	// G=0x32f1d75d; S=0x32fba631; converted property
@property(assign) int accessModeForPurchase;	// G=0x32fb98f9; S=0x32fb9941; converted property
@property(retain) id defaultRatingSystemID;	// G=0x32fba4e1; S=0x32fba519; converted property
@property(retain) id pin;	// G=0x32fba555; S=0x32fba58d; converted property
@property(retain) id ratingDatabase;	// G=0x32f2b4f9; S=0x32f1c221; converted property
+ (void)setSingleton:(id)singleton;	// 0x32f1c215
+ (id)singleton;	// 0x32f1c1dd
+ (BOOL)storeAccessRestricted;	// 0x32fb9729
- (id)init;	// 0x32f1c1e9
- (int)_accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier isSet:(BOOL *)set;	// 0x32fb9e81
// converted property getter: - (BOOL)accessControlEnabled;	// 0x32f1d75d
- (int)accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x32fb9e31
- (int)accessModeForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank;	// 0x32fb9a01
// converted property getter: - (int)accessModeForPurchase;	// 0x32fb98f9
- (void)clearAccessModeforAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x32fba329
- (int)computeAccessModeForAppliance:(id)appliance withCategoryIdentifier:(id)categoryIdentifier;	// 0x32f1d729
- (int)computeAccessModeForAsset:(id)asset;	// 0x32f2ffa5
- (int)computeAccessModeForPurchase;	// 0x32f2b4cd
- (int)computeAccessModeForPurchaseWithMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank isExplicit:(BOOL)anExplicit;	// 0x32f2b509
// converted property getter: - (id)defaultRatingSystemID;	// 0x32fba4e1
- (int)explicitAccessModeForMediaType:(id)mediaType;	// 0x32f3fced
- (BOOL)hasAccessModeBeenSetForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x32fb9e55
// converted property getter: - (id)pin;	// 0x32fba555
// converted property getter: - (id)ratingDatabase;	// 0x32f2b4f9
// converted property setter: - (void)setAccessControlEnabled:(BOOL)enabled;	// 0x32fba631
- (void)setAccessMode:(int)mode forAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x32fba04d
- (void)setAccessMode:(int)mode forMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withThresholdRank:(id)thresholdRank;	// 0x32fb9bd5
// converted property setter: - (void)setAccessModeForPurchase:(int)purchase;	// 0x32fb9941
// converted property setter: - (void)setDefaultRatingSystemID:(id)anId;	// 0x32fba519
- (void)setExplicitAccessMode:(int)mode forMediaType:(id)mediaType;	// 0x32fb9775
// converted property setter: - (void)setPin:(id)pin;	// 0x32fba58d
// converted property setter: - (void)setRatingDatabase:(id)database;	// 0x32f1c221
- (id)thresholdForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID;	// 0x32fb95c5
@end

