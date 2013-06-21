/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
	NSSet *_addressBookHomes;	// 76 = 0x4c
	NSSet *_directoryGatewayURLs;	// 80 = 0x50
}
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x336f2721; @synthesize=_addressBookHomes
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x336f2735; @synthesize=_directoryGatewayURLs
- (id)_copyAccountPropertiesPropFindElements;	// 0x336f2455
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x336f253d
// declared property getter: - (id)addressBookHomes;	// 0x336f2721
- (void)dealloc;	// 0x336f2351
- (id)description;	// 0x336f23b5
- (id)directoryGatewayURL;	// 0x336f2701
// declared property getter: - (id)directoryGatewayURLs;	// 0x336f2735
- (id)homeSet;	// 0x336f252d
@end
