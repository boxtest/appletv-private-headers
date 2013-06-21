/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOCorrectedField : PBCodable {
	NSString *_correctedValue;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_objectName;	// 12 = 0xc
	BOOL _isMarkedIncorrect;	// 16 = 0x10
	XXStruct_ec15KC _has;	// 17 = 0x11
}
@property(retain, nonatomic) NSString *correctedValue;	// G=0x3400ae1d; S=0x3400ae2d; @synthesize=_correctedValue
@property(retain, nonatomic) NSString *displayName;	// G=0x3400addd; S=0x3400aded; @synthesize=_displayName
@property(readonly, assign, nonatomic) BOOL hasCorrectedValue;	// G=0x3400a699; 
@property(assign, nonatomic) BOOL hasIsMarkedIncorrect;	// G=0x3400a6f5; S=0x3400a6d9; 
@property(readonly, assign, nonatomic) BOOL hasObjectName;	// G=0x3400a681; 
@property(assign, nonatomic) BOOL isMarkedIncorrect;	// G=0x3400ae3d; S=0x3400a6b1; @synthesize=_isMarkedIncorrect
@property(retain, nonatomic) NSString *objectName;	// G=0x3400adfd; S=0x3400ae0d; @synthesize=_objectName
- (void)copyTo:(id)to;	// 0x3400ab45
// declared property getter: - (id)correctedValue;	// 0x3400ae1d
- (void)dealloc;	// 0x3400a615
- (id)description;	// 0x3400a709
- (id)dictionaryRepresentation;	// 0x3400a779
// declared property getter: - (id)displayName;	// 0x3400addd
// declared property getter: - (BOOL)hasCorrectedValue;	// 0x3400a699
// declared property getter: - (BOOL)hasIsMarkedIncorrect;	// 0x3400a6f5
// declared property getter: - (BOOL)hasObjectName;	// 0x3400a681
- (unsigned)hash;	// 0x3400ad3d
- (BOOL)isEqual:(id)equal;	// 0x3400ac35
// declared property getter: - (BOOL)isMarkedIncorrect;	// 0x3400ae3d
// declared property getter: - (id)objectName;	// 0x3400adfd
- (BOOL)readFrom:(id)from;	// 0x3400aa9d
// declared property setter: - (void)setCorrectedValue:(id)value;	// 0x3400ae2d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3400aded
// declared property setter: - (void)setHasIsMarkedIncorrect:(BOOL)incorrect;	// 0x3400a6d9
// declared property setter: - (void)setIsMarkedIncorrect:(BOOL)incorrect;	// 0x3400a6b1
// declared property setter: - (void)setObjectName:(id)name;	// 0x3400ae0d
- (void)writeTo:(id)to;	// 0x3400aaa9
@end
