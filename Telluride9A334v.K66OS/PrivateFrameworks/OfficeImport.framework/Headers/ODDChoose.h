/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject {
@private
	NSMutableArray *mWhens;	// 4 = 0x4
	ODDOtherwise *mOtherwise;	// 8 = 0x8
}
@property(retain) id otherwise;	// G=0x357901e9; S=0x3579026d; converted property
- (id)init;	// 0x35790209
- (void)addWhen:(id)when;	// 0x357902ad
- (void)dealloc;	// 0x357902d1
// converted property getter: - (id)otherwise;	// 0x357901e9
// converted property setter: - (void)setOtherwise:(id)otherwise;	// 0x3579026d
- (id)whens;	// 0x357901d9
@end
