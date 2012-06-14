/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODIHorizonalList3 : NSObject {
@private
	unsigned mMaxPointCount;	// 4 = 0x4
	ODIState *mState;	// 8 = 0x8
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x34e34815
- (id)initWithState:(id)state;	// 0x34e34ea1
- (void)map;	// 0x34e34ef9
- (void)mapBaseStyleFromPoint:(id)point shape:(id)shape;	// 0x34e34e55
- (void)mapOnePillarStyleFromPoint:(id)point shape:(id)shape;	// 0x34e34e09
- (void)mapPillarPoints:(id)points bounds:(CGRect)bounds;	// 0x34e34c11
- (void)mapRoofStyleFromPoint:(id)point shape:(id)shape;	// 0x34e34dcd
- (void)setMaxPointCount:(unsigned)count;	// 0x34e34805
@end
