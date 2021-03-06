/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject {
	id _delegate;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	unsigned short _port;	// 12 = 0xc
	int _proxyProtocol;	// 16 = 0x10
	NSString *_proxyHost;	// 20 = 0x14
	unsigned short _proxyPort;	// 24 = 0x18
	NSString *_proxyAccount;	// 28 = 0x1c
	NSString *_proxyPassword;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *_host;	// G=0x34197785; S=0x34197799; @synthesize
@property(assign, nonatomic) unsigned short _port;	// G=0x341977a9; S=0x341977b9; @synthesize
@property(copy, nonatomic) NSString *_proxyAccount;	// G=0x3419782d; S=0x34197841; @synthesize
@property(copy, nonatomic) NSString *_proxyHost;	// G=0x341977e9; S=0x341977fd; @synthesize
@property(copy, nonatomic) NSString *_proxyPassword;	// G=0x34197851; S=0x34197865; @synthesize
@property(assign, nonatomic) unsigned short _proxyPort;	// G=0x3419780d; S=0x3419781d; @synthesize
@property(assign, nonatomic) int _proxyProtocol;	// G=0x341977c9; S=0x341977d9; @synthesize
@property(assign) id delegate;	// G=0x34197759; S=0x3419776d; @synthesize=_delegate
- (id)initWithHost:(id)host port:(unsigned short)port delegate:(id)delegate;	// 0x34197575
- (id)initWithProxyProtocol:(int)proxyProtocol proxyHost:(id)host proxyPort:(unsigned short)port delegate:(id)delegate;	// 0x341975f9
- (void)_callAccountSettingsDelegateMethod;	// 0x341974e1
- (void)_callProxySettingsDelegateMethod;	// 0x3419747d
- (void)_getProxyAccountAndPasswordFromKeychain;	// 0x34197531
// declared property getter: - (id)_host;	// 0x34197785
// declared property getter: - (unsigned short)_port;	// 0x341977a9
// declared property getter: - (id)_proxyAccount;	// 0x3419782d
// declared property getter: - (id)_proxyHost;	// 0x341977e9
// declared property getter: - (id)_proxyPassword;	// 0x34197851
// declared property getter: - (unsigned short)_proxyPort;	// 0x3419780d
// declared property getter: - (int)_proxyProtocol;	// 0x341977c9
- (void)_takeProxySettingsFromDictionary:(CFDictionaryRef)dictionary;	// 0x34197571
- (void)dealloc;	// 0x341976cd
// declared property getter: - (id)delegate;	// 0x34197759
- (void)retrieveProxyAccountSettings;	// 0x3419768d
- (void)retrieveProxySettings;	// 0x34197689
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3419776d
// declared property setter: - (void)set_host:(id)host;	// 0x34197799
// declared property setter: - (void)set_port:(unsigned short)port;	// 0x341977b9
// declared property setter: - (void)set_proxyAccount:(id)account;	// 0x34197841
// declared property setter: - (void)set_proxyHost:(id)host;	// 0x341977fd
// declared property setter: - (void)set_proxyPassword:(id)password;	// 0x34197865
// declared property setter: - (void)set_proxyPort:(unsigned short)port;	// 0x3419781d
// declared property setter: - (void)set_proxyProtocol:(int)protocol;	// 0x341977d9
@end

