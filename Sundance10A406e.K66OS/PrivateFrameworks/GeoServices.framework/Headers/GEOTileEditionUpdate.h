/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOTileEditionUpdate : NSObject {
	vector<EditionEntry, std::__1::allocator<EditionEntry> > _entries;	// 4 = 0x4
}
- (id).cxx_construct;	// 0x379e7b61
- (void).cxx_destruct;	// 0x379e7b4d
- (void)addTileset:(unsigned)tileset edition:(unsigned)edition provider:(unsigned)provider;	// 0x379e7a9d
- (void)tileset:(unsigned *)tileset edition:(unsigned *)edition provider:(unsigned *)provider atIndex:(unsigned)index;	// 0x379e7b19
- (unsigned)tilesetCount;	// 0x379e7af5
@end

