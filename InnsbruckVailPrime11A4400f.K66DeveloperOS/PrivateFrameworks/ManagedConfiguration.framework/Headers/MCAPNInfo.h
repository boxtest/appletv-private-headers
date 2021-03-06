/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import </libobjc.A.h>

@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {
	NSString *_apnName;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_proxy;	// 16 = 0x10
	NSNumber *_proxyPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *apnName;	// G=0x31397fd9; S=0x31397fe9; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x31398049; S=0x31398059; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x31398081; S=0x31398091; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x313980b9; S=0x313980c9; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x31398011; S=0x31398021; @synthesize=_username
- (void).cxx_destruct;	// 0x313980f1
// declared property getter: - (id)apnName;	// 0x31397fd9
- (id)defaultsRepresentation;	// 0x31397db5
- (id)description;	// 0x31397c2d
// declared property getter: - (id)password;	// 0x31398049
// declared property getter: - (id)proxy;	// 0x31398081
// declared property getter: - (id)proxyPort;	// 0x313980b9
// declared property setter: - (void)setApnName:(id)name;	// 0x31397fe9
// declared property setter: - (void)setPassword:(id)password;	// 0x31398059
// declared property setter: - (void)setProxy:(id)proxy;	// 0x31398091
// declared property setter: - (void)setProxyPort:(id)port;	// 0x313980c9
// declared property setter: - (void)setUsername:(id)username;	// 0x31398021
- (id)strippedDefaultsRepresentation;	// 0x31397d3d
// declared property getter: - (id)username;	// 0x31398011
@end

