/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library
#import "GMM-Structs.h"

@class GMMClientCapabilities;

__attribute__((visibility("hidden")))
@interface GMMDirectionsIconRequest : PBRequest {
	GMMClientCapabilities *_capabilities;	// 4 = 0x4
	BOOL _hasCachedIconVersion;	// 8 = 0x8
	int _cachedIconVersion;	// 12 = 0xc
	XXStruct_19EQxD _cachedIconIDs;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) long long *cachedIconIDs;	// G=0x3158ab21; 
@property(readonly, assign, nonatomic) unsigned cachedIconIDsCount;	// G=0x3158ab0d; 
@property(assign, nonatomic) int cachedIconVersion;	// G=0x3158aac5; S=0x3158aae9; @synthesize=_cachedIconVersion
@property(retain, nonatomic) GMMClientCapabilities *capabilities;	// G=0x3158b0cd; S=0x3158b0dd; @synthesize=_capabilities
@property(assign, nonatomic) BOOL hasCachedIconVersion;	// G=0x3158b101; S=0x3158b111; @synthesize=_hasCachedIconVersion
@property(readonly, assign, nonatomic) BOOL hasCapabilities;	// G=0x3158aaad; 
- (void)addCachedIconID:(long long)anId;	// 0x3158ab45
- (long long)cachedIconIDAtIndex:(unsigned)index;	// 0x3158ab5d
// declared property getter: - (long long *)cachedIconIDs;	// 0x3158ab21
// declared property getter: - (unsigned)cachedIconIDsCount;	// 0x3158ab0d
// declared property getter: - (int)cachedIconVersion;	// 0x3158aac5
// declared property getter: - (id)capabilities;	// 0x3158b0cd
- (void)clearCachedIconIDs;	// 0x3158ab31
- (void)dealloc;	// 0x3158aa59
- (id)description;	// 0x3158ac1d
- (id)dictionaryRepresentation;	// 0x3158ac8d
// declared property getter: - (BOOL)hasCachedIconVersion;	// 0x3158b101
// declared property getter: - (BOOL)hasCapabilities;	// 0x3158aaad
- (BOOL)readFrom:(id)from;	// 0x3158ad69
- (void)setCachedIconIDs:(long long *)ids count:(unsigned)count;	// 0x3158ac05
// declared property setter: - (void)setCachedIconVersion:(int)version;	// 0x3158aae9
// declared property setter: - (void)setCapabilities:(id)capabilities;	// 0x3158b0dd
// declared property setter: - (void)setHasCachedIconVersion:(BOOL)version;	// 0x3158b111
- (void)writeTo:(id)to;	// 0x3158afad
@end

