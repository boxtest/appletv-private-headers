/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject {
@private
	NSNetworkSettingsInternal *_internal;	// 4 = 0x4
}
@property(retain) id proxyDictionary;	// G=0x303111bd; S=0x3031141d; converted property
+ (id)sharedNetworkSettings;	// 0x30311175
- (id)init;	// 0x30311111
- (id)_init;	// 0x3031109d
- (void)_listenForProxySettingChanges;	// 0x30310f05
- (void)_updateProxySettings;	// 0x30310e1d
- (BOOL)connectedToInternet:(BOOL)internet;	// 0x30311409
- (void)dealloc;	// 0x30311129
- (BOOL)isProxyNeededForURL:(id)url;	// 0x30311385
// converted property getter: - (id)proxyDictionary;	// 0x303111bd
- (id)proxyPropertiesForURL:(id)url;	// 0x30311201
// converted property setter: - (void)setProxyDictionary:(id)dictionary;	// 0x3031141d
- (void)setProxyPropertiesForURL:(id)url onStream:(CFReadStreamRef)stream;	// 0x30311389
@end
