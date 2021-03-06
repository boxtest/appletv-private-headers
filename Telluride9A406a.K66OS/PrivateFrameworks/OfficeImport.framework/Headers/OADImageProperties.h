/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphicProperties.h"

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties {
@private
	OADImageFill *mImageFill;	// 52 = 0x34
}
@property(retain) id imageFill;	// G=0x328b2251; S=0x328df8b1; converted property
+ (id)defaultProperties;	// 0x328de6b5
- (void)dealloc;	// 0x328a9e39
- (BOOL)hasImageFill;	// 0x328b2281
// converted property getter: - (id)imageFill;	// 0x328b2251
// converted property setter: - (void)setImageFill:(id)fill;	// 0x328df8b1
@end

