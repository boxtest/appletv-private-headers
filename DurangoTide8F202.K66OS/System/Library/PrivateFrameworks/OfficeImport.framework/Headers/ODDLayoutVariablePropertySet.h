/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"


__attribute__((visibility("hidden")))
@interface ODDLayoutVariablePropertySet : OADProperties {
@private
	int mDirection;	// 12 = 0xc
	BOOL mHasDirection;	// 16 = 0x10
}
@property(assign) int direction;	// G=0x31abfdb9; S=0x31abfd25; converted property
+ (id)defaultProperties;	// 0x31abfd41
- (id)initWithDefaults;	// 0x31abfde5
// converted property getter: - (int)direction;	// 0x31abfdb9
- (BOOL)hasDirection;	// 0x31abfd85
// converted property setter: - (void)setDirection:(int)direction;	// 0x31abfd25
@end
