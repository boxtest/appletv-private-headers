/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest {
	NSMutableArray *_requestElements;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x31465415; S=0x31465425; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x31464ee9
- (void)dealloc;	// 0x31464ea5
- (id)description;	// 0x31464f8d
- (id)dictionaryRepresentation;	// 0x31464ffd
- (BOOL)readFrom:(id)from;	// 0x31465169
// declared property getter: - (id)requestElements;	// 0x31465415
- (id)requestElementsAtIndex:(unsigned)index;	// 0x31464f6d
- (unsigned)requestElementsCount;	// 0x31464f4d
- (unsigned)requestTypeCode;	// 0x314653f1
- (Class)responseClass;	// 0x314653f9
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x31465425
- (void)writeTo:(id)to;	// 0x314652dd
@end
