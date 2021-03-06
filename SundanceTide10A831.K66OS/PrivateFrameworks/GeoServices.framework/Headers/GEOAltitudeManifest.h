/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "NSXMLParserDelegate.h"


@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate> {
	map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData>> > _triggerData;	// 4 = 0x4
}
+ (id)sharedManager;	// 0x302cde51
- (id)init;	// 0x302cdebd
- (id)initWithoutObserver;	// 0x302cdf49
- (id).cxx_construct;	// 0x302ce35d
- (void).cxx_destruct;	// 0x302ce349
- (void)_activeTileGroupChanged:(id)changed;	// 0x302cdf8d
- (id)availableRegions;	// 0x302ce0fd
- (void)dealloc;	// 0x302ce049
- (void)parseManifest:(id)manifest;	// 0x302ce1f1
- (BOOL)parseXml:(id)xml;	// 0x302ce005
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x302ce295
- (unsigned)versionForRegion:(unsigned)region;	// 0x302ce0a5
@end

