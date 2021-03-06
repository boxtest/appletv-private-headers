/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRAirportNetwork : XXUnknownSuperclass {
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x385e81; S=0x385e91; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x385bd5; converted property
+ (BOOL)asyncNetworkWithName:(id)name error:(id *)error;	// 0x385b51
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x385b75
- (id)init;	// 0x385be5
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x385ea1
- (void)dealloc;	// 0x385c29
// converted property getter: - (BOOL)isDirected;	// 0x385e81
- (id)name;	// 0x385c6d
- (int)securityType;	// 0x385c8d
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x385e91
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x385bd5
@end

