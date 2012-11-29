/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


@interface GQDCallout2Path : GQDPath {
	CGSize mSize;	// 8 = 0x8
	double mCornerRadius;	// 16 = 0x10
	CGPoint mTailPosition;	// 24 = 0x18
	double mTailSize;	// 32 = 0x20
	BOOL mTailAtCenter;	// 40 = 0x28
}
- (id).cxx_construct;	// 0x35d43e0d
- (double)cornerRadius;	// 0x35d43db5
- (CGPathRef)createBezierPath;	// 0x35d43921
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x35d43e11
- (CGSize)size;	// 0x35d43d9d
- (BOOL)tailAtCenter;	// 0x35d43dfd
- (CGPoint)tailCenter;	// 0x35d437bd
- (CGPoint)tailPosition;	// 0x35d43dcd
- (double)tailSize;	// 0x35d43de5
@end
