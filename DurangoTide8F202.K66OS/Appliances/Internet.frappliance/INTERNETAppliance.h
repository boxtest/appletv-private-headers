/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "INTERNETAppliance.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface INTERNETAppliance : XXUnknownSuperclass {
}
+ (void)initialize;	// 0x155a5
- (id)init;	// 0x154cd
- (id)applianceCategories;	// 0x15089
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x161d5
- (void)dealloc;	// 0x15479
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x15071
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x15d0d
- (id)topShelfController;	// 0x15035
@end

@interface INTERNETAppliance (RadioSelectionHandler)
- (BOOL)_handleSelectionOfInternetFavoriteWithAssetID:(id)assetID;	// 0x14d91
- (BOOL)_handleSelectionOfRadioStationWithID:(id)anId title:(id)title inCategory:(id)category;	// 0x14c95
@end

@interface INTERNETAppliance (YTHelpers)
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x14fb1
- (void)_presentYTAsset:(id)asset;	// 0x14f25
@end

@interface INTERNETAppliance (Private)
- (id)_loadExtraCategories;	// 0x16871
@end
