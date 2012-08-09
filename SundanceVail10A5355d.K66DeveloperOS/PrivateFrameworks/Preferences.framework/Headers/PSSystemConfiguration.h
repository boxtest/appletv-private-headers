/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library
#import "Preferences-Structs.h"


@interface PSSystemConfiguration : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
}
+ (void)releaseSharedInstance;	// 0x34db1f91
+ (id)sharedInstance;	// 0x34db1f49
- (void)cleanupPrefs;	// 0x34db2085
- (CFStringRef)dataServiceID;	// 0x34db20a9
- (void)dealloc;	// 0x34db1fbd
- (CFStringRef)getServiceIDForPDPContext:(unsigned)pdpcontext;	// 0x34db22d9
- (id)interfaceConfigurationValueForKey:(CFStringRef)key serviceID:(CFStringRef)anId;	// 0x34db2405
- (id)protocolConfiguration:(CFStringRef)configuration serviceID:(CFStringRef)anId;	// 0x34db2611
- (id)protocolConfigurationValueForKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x34db2799
- (void)setInterfaceConfigurationValue:(id)value forKey:(CFStringRef)key serviceID:(CFStringRef)anId;	// 0x34db24ad
- (void)setProtocolConfiguration:(id)configuration protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x34db26b5
- (void)setProtocolConfigurationValue:(id)value forKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x34db2851
- (unsigned char)synchronizeForWriting:(BOOL)writing;	// 0x34db2001
- (CFStringRef)voicemailServiceID;	// 0x34db21c1
@end
