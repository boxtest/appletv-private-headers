/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {
	NSString *_apnName;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_proxy;	// 16 = 0x10
	NSNumber *_proxyPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *apnName;	// G=0x32b16655; S=0x32b177f9; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x32b16635; S=0x32b17849; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x32b16625; S=0x32b17871; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x32b16615; S=0x32b17899; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x32b16645; S=0x32b17821; @synthesize=_username
// declared property getter: - (id)apnName;	// 0x32b16655
- (void)dealloc;	// 0x32b171c1
- (id)defaultsRepresentation;	// 0x32b16665
- (id)description;	// 0x32b168a9
// declared property getter: - (id)password;	// 0x32b16635
// declared property getter: - (id)proxy;	// 0x32b16625
// declared property getter: - (id)proxyPort;	// 0x32b16615
// declared property setter: - (void)setApnName:(id)name;	// 0x32b177f9
// declared property setter: - (void)setPassword:(id)password;	// 0x32b17849
// declared property setter: - (void)setProxy:(id)proxy;	// 0x32b17871
// declared property setter: - (void)setProxyPort:(id)port;	// 0x32b17899
// declared property setter: - (void)setUsername:(id)username;	// 0x32b17821
- (id)strippedDefaultsRepresentation;	// 0x32b1683d
// declared property getter: - (id)username;	// 0x32b16645
@end
