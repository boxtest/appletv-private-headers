/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface STPropVariant : NSObject {
	SsrwPropVariant mProp;	// 4 = 0x4
}
- (id)asDataOfType:(int *)type;	// 0x34a68605
- (void)dealloc;	// 0x34a687ad
- (SsrwPropVariant *)propVariant;	// 0x34a685f5
- (void)setBlobValue:(id)value;	// 0x34a685a5
- (void)setLongValue:(long)value;	// 0x34a68551
- (void)setShortValue:(short)value;	// 0x34a68539
- (void)setStringValue:(id)value;	// 0x34a68569
@end
