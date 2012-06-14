/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty {
@private
	int wdValue;	// 8 = 0x8
}
+ (id)mapHorizontalAlignmentValue:(int)value;	// 0x3466b011
+ (id)mapUnderlineValue:(int)value;	// 0x3446fb25
+ (id)mapVerticalAlignmentValue:(int)value;	// 0x3466b05d
- (id)initWithEnum:(int)anEnum;	// 0x34470141
- (id)cssStringForName:(id)name;	// 0x344701c1
- (id)mapHorizontalAlignment;	// 0x34471369
- (id)mapUnderline;	// 0x3466b099
- (id)mapVerticalAlignment;	// 0x34470245
- (int)value;	// 0x34471249
@end
