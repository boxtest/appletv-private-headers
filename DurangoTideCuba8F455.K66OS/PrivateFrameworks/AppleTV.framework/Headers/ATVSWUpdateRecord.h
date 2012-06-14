/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateRecord : NSObject {
@private
	NSMutableDictionary *_currentVersions;	// 4 = 0x4
	NSMutableDictionary *_newVersions;	// 8 = 0x8
	NSMutableArray *_payloadURLs;	// 12 = 0xc
	NSMutableArray *_licenseURLs;	// 16 = 0x10
	NSMutableArray *_payloadLocalPaths;	// 20 = 0x14
	unsigned long long _totalDownloadSize;	// 24 = 0x18
	BOOL _autoUpdate;	// 32 = 0x20
	BOOL _forceFullUpdate;	// 33 = 0x21
}
@property(readonly, assign) BOOL autoUpdate;	// G=0x306a52f1; converted property
@property(assign) BOOL forceFullUpdate;	// G=0x306a52d1; S=0x306a52e1; converted property
@property(readonly, retain) NSMutableArray *licenseURLs;	// G=0x306a5789; converted property
@property(readonly, retain) NSMutableArray *payloadLocalPaths;	// G=0x306a5311; converted property
@property(readonly, retain) NSMutableArray *payloadURLs;	// G=0x306a57b5; converted property
@property(readonly, assign) unsigned long long totalDownloadSize;	// G=0x306a5301; converted property
- (id)init;	// 0x306a5991
- (void)_addCurrentVersion:(id)version forType:(id)type;	// 0x306a5751
- (void)_addDownloadSize:(unsigned long long)size;	// 0x306a6159
- (void)_addLicenseURL:(id)url;	// 0x306a60d5
- (void)_addNewVersion:(id)version forType:(id)type;	// 0x306a5719
- (void)_addPayloadLocalPath:(id)path;	// 0x306a6101
- (void)_addPayloadURL:(id)url;	// 0x306a612d
- (void)_collectCurrentVersions;	// 0x306a5675
- (void)_parseVersionData:(id)data;	// 0x306a5321
- (void)addPayloadLocalPath:(id)path;	// 0x306a6185
// converted property getter: - (BOOL)autoUpdate;	// 0x306a52f1
- (id)currentVersionOfType:(id)type;	// 0x306a5801
- (void)dealloc;	// 0x306a5901
- (id)description;	// 0x306a5869
// converted property getter: - (BOOL)forceFullUpdate;	// 0x306a52d1
// converted property getter: - (id)licenseURLs;	// 0x306a5789
- (id)newVersionOfType:(id)type;	// 0x306a57e1
- (int)numberOfUpdatesAvailable;	// 0x306a5849
// converted property getter: - (id)payloadLocalPaths;	// 0x306a5311
// converted property getter: - (id)payloadURLs;	// 0x306a57b5
- (void)setAutoTriggeredUpdate:(BOOL)update;	// 0x306a52c1
// converted property setter: - (void)setForceFullUpdate:(BOOL)update;	// 0x306a52e1
- (void)setVersionData:(id)data;	// 0x306a58d5
// converted property getter: - (unsigned long long)totalDownloadSize;	// 0x306a5301
- (BOOL)updateAvailableOfType:(id)type;	// 0x306a5821
@end
