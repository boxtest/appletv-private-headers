/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEORegionProvider : PBCodable {
	NSMutableArray *_regions;	// 4 = 0x4
	NSString *_provider;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasProvider;	// G=0x32d0a61d; 
@property(retain, nonatomic) NSString *provider;	// G=0x32d0ab51; S=0x32d0ab61; @synthesize=_provider
@property(retain, nonatomic) NSMutableArray *regions;	// G=0x32d0ab1d; S=0x32d0ab2d; @synthesize=_regions
- (void)addRegion:(id)region;	// 0x32d0a579
- (void)dealloc;	// 0x32d0a521
- (id)description;	// 0x32d0a635
- (id)dictionaryRepresentation;	// 0x32d0a6a5
// declared property getter: - (BOOL)hasProvider;	// 0x32d0a61d
// declared property getter: - (id)provider;	// 0x32d0ab51
- (BOOL)readFrom:(id)from;	// 0x32d0a841
- (id)regionAtIndex:(unsigned)index;	// 0x32d0a5fd
// declared property getter: - (id)regions;	// 0x32d0ab1d
- (unsigned)regionsCount;	// 0x32d0a5dd
// declared property setter: - (void)setProvider:(id)provider;	// 0x32d0ab61
// declared property setter: - (void)setRegions:(id)regions;	// 0x32d0ab2d
- (void)writeTo:(id)to;	// 0x32d0a9e5
@end
