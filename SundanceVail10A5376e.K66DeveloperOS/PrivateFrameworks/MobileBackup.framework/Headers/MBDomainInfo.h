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
	NSString *_domainName;	// 4 = 0x4
	unsigned long long _localSize;	// 8 = 0x8
	unsigned long long _remoteSize;	// 16 = 0x10
	BOOL _enabled;	// 24 = 0x18
	BOOL _systemApp;	// 25 = 0x19
	BOOL _restricted;	// 26 = 0x1a
}
@property(readonly, assign, nonatomic, getter=isAppDomain) BOOL appDomain;	// G=0x34ce5a05; 
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x34ce5aa5; 
@property(readonly, assign, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;	// G=0x34ce5a75; 
@property(retain, nonatomic) NSString *domainName;	// G=0x34ce5b01; S=0x34ce5b11; @synthesize=_domainName
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x34ce5b79; S=0x34ce5b89; @synthesize=_enabled
@property(assign, nonatomic) unsigned long long localSize;	// G=0x34ce5b21; S=0x34ce5b39; @synthesize=_localSize
@property(assign, nonatomic) unsigned long long remoteSize;	// G=0x34ce5b4d; S=0x34ce5b65; @synthesize=_remoteSize
@property(assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x34ce5bb9; S=0x34ce5bc9; @synthesize=_restricted
@property(readonly, assign, nonatomic) unsigned long long size;	// G=0x34ce5ad1; 
@property(assign, nonatomic, getter=isSystemApp) BOOL systemApp;	// G=0x34ce5b99; S=0x34ce5ba9; @synthesize=_systemApp
+ (id)domainInfoWithName:(id)name systemApp:(BOOL)app remoteSize:(unsigned long long)size localSize:(unsigned long long)size4 enabled:(BOOL)enabled restricted:(BOOL)restricted;	// 0x34ce5465
+ (id)domainNameForBundleID:(id)bundleID;	// 0x34ce5449
- (id)initWithCoder:(id)coder;	// 0x34ce559d
- (id)initWithDomainName:(id)domainName systemApp:(BOOL)app remoteSize:(unsigned long long)size localSize:(unsigned long long)size4 enabled:(BOOL)enabled restricted:(BOOL)restricted;	// 0x34ce54d5
// declared property getter: - (id)bundleID;	// 0x34ce5aa5
- (id)copyWithZone:(NSZone *)zone;	// 0x34ce588d
- (void)dealloc;	// 0x34ce5841
- (id)description;	// 0x34ce593d
// declared property getter: - (id)domainName;	// 0x34ce5b01
- (void)encodeWithCoder:(id)coder;	// 0x34ce56f9
// declared property getter: - (BOOL)isAppDomain;	// 0x34ce5a05
// declared property getter: - (BOOL)isCameraRollDomain;	// 0x34ce5a75
// declared property getter: - (BOOL)isEnabled;	// 0x34ce5b79
// declared property getter: - (BOOL)isRestricted;	// 0x34ce5bb9
// declared property getter: - (BOOL)isSystemApp;	// 0x34ce5b99
// declared property getter: - (unsigned long long)localSize;	// 0x34ce5b21
// declared property getter: - (unsigned long long)remoteSize;	// 0x34ce5b4d
// declared property setter: - (void)setDomainName:(id)name;	// 0x34ce5b11
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34ce5b89
// declared property setter: - (void)setLocalSize:(unsigned long long)size;	// 0x34ce5b39
// declared property setter: - (void)setRemoteSize:(unsigned long long)size;	// 0x34ce5b65
// declared property setter: - (void)setRestricted:(BOOL)restricted;	// 0x34ce5bc9
// declared property setter: - (void)setSystemApp:(BOOL)app;	// 0x34ce5ba9
// declared property getter: - (unsigned long long)size;	// 0x34ce5ad1
@end

