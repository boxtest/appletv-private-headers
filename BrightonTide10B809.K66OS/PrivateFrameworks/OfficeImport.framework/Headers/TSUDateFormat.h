/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUDataFormat.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat> {
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x34ad4ee1; S=0x34ad4ef1; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x34ad4c19
- (id)initWithFormat:(id)format name:(id)name;	// 0x34ad4c59
- (id)copyWithZone:(NSZone *)zone;	// 0x34ad4cd1
- (void)dealloc;	// 0x34ad4d29
- (id)description;	// 0x34ad4e7d
- (id)format;	// 0x34ad4ed1
// converted property getter: - (id)formatName;	// 0x34ad4ee1
- (unsigned)hash;	// 0x34ad4e3d
- (BOOL)isEqual:(id)equal;	// 0x34ad4da1
// converted property setter: - (void)setFormatName:(id)name;	// 0x34ad4ef1
@end
