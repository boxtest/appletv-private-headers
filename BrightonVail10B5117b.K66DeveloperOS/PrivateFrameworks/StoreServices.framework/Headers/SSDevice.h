/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "SSRequestDelegate.h"

@class SSKeyValueStore, NSSet, SSURLBag, NSString;
@protocol OS_dispatch_queue;

@interface SSDevice : NSObject <SSRequestDelegate> {
	int _deviceType;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	SSKeyValueStore *_keyValueStore;	// 12 = 0xc
	NSString *_localStoreFrontIdentifier;	// 16 = 0x10
	BOOL _localStoreFrontIsTransient;	// 20 = 0x14
	id _mediaLibraryIdentifier;	// 24 = 0x18
	NSString *_productType;	// 28 = 0x1c
	NSString *_productVersion;	// 32 = 0x20
	id _softwareLibraryIdentifier;	// 36 = 0x24
	NSString *_synchedStoreFrontIdentifier;	// 40 = 0x28
	SSURLBag *_urlBag;	// 44 = 0x2c
	NSString *_userAgent;	// 48 = 0x30
	double _batteryLevel;	// 52 = 0x34
	unsigned _batteryMonitorNotification;	// 60 = 0x3c
	IONotificationPortRef _batteryMonitorPort;	// 64 = 0x40
	BOOL _pluggedIn;	// 68 = 0x44
	int _pluggedInToken;	// 72 = 0x48
	int _powerMonitorCount;	// 76 = 0x4c
}
@property(readonly, assign) NSSet *automaticDownloadKinds;	// G=0x356ae5fd; 
@property(readonly, assign) double batteryLevel;	// G=0x356b0751; 
@property(readonly, assign) int deviceType;	// G=0x356b0859; 
@property(readonly, assign) unsigned long deviceTypeIdentifier;	// G=0x356b0449; 
@property(copy) NSString *mediaLibraryIdentifier;	// G=0x356af359; S=0x356b0ff1; 
@property(readonly, assign, getter=isPluggedIn) BOOL pluggedIn;	// G=0x356b092d; 
@property(readonly, assign) NSString *productType;	// G=0x356b0be9; 
@property(readonly, assign) NSString *productVersion;	// G=0x356b0dd9; 
@property(copy) NSString *softwareLibraryIdentifier;	// G=0x356af945; S=0x356b1145; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x356afb3d; 
@property(readonly, assign, getter=isStoreFrontIdentifierTransient) BOOL storeFrontIdentifierTransient;	// G=0x356b0a6d; 
@property(readonly, assign) NSString *synchedStoreFrontIdentifier;	// G=0x356b19a5; 
@property(readonly, assign) NSString *userAgent;	// G=0x356afd21; 
+ (id)copyCachedAvailableItemKinds;	// 0x356b0479
+ (id)currentDevice;	// 0x356ae591
+ (BOOL)promptNeedsDisplay:(id)display;	// 0x356b0535
+ (BOOL)setCachedAvailableItemKinds:(id)kinds;	// 0x356b05f9
+ (void)setLastPromptAttemptDate:(id)date forPromptWithIdentifier:(id)identifier;	// 0x356b0675
+ (void)setPromptWithIdentifier:(id)identifier needsDisplay:(BOOL)display;	// 0x356b06b9
- (id)init;	// 0x356ae209
- (void)_cacheKeyValueStoreValues;	// 0x356b1ce1
- (id)_copyGSCapabilityValueForKey:(CFStringRef)key;	// 0x356b2405
- (id)_copyKeyValueStoreValueForDomain:(id)domain key:(id)key;	// 0x356b2451
- (id)_copyProductType;	// 0x356b2621
- (int)_deviceClass;	// 0x356b2631
- (int)_deviceType;	// 0x356b2691
- (int)_deviceTypeForProductType:(id)productType;	// 0x356b26ed
- (int)_deviceTypeForUnknownAppleTV:(id)unknownAppleTV;	// 0x356b27f9
- (int)_deviceTypeForUnknownIPad:(id)unknownIPad;	// 0x356b28a9
- (int)_deviceTypeForUnknownIPhone:(id)unknownIPhone;	// 0x356b2959
- (int)_deviceTypeForUnknownIPod:(id)unknownIPod;	// 0x356b29d9
- (BOOL)_getDeviceType:(unsigned *)type error:(id *)error;	// 0x356b2a59
- (void)_invalidateSoftwareCUID;	// 0x356b2c05
- (BOOL)_is1080pCapable;	// 0x356b2ce1
- (BOOL)_is720pCapable;	// 0x356b2c9d
- (void)_postStoreFrontDidChangeNotification;	// 0x356b2d5d
- (id)_productVersion;	// 0x356b2de1
- (void)_reloadAfterStoreFrontChange;	// 0x356b2e59
- (void)_reloadPluggedInState;	// 0x356b30a9
- (BOOL)_setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x356b3115
- (void)_updateAutomaticDownloadKinds:(id)kinds withValue:(id)value completionBlock:(id)block;	// 0x356b3289
- (void)_updateBatteryLevelFromService:(unsigned)service;	// 0x356b3489
// declared property getter: - (id)automaticDownloadKinds;	// 0x356ae5fd
// declared property getter: - (double)batteryLevel;	// 0x356b0751
- (id)copyStoreFrontRequestHeaders;	// 0x356ae8e9
- (void)dealloc;	// 0x356ae3e5
// declared property getter: - (int)deviceType;	// 0x356b0859
// declared property getter: - (unsigned long)deviceTypeIdentifier;	// 0x356b0449
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(id)completionBlock;	// 0x356b0b3d
- (void)getAvailableItemKindsWithBlock:(id)block;	// 0x356ae94d
- (void)getCellularNetworkingAllowedWithBlock:(id)block;	// 0x356aed2d
// declared property getter: - (BOOL)isPluggedIn;	// 0x356b092d
// declared property getter: - (BOOL)isStoreFrontIdentifierTransient;	// 0x356b0a6d
- (void)loadStoreFrontWithCompletionHandler:(id)completionHandler;	// 0x356aee69
// declared property getter: - (id)mediaLibraryIdentifier;	// 0x356af359
- (void)minusAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x356b0b91
// declared property getter: - (id)productType;	// 0x356b0be9
// declared property getter: - (id)productVersion;	// 0x356b0dd9
- (void)reloadStoreFrontIdentifier;	// 0x356b0f89
- (void)resetStoreFrontForSignOut;	// 0x356b1c7d
- (void)setAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x356b0f99
- (void)setCellularNetworkingAllowed:(BOOL)allowed;	// 0x356af551
// declared property setter: - (void)setMediaLibraryIdentifier:(id)identifier;	// 0x356b0ff1
// declared property setter: - (void)setSoftwareLibraryIdentifier:(id)identifier;	// 0x356b1145
- (void)setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x356b12b5
- (void)setStoreFrontWithResponseHeaders:(id)responseHeaders;	// 0x356af5e5
- (void)showPromptWithIdentifier:(id)identifier completionHandler:(id)handler;	// 0x356af641
// declared property getter: - (id)softwareLibraryIdentifier;	// 0x356af945
- (void)startPowerMonitoring;	// 0x356b1521
- (void)stopPowerMonitoring;	// 0x356b1861
// declared property getter: - (id)storeFrontIdentifier;	// 0x356afb3d
- (BOOL)supportsDeviceCapability:(int)capability;	// 0x356b1929
// declared property getter: - (id)synchedStoreFrontIdentifier;	// 0x356b19a5
- (void)synchronizeAutomaticDownloadKinds;	// 0x356b1b89
- (void)unionAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x356b1c25
// declared property getter: - (id)userAgent;	// 0x356afd21
@end
