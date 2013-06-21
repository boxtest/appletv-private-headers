/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADVector3D, OADPoint3D;

@interface OADBackdrop : NSObject <NSCopying> {
	OADPoint3D *mAnchor;	// 4 = 0x4
	OADVector3D *mNormal;	// 8 = 0x8
	OADVector3D *mUp;	// 12 = 0xc
}
@property(retain) id anchor;	// G=0x34a5260d; S=0x34a5261d; converted property
@property(retain) id normal;	// G=0x34a52659; S=0x34a52669; converted property
@property(retain) id up;	// G=0x34a526a5; S=0x34a526b5; converted property
- (id)init;	// 0x34a52495
// converted property getter: - (id)anchor;	// 0x34a5260d
- (id)copyWithZone:(NSZone *)zone;	// 0x34a52569
- (void)dealloc;	// 0x34a524f1
- (unsigned)hash;	// 0x34a526f1
- (BOOL)isEqual:(id)equal;	// 0x34a5274d
// converted property getter: - (id)normal;	// 0x34a52659
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x34a5261d
// converted property setter: - (void)setNormal:(id)normal;	// 0x34a52669
// converted property setter: - (void)setUp:(id)up;	// 0x34a526b5
// converted property getter: - (id)up;	// 0x34a526a5
@end
