/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MBDomainInfo : NSObject <NSCopying, NSCoding> {
	BOOL _enabled;	// 4 = 0x4
	BOOL _restricted;	// 5 = 0x5
	BOOL _systemApp;	// 6 = 0x6
	NSString *_domainName;	// 8 = 0x8
	unsigned long long _remoteSize;	// 12 = 0xc
	unsigned long long _localSize;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isAppDomain) BOOL appDomain;	// G=0x35ebf9e5; 
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x35ebfa85; 
@property(readonly, assign, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;	// G=0x35ebfa55; 
@property(retain, nonatomic) NSString *domainName;	// G=0x35ebfb41; S=0x35ebfb51; @synthesize=_domainName
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x35ebfae1; S=0x35ebfaf1; @synthesize=_enabled
@property(assign, nonatomic) unsigned long long localSize;	// G=0x35ebfb8d; S=0x35ebfba5; @synthesize=_localSize
@property(assign, nonatomic) unsigned long long remoteSize;	// G=0x35ebfb61; S=0x35ebfb79; @synthesize=_remoteSize
@property(assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x35ebfb01; S=0x35ebfb11; @synthesize=_restricted
@property(readonly, assign, nonatomic) unsigned long long size;	// G=0x35ebfab1; 
@property(assign, nonatomic, getter=isSystemApp) BOOL systemApp;	// G=0x35ebfb21; S=0x35ebfb31; @synthesize=_systemApp
+ (id)domainInfoWithName:(id)name systemApp:(BOOL)app remoteSize:(unsigned long long)size localSize:(unsigned long long)size4 enabled:(BOOL)enabled restricted:(BOOL)restricted;	// 0x35ebf445
+ (id)domainNameForBundleID:(id)bundleID;	// 0x35ebf429
- (id)initWithCoder:(id)coder;	// 0x35ebf57d
- (id)initWithDomainName:(id)domainName systemApp:(BOOL)app remoteSize:(unsigned long long)size localSize:(unsigned long long)size4 enabled:(BOOL)enabled restricted:(BOOL)restricted;	// 0x35ebf4b5
// declared property getter: - (id)bundleID;	// 0x35ebfa85
- (id)copyWithZone:(NSZone *)zone;	// 0x35ebf86d
- (void)dealloc;	// 0x35ebf821
- (id)description;	// 0x35ebf91d
// declared property getter: - (id)domainName;	// 0x35ebfb41
- (void)encodeWithCoder:(id)coder;	// 0x35ebf6d9
// declared property getter: - (BOOL)isAppDomain;	// 0x35ebf9e5
// declared property getter: - (BOOL)isCameraRollDomain;	// 0x35ebfa55
// declared property getter: - (BOOL)isEnabled;	// 0x35ebfae1
// declared property getter: - (BOOL)isRestricted;	// 0x35ebfb01
// declared property getter: - (BOOL)isSystemApp;	// 0x35ebfb21
// declared property getter: - (unsigned long long)localSize;	// 0x35ebfb8d
// declared property getter: - (unsigned long long)remoteSize;	// 0x35ebfb61
// declared property setter: - (void)setDomainName:(id)name;	// 0x35ebfb51
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35ebfaf1
// declared property setter: - (void)setLocalSize:(unsigned long long)size;	// 0x35ebfba5
// declared property setter: - (void)setRemoteSize:(unsigned long long)size;	// 0x35ebfb79
// declared property setter: - (void)setRestricted:(BOOL)restricted;	// 0x35ebfb11
// declared property setter: - (void)setSystemApp:(BOOL)app;	// 0x35ebfb31
// declared property getter: - (unsigned long long)size;	// 0x35ebfab1
@end
