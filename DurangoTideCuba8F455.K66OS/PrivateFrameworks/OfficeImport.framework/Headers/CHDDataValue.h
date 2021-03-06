/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class EDString;

__attribute__((visibility("hidden")))
@interface CHDDataValue : NSObject {
@private
	CHDDataPoint mDataPoint;	// 4 = 0x4
}
@property(assign) unsigned contentFormatId;	// G=0x32d0d301; S=0x32c3dc29; converted property
@property(assign) CHDDataPoint *dataPoint;	// G=0x32c93ec5; S=0x32d0d311; converted property
@property(assign) int index;	// G=0x32d0d2f1; S=0x32c93e85; converted property
@property(assign) EDValue *value;	// G=0x32c3dc39; S=0x32ca4a69; converted property
+ (id)dataValue;	// 0x32ca49e5
+ (id)dataValueWithIndex:(int)index value:(EDValue *)value;	// 0x32c3dbe1
- (id)init;	// 0x32ca4a25
- (id)initWithIndex:(int)index value:(EDValue *)value;	// 0x32c38b45
- (id).cxx_construct;	// 0x32c38b29
- (void).cxx_destruct;	// 0x32c45a39
// converted property getter: - (unsigned)contentFormatId;	// 0x32d0d301
- (id)contentFormatWithResources:(id)resources;	// 0x32d0d3c5
// converted property getter: - (CHDDataPoint *)dataPoint;	// 0x32c93ec5
// converted property getter: - (int)index;	// 0x32d0d2f1
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x32c3dc29
- (void)setContentFormatWithResources:(id)resources resources:(id)resources2;	// 0x32d0d339
// converted property setter: - (void)setDataPoint:(CHDDataPoint *)point;	// 0x32d0d311
// converted property setter: - (void)setIndex:(int)index;	// 0x32c93e85
// converted property setter: - (void)setValue:(EDValue *)value;	// 0x32ca4a69
// converted property getter: - (EDValue *)value;	// 0x32c3dc39
@end

