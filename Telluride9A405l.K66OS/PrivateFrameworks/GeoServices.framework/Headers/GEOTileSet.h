/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, GEOTileSetVersion, NSMutableArray;

@interface GEOTileSet : PBCodable {
	NSString *_baseURL;	// 4 = 0x4
	NSString *_multiTileURL;	// 8 = 0x8
	int _style;	// 12 = 0xc
	GEOTileSetVersion *_preferredVersion;	// 16 = 0x10
	NSMutableArray *_validVersions;	// 20 = 0x14
	int _scale;	// 24 = 0x18
	int _size;	// 28 = 0x1c
	NSMutableArray *_providers;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *baseURL;	// G=0x31454941; S=0x31454951; @synthesize=_baseURL
@property(retain, nonatomic) NSString *multiTileURL;	// G=0x31454975; S=0x31454985; @synthesize=_multiTileURL
@property(retain, nonatomic) GEOTileSetVersion *preferredVersion;	// G=0x314549c9; S=0x314549d9; @synthesize=_preferredVersion
@property(retain, nonatomic) NSMutableArray *providers;	// G=0x31454a71; S=0x31454a81; @synthesize=_providers
@property(assign, nonatomic) int scale;	// G=0x31454a31; S=0x31454a41; @synthesize=_scale
@property(assign, nonatomic) int size;	// G=0x31454a51; S=0x31454a61; @synthesize=_size
@property(assign, nonatomic) int style;	// G=0x314549a9; S=0x314549b9; @synthesize=_style
@property(retain, nonatomic) NSMutableArray *validVersions;	// G=0x314549fd; S=0x31454a0d; @synthesize=_validVersions
- (void)addProvider:(id)provider;	// 0x31453da9
- (void)addValidVersion:(id)version;	// 0x31453d05
// declared property getter: - (id)baseURL;	// 0x31454941
- (void)dealloc;	// 0x31453c71
- (id)description;	// 0x31453e4d
- (id)dictionaryRepresentation;	// 0x31453ebd
// declared property getter: - (id)multiTileURL;	// 0x31454975
// declared property getter: - (id)preferredVersion;	// 0x314549c9
- (id)providerAtIndex:(unsigned)index;	// 0x31453e2d
// declared property getter: - (id)providers;	// 0x31454a71
- (unsigned)providersCount;	// 0x31453e0d
- (BOOL)readFrom:(id)from;	// 0x314542c5
// declared property getter: - (int)scale;	// 0x31454a31
// declared property setter: - (void)setBaseURL:(id)url;	// 0x31454951
// declared property setter: - (void)setMultiTileURL:(id)url;	// 0x31454985
// declared property setter: - (void)setPreferredVersion:(id)version;	// 0x314549d9
// declared property setter: - (void)setProviders:(id)providers;	// 0x31454a81
// declared property setter: - (void)setScale:(int)scale;	// 0x31454a41
// declared property setter: - (void)setSize:(int)size;	// 0x31454a61
// declared property setter: - (void)setStyle:(int)style;	// 0x314549b9
// declared property setter: - (void)setValidVersions:(id)versions;	// 0x31454a0d
// declared property getter: - (int)size;	// 0x31454a51
// declared property getter: - (int)style;	// 0x314549a9
- (id)validVersionAtIndex:(unsigned)index;	// 0x31453d89
// declared property getter: - (id)validVersions;	// 0x314549fd
- (unsigned)validVersionsCount;	// 0x31453d69
- (void)writeTo:(id)to;	// 0x3145460d
@end

