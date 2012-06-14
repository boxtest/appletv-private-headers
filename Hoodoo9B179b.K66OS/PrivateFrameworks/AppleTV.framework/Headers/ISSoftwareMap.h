/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ISSoftwareMap : NSObject {
@private
	NSArray *_applications;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *applications;	// G=0x30423c89; 
+ (void)_softwareMappingChangedNotification:(id)notification;	// 0x30423cfd
+ (void)_startWatchingInstallationNotifications;	// 0x30423d31
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x304239f9
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier applicationType:(CFStringRef)type;	// 0x30423a15
+ (id)currentMap;	// 0x30423819
+ (BOOL)currentMapIsValid;	// 0x3042385d
+ (BOOL)haveApplicationsOfType:(CFStringRef)type;	// 0x30423815
+ (void)invalidateCurrentMap;	// 0x30423889
+ (id)loadedMap;	// 0x304238ed
+ (void)setCurrentMap:(id)map;	// 0x30423991
+ (void)startObservingNotifications;	// 0x30423cb1
- (id)init;	// 0x30423729
- (void)_loadFromVendorBags;	// 0x30423d8d
- (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x30423ab9
- (id)applicationForItemIdentifier:(id)itemIdentifier;	// 0x30423ba1
// declared property getter: - (id)applications;	// 0x30423c89
- (id)copySoftwareUpdatesPropertyList;	// 0x30423c99
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)updatesContext;	// 0x30423cad
- (void)dealloc;	// 0x304237c1
@end
