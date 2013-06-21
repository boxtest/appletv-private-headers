/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library
#import "SkankKit-Structs.h"

@class NSDictionary, NSMutableDictionary, NSArray, WiFiNetwork, NSString;

@interface WiFiManager : NSObject {
	Apple80211 *_wireless;	// 4 = 0x4
	SCDynamicStoreRef _store;	// 8 = 0x8
	SCPreferencesRef _prefs;	// 12 = 0xc
	NSDictionary *_wirelessDict;	// 16 = 0x10
	NSMutableDictionary *_configCategories;	// 20 = 0x14
	SCNetworkInterfaceRef _interface;	// 24 = 0x18
	SCNetworkServiceRef _service;	// 28 = 0x1c
	NSArray *_dynamicStoreKeys;	// 32 = 0x20
	WiFiNetwork *_current;	// 36 = 0x24
	NSMutableDictionary *_networks;	// 40 = 0x28
	NSMutableDictionary *_favorites;	// 44 = 0x2c
	BOOL _networksChanged;	// 48 = 0x30
	NSMutableDictionary *_decayDict;	// 52 = 0x34
	NSString *_interfaceName;	// 56 = 0x38
	NSString *_macAddress;	// 60 = 0x3c
	BOOL _isConnected;	// 64 = 0x40
	BOOL _enabled;	// 65 = 0x41
	int _autojoin;	// 68 = 0x44
	BOOL _associating;	// 72 = 0x48
	BOOL _isDirty;	// 73 = 0x49
	BOOL _macWorldChannels;	// 74 = 0x4a
	int _scanningMode;	// 76 = 0x4c
	WiFiNetwork *_scanFor;	// 80 = 0x50
	WiFiNetwork *_deferredJoin;	// 84 = 0x54
}
@property(assign) int autojoinMode;	// G=0x3543bd1d; S=0x3543bc91; converted property
@property(readonly, assign) BOOL enabled;	// G=0x3543ad8d; converted property
@property(readonly, retain) NSString *macAddress;	// G=0x3543addd; converted property
@property(readonly, assign) SCDynamicStoreRef store;	// G=0x3543a40d; converted property
@property(assign) int txBitrate;	// G=0x3543c2a9; S=0x3543c2d1; converted property
@property(assign) int txPower;	// G=0x3543c2f9; S=0x3543c341; converted property
+ (id)sharedInstance;	// 0x3543a33d
- (id)init;	// 0x3543a41d
- (void)__scanComplete:(id)complete;	// 0x3543cdd9
- (void)_addNetworkForDictionary:(id)dictionary;	// 0x3543d1c9
- (id)_arrayFromCommaSeparatedString:(id)commaSeparatedString;	// 0x3543c379
- (void)_checkIsCurrentNetwork:(id)network;	// 0x3543d439
- (void)_configurationChanged:(unsigned char)changed;	// 0x3543d681
- (void)_dynamicStoreChanged;	// 0x3543d5e1
- (void)_getCurrentNetworkInfo;	// 0x3543d989
- (void)_initDynamicStoreMonitor;	// 0x3543dbe9
- (void)_initServiceInterface;	// 0x3543da99
- (id)_interfaceName;	// 0x3543d5d1
- (void)_load;	// 0x3543cd91
- (void)_loadFavorites;	// 0x3543c949
- (id)_networkFromDictionary:(id)dictionary;	// 0x3543d3f9
- (void)_save;	// 0x3543cd7d
- (void)_saveFavorites;	// 0x3543c901
- (void)_scanComplete:(id)complete error:(int)error;	// 0x3543d0f5
- (void)_setInterfaceConfigValue:(id)value forKey:(CFStringRef)key;	// 0x3543c59d
- (void)_setSCValue:(id)value forKey:(CFStringRef)key protocol:(CFStringRef)protocol;	// 0x3543c451
- (void)_setupAirportHardwareEntity;	// 0x3543cb9d
- (void)_updateAutojoinInformation;	// 0x3543c655
// converted property getter: - (int)autojoinMode;	// 0x3543bd1d
- (id)availableNetworks;	// 0x3543bfd5
- (void)cleanupNetworks;	// 0x3543c0b5
- (void)configureJoinDict:(CFDictionaryRef)dict forWPAType:(int)wpatype;	// 0x3543af19
- (BOOL)connected;	// 0x3543ae01
- (id)currentNetwork:(BOOL)network;	// 0x3543abd5
- (id)currentNetworkInfo;	// 0x3543ab79
- (void)dealloc;	// 0x3543a9d1
// converted property getter: - (BOOL)enabled;	// 0x3543ad8d
- (void)forgetNetwork:(id)network;	// 0x3543c0d5
- (void)joinNetwork:(id)network;	// 0x3543b091
// converted property getter: - (id)macAddress;	// 0x3543addd
- (BOOL)networkIsFavorite:(id)favorite;	// 0x3543c1b1
- (void)removeNetworkNamed:(id)named;	// 0x3543c04d
- (void)renewLease;	// 0x3543b701
- (void)save;	// 0x3543c03d
- (BOOL)scanForNetwork:(id)network;	// 0x3543a701
// converted property setter: - (void)setAutojoinMode:(int)mode;	// 0x3543bc91
- (void)setConfigurationType:(int)type network:(id)network;	// 0x3543b8e5
- (void)setDHCPClientID:(id)anId network:(id)network;	// 0x3543b855
- (void)setDNSServers:(id)servers network:(id)network;	// 0x3543bc05
- (BOOL)setEnabled:(BOOL)enabled;	// 0x3543ae91
- (void)setIPAddress:(id)address network:(id)network;	// 0x3543b989
- (void)setPassword:(id)password network:(id)network;	// 0x3543bd85
- (void)setProxyPassword:(id)password network:(id)network;	// 0x3543bfa9
- (void)setProxyPort:(id)port network:(id)network;	// 0x3543becd
- (void)setProxyServer:(id)server network:(id)network;	// 0x3543bdb1
- (void)setProxyUsername:(id)username network:(id)network;	// 0x3543bf7d
- (void)setProxyUsesAuthentication:(BOOL)authentication network:(id)network;	// 0x3543bf79
- (void)setRouterAddress:(id)address network:(id)network;	// 0x3543ba39
- (void)setSearchDomains:(id)domains network:(id)network;	// 0x3543bb79
- (void)setSecurityType:(int)type network:(id)network;	// 0x3543bd2d
- (void)setSubnetMask:(id)mask network:(id)network;	// 0x3543bac9
// converted property setter: - (void)setTxBitrate:(int)bitrate;	// 0x3543c2d1
// converted property setter: - (void)setTxPower:(int)power;	// 0x3543c341
- (void)setUsername:(id)username network:(id)network;	// 0x3543bd59
- (int)signalStrengthForDict:(id)dict;	// 0x3543c1f1
// converted property getter: - (SCDynamicStoreRef)store;	// 0x3543a40d
// converted property getter: - (int)txBitrate;	// 0x3543c2a9
// converted property getter: - (int)txPower;	// 0x3543c2f9
@end
